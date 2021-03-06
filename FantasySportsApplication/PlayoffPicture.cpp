// PlayoffPictureGroupProject.cpp : Defines the entry point for the console application.
//

#include "targetver.h"
#include "Team\Team.h"
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<iomanip>

using namespace std;

const int NUMBER_OF_TEAMS = 32; 

void menu(vector<Team> PlayoffPicture);

void getProjections(vector<Team> PlayoffPicture);

void Update();

void printSorted();

//int printProjections();

//int printwhatIf();

void printData();

int func1()
{

	vector<Team> PlayoffPicture;


	menu(PlayoffPicture);

	getProjections(PlayoffPicture);
	printData();

	system("pause");
	system("cls");

	return 0;
}

void playoffTeams()
{
	cout << "Press any key to continue to program" << endl;

	system("pause");
	system("cls");
}

void menu(vector<Team> PlayoffPicture)
{

	bool flag = bool();
	char choice = char();

	cout << "Welcome to the Menu" << endl;
	cout << "Press 1 to Get Projections " << endl;
	cout << "Press 2 to Update Teams" << endl;
	cout << "Press 3 to Print Teams in Sorted Order" << endl;
	cout << "Press 4 to " << endl;


	

	cin >> choice;

	system("CLS");

	switch (choice)
	{
	case '1':
		getProjections(PlayoffPicture);
			flag = true;
		break;
	case'2':
		Update();
		flag = true;
		break;
	default:
		flag = true;
		cout << "Invalid Selection" << endl;
		system("pause");
		system("cls");
		break;
	case '3':
		printSorted();
		flag = true;
		break;
	case '4':

		flag = true;
		break;
	}// End Switch Statement

	
}

void getProjections(vector<Team> PlayoffPicture)
{
	Team list[32];
	//int count;
	vector <Team> temp;
	ifstream infile;

	cout << "Read Teams Data" << endl;
	cout << "" << endl;
	cout << " ************************** " << endl;
	cout << "" << endl;

	infile.open("Data.csv");

	if (infile.fail())
	{
		cout << "Data list not found" << endl;
		cout << "" << endl;

	}

	else
		/******************************
		for (count = 0; count < NUMBER_OF_TEAMS; count++)
		{
		infile >> temp.getFirst();
		}
		*******************************/
		
	system("pause");
	system("cls");
}


void printData()
{
	bool flag = bool();
	char choice = char();

	cout << "Type Number To Select" << endl;
	cout << "" << endl;

	cout << "1 Print Projections" << endl;
	cout << "2 Update" << endl;

	cin >> choice;
		system("cls");

	switch (choice)
	{
	case '1':
		int printProjections();
		flag = true;
		break;
	case'2':
		int printwhatIf();
		flag = true;
		break;

	default:
		flag = true;
		cout << "Invalid Selection" << endl;
		system("pause");
		system("cls");
		break;
	}

	
}

void printSorted()
{
	
}

void Update()
{

}
