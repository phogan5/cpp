// Performance Test 5.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "iostream"
#include <string>
#include <vector>

using namespace std;

string question1();
string question2();
string question3();
int question4();



vector<string> store;
vector<int> zcode;





int main()
{
	string name;
	int correct = 1;
	int tries = 3;
	
	do {
		question1();
		question2();
		question3();
		question4();


		cout << "Your name is: " << store[0] << endl;
		cout << "Your city is: " << store[1] << "\n";
		cout << "Your state is: " << store[2] << "\n";
		cout << "Your zipcode is: " << zcode[0] << "\n";

		cout << "Is that information correct? (1 - yes) (2 - no)\n";
		cin >> correct;

		tries--;

		cout << "You have " << tries << " tries remaining\n";

		system("pause");

	} while (correct != 1 && tries > 0);

		 return 0;
	 

	
}


string question1()
{
	string name;

	cout << "Enter your name\n\n";
	cin >> name;
	store.push_back(name);

	return name;

	system("CLS");
}

string question2()
{
	string city;

	cout << "Enter your home city\n\n";
	cin >> city;
	store.push_back(city);

	return city;

	system("CLS");
}

string question3()
{
	string state;

	cout << "Enter your state\n\n";
	cin >> state;
	store.push_back(state);

	return state;

	system("CLS");
}

int question4()
{
	int zip;

	cout << "Enter your zip code\n\n";
	cin >> zip;
	zcode.push_back(zip);
	
	return zip;

	system("CLS");
	}

char askYesNo1()
{
	char response1;
	do
	{
		cout << "Please enter y ot n: ";
		cin >> response1;
	} while (response1 != 'y' && response1 != 'n');

	return response1;
	}






