#include <iostream>
#include "SaudiString.h"

using namespace std;

int main()
{
	cout << "----------------\n*Saudi String Library!*\n----------------\n";

	SaudiString String("ThIs Is A sTrInG fOr TeStInG ThE FuNcTiOnS! 12345.");

	cout << "The String : " << String.value << "\n\n";
	cout << setw(30) << "UppercaseForFirstLetters() = " << String.UppercaseForFirstLetters() << endl;
	cout << setw(30) << "LowercaseForFirstLetters() = " << String.LowercaseForFirstLetters() << endl;
	cout << setw(30) << "toLowerCase() = " << String.toLowerCase() << endl;
	cout << setw(30) << "toUpperCase() = " << String.toUpperCase() << endl;
	cout << setw(30) << "InvertAll() = " << String.InvertAll() << endl;
	cout << setw(30) << "CalcLowercaseLetters() = " << String.CalcUppercaseLetters() << endl;
	cout << setw(30) << "CalcUppercaseLetters() = " << String.CalcUppercaseLetters() << endl;
	cout << setw(30) << "CalcLowercaseLetters() = " << String.CalcLowercaseLetters() << endl;
	cout << setw(30) << "CountVowelLetters() = " << String.CountVowelLetters() << endl;
	cout << setw(30) << "CountNumberOfWord() = " << String.CountNumberOfWord() << endl;
	cout << setw(30) << "TrimRight() = " << String.TrimRight() << endl;
	cout << setw(30) << "TrimLeft() = " << String.TrimLeft() << endl;
	cout << setw(30) << "TrimAll() = " << String.TrimAll() << endl;
	cout << setw(30) << "RemovePunctuations() = " << String.RemovePunctuations() << endl;

	
	//cout << "PrintFirstLetterInWord() = " << String.PrintFirstLetterInWord() << endl;
	//cout << "PrintVowelLetters() = " << String.PrintVowelLetters() << endl;
	//cout << "PrintWordSeparately() = " << String.PrintWordSeparately() << endl;
}