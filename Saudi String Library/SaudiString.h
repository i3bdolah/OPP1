#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class SaudiString
{
private:
	string _value;

	static char InvertChar(char chr) {
		return isupper(chr) ? tolower(chr) : toupper(chr);
	}

public:
	SaudiString() {
		_value = "";
	}
	SaudiString(string str) {
		_value = str;
	}

	void setValue(string str) {
		_value = str;
	}
	string getValue() {
		return _value;
	}

	__declspec(property(get = getValue, put = setValue)) string value;

	// _______________________ Library _______________________

	static string EnterString(string temp) {
		cout << "Enter The String : " << endl;
		getline(cin, temp);

		return temp;
	}

	string EnterString() {
		return EnterString(_value);
	}

	static void PrintFirstLetterInWord(string str) {
		bool isFirstLetter = true;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
			{
				cout << str[i] << endl;
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
		}
	}

	void PrintFirstLetterInWord() {
		return PrintFirstLetterInWord(_value);
	}

	static string UppercaseForFirstLetters(string str) {
		bool isFirstLetter = true;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
			{
				str[i] = toupper(str[i]);
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
		}
		return str;
	}

	string UppercaseForFirstLetters() {
		return UppercaseForFirstLetters(_value);
	}

	static string LowercaseForFirstLetters(string str) {
		bool isFirstLetter = true;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
			{
				str[i] = tolower(str[i]);
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
		}
		return str;
	}

	string LowercaseForFirstLetters() {
		return LowercaseForFirstLetters(_value);
	}

	static string toLowerCase(string str) {
		bool isFirstLetter = true;

		for (int i = 0; i < str.length(); i++)
		{
			str[i] = tolower(str[i]);
		}
		return str;
	}

	string toLowerCase() {
		return toLowerCase(_value);
	}

	static string toUpperCase(string str) {
		bool isFirstLetter = true;

		for (int i = 0; i < str.length(); i++)
		{
			str[i] = toupper(str[i]);
		}
		return str;
	}

	string toUpperCase() {
		return toUpperCase(_value);
	}

	static string InvertAll(string str) {
		for (int i = 0; i < str.length(); i++)
		{
			str[i] = InvertChar(str[i]);
		}
		return str;
	}

	string InvertAll() {
		return InvertAll(_value);
	}

	static bool isLowercaseLetter(char chr) {
		return (char(chr) >= 97 && char(chr) <= 122) ? true : false;
	}

	static bool isUppercaseLetter(char chr) {
		return (char(chr) >= 65 && char(chr) <= 90) ? true : false;
	}

	static int CalcUppercaseLetters(string str) {
		int uppercase = 0;

		for (int i = 0; i < str.length(); i++)
		{
			if (isUppercaseLetter(str[i]))
			{
				uppercase++;
			}
		}
		return uppercase;
	}

	int CalcUppercaseLetters() {
		return CalcUppercaseLetters(_value);
	}

	static int CalcLowercaseLetters(string str) {
		int lowercase = 0;

		for (int i = 0; i < str.length(); i++)
		{
			if (isLowercaseLetter(str[i]))
			{
				lowercase++;
			}
		}
		return lowercase;
	}

	int CalcLowercaseLetters() {
		return CalcLowercaseLetters(_value);
	}

	static int CalcCharInString(string str, char chr) {
		int count = 0;
		string str_temp = toLowerCase(str);
		char chr_temp = tolower(chr);


		for (int i = 0; i < str_temp.length(); i++)
		{
			if (str_temp[i] == chr_temp)
			{
				count++;
			}
		}
		return count;
	}

	int CalcCharInString(char Letter) {
		return CalcCharInString(_value, Letter);
	}

	static bool IfVowelLetter(char chr) {
		char lowerChr = tolower(chr);

		return (lowerChr == 'a' || lowerChr == 'e' || lowerChr == 'i' || lowerChr == 'o' || lowerChr == 'u');
	}

	static int CountVowelLetters(string str) {
		int counter = 0;

		for (int i = 0; i < str.length(); i++)
		{
			if (IfVowelLetter(str[i]))
			{
				counter++;
			}
		}
		return counter;
	}

	int CountVowelLetters() {
		return CountVowelLetters(_value);
	}

	static void PrintVowelLetters(string str) {
		int counter = 0;

		for (int i = 0; i < str.length(); i++)
		{
			if (IfVowelLetter(str[i]))
			{
				cout << setw(3) << str[i];
			}
		}
	}

	void PrintVowelLetters() {
		return PrintVowelLetters(_value);
	}

	static void PrintWordSeparately(string str) {

		string delim = " ";
		string stringInRange = "";
		int pos = 0;

		while ((pos = str.find(delim)) != string::npos)
		{
			stringInRange = str.substr(0, pos);
			if (stringInRange != " ")
			{
				cout << '|' << stringInRange << '|' << endl;
			}

			str.erase(0, pos + delim.length());
		}
		if (str != "")
		{
			cout << '|' << str << '|' << endl;
		}
	}

	void PrintWordSeparately() {
		return PrintWordSeparately(_value);
	}

	static int CountNumberOfWord(string str) {

		string delim = " ";
		string stringInRange = "";
		int pos = 0;
		int counter = 0;

		while ((pos = str.find(delim)) != string::npos)
		{
			stringInRange = str.substr(0, pos);
			if (stringInRange != " ")
			{
				//cout << '|' << stringInRange << '|' << endl;
				counter++;
			}

			str.erase(0, pos + delim.length());
		}
		if (str != "")
		{
			//cout << '|' << str << '|' << endl;
			counter++;
		}
		return counter;
	}

	int CountNumberOfWord() {
		return CountNumberOfWord(_value);
	}

	static vector <string> SplitVector(string sentence, string separator) {
		vector <string> wordsSeperated;
		int pos = 0;
		string strTemp;

		while ((pos = sentence.find(separator)) != string::npos)
		{
			strTemp = sentence.substr(0, pos);
			if (strTemp != separator)
			{
				wordsSeperated.push_back(strTemp.substr(0, (pos)));
			}

			sentence.erase(0, pos + separator.length());
		}

		if (sentence != "" && sentence != separator)
		{
			wordsSeperated.push_back(sentence);
		}

		return wordsSeperated;
	}

	vector <string> SplitVector(string separator) {
		return SplitVector(_value, separator);
	}

	static void PrintVector(vector <string> vector) {

		cout << '\n';
		cout << "Tokens = " << vector.size() << endl;
		for (string& elementInVector : vector)
		{
			cout << '|' << elementInVector << '|' << endl;
		}
	}

	static string TrimRight(string str) {
		int lastIndex = str.length() - 1;
		while (str[lastIndex] == ' ')
		{
			str.erase(lastIndex);
			lastIndex = str.length() - 1;
		}
		return str;
	}

	string TrimRight() {
		return TrimRight(_value);
	}

	static string TrimLeft(string str) {
		while (str[0] == ' ')
		{
			str.erase(0, 1);
		}
		return str;
	}

	string TrimLeft() {
		return TrimLeft(_value);
	}

	static string TrimAll(string str) {
		return TrimLeft(TrimRight(str));
	}

	string TrimAll() {
		return TrimAll(_value);
	}

	static string JoinVector(vector <string> vector, string separator) {
		string wordsJoined;

		for (string& name : vector)
		{
			wordsJoined = wordsJoined + name + separator;
		}

		return wordsJoined.substr(0, wordsJoined.length() - separator.length());
	}

	static string JoinArray(string arr[3], int arrLength, string separator) {
		string wordsJoined;

		for (int i = 0; i < arrLength; i++)
		{
			wordsJoined = wordsJoined + arr[i] + separator;
		}

		return wordsJoined.substr(0, wordsJoined.length() - separator.length());
	}

	static vector <string> ReverseVector(vector <string> vector1) {
		vector <string> newVector;

		for (int i = vector1.size() - 1; i >= 0; i--)
		{
			newVector.push_back(vector1.at(i));
		}
		return newVector;
	}

	static string ReplaceWordInString(string targeted, string replacement, string allWords, bool isCaseSensitive = 1) {
		vector <string> splattedString = SplitVector(allWords, " ");

		if (isCaseSensitive)
		{
			for (string& word : splattedString)
			{
				if (word == targeted)
				{
					word = replacement;
				}
			}
		}
		else {
			for (string& word : splattedString)
			{
				if (toLowerCase(word) == toLowerCase(targeted))
				{
					word = replacement;
				}
			}
		}
		return JoinVector(splattedString, " ");
	}

	string ReplaceWordInString(string targeted, string replacement, bool isCaseSensitive = 1) {
		return ReplaceWordInString(targeted, replacement, _value, isCaseSensitive);
	}

	static string RemovePunctuations(string str) {
		for (int i = 0; i < str.length(); i++)
		{
			if (ispunct(str[i])) {
				str.erase(i, 1);
			}
		}
		return str;
	}

	string RemovePunctuations() {
		return RemovePunctuations(_value);
	}


};

