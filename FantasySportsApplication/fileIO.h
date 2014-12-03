#pragma once

#include "Team\Team.h"
#include <fstream>
#include <istream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

void readDataInput();
void Output();

void readDataInput(string inputFileName, vector<Team>& teams)
{
	int i = 0;
int inWins, inLosses, inYards, inDivision;
string inTeamName;
Team dummy;
Team inTeam;
char separator;
double inPercent;
ifstream myfile;
myfile.open(inputFileName);
while (myfile >> inTeamName >> separator >> inWins >> separator >> inLosses >> separator >> inYards >> separator >>inPercent >>separator >>inDivision)
{	
	dummy.input(inTeamName ,inWins, inLosses, inYards, inPercent, inDivision);
	teams.push_back(dummy);
	i += 1;
};
myfile.close(); 
}

void Output()
{
	ofstream outputFile;
	outputFile.open("Output.txt");
	Team array[32];

	if (outputFile.is_open())
	{
		cout << "File Opened successfully!. Writing data from array to file" << endl;

		for (int i = 0; i < 32; i++)
		{
			outputFile << array[i];
		}
		cout << "Array data successfully saved into the file Output.txt" << endl;
	}
	else 
		cout << "File could not be opened." << endl;

}


