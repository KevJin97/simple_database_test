#include "stdafx.h"
#include <iostream>

using namespace std;

command::command()	//opening screen
{
	endbool = false;
}

command::~command()
{
	fclose(file_database);
}

void command::dnewdir()
{
	cout << "Enter new directory name: ";
	char *filename = new char;
	cin >> *filename;
	file_database = fopen("c:\\DATABASE_TEST\\Simple_Database\\directory\\testfile.bin", "w");	
	
	//file in directory stores info about which files in data_files belong to which subject
	fclose(file_database);

	delete filename;
}

void command::dnew()
{
	file_database = fopen("c:\\DATABASE_TEST\\Simple_Database\\data_files\\testfile.bin", "w");
	//write to file
	fclose(file_database);
}

void command::dedit()
{
	//edit existing file
}

void command::ddel()
{
	//delete file
}

void command::dlist()
{
	//list all data
}

void command::dexit()
{
	this->endbool = true;
}

void command::getinput()
{
	int x = 0;
	//subject (login) (later)
	do
	{
		cout << "Choose a function" << endl;
		cout << "1: Create new directory" << endl;
		cout << "2 : Create new file" << endl;
		cout << "3 : Edit existing file" << endl;
		cout << "4 : Delete file" << endl;
		cout << "5 : List all files" << endl;
		cout << "6 : Exit program" << endl;

		char *input = new char;
		cin >> *input;	
		//scanf("%c", input);	//figure out why this won't work

		//change to take in more strings later

		printf("\n\n\n\n\n\n\n");	//cleans up terminal

		this->choose(*input);
		
		delete input;

	} while(this->endbool == false);
}

void command::choose(char input) //choose function
{
	switch(input)
	{
	case '1':
		this->dnewdir();
		break;
	case '2':
		this->dnew();
		break;

	case '3':
		this->dedit();
		break;

	case '4':
		this->ddel();
		break;

	case '5':
		this->dlist();
		break;

	case '6':
		this->dexit();
		break;

	default:
		printf("\nInput not recognized\n");
		break;
	}
}