#pragma once
#include "CharsStrings.h"
#include <iostream>
#include <string>
using namespace std;

void CharsStrings::method1() // >>
{
	string myWord = "";

	cout << "Enter any word: ";
	cin >> myWord;
	cout << "Word entered is: " << myWord << endl;
}

void CharsStrings::method2() // getline()
{
	string mySentence = "";

	cout << "Enter any sentence: ";
	getline(cin, mySentence);
	cout << "Sentence entered is: " << mySentence << endl;
}

void CharsStrings::method3() // get()
{
	string myWord = "";
	char aLetter = '\0'; // null character

	cout << "Enter any word: ";
	aLetter = cin.get();
	cout << "Letter entered is: " << aLetter << endl;
	aLetter = cin.get();
	cout << "Letter entered is: " << aLetter << endl;
}

void CharsStrings::method3_v2()
{
	string myWord = "";
	char aLetter = '\0'; // null character

	cout << "Enter any word: ";

	for (int i = 0; i < 5; i++)
	{
		aLetter = cin.get();
		cout << aLetter;
	}
	cout << endl;
}

void CharsStrings::method3_v3()
{
	string myWord = "";
	char aLetter = '\0'; // null character

	cout << "Enter any word: ";

	while (aLetter != '\n')
	{
		aLetter = cin.get();
		cout << aLetter;
	}
	cout << endl;
}
