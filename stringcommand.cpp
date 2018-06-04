#include "stdafx.h"
using namespace std;

void getinput(bool &endbool)
{
	char commandinput[2];

	do
	{
		cout << "Choose a function" << endl;
		cout << "1: Create new directory" << endl;
		cout << "2 : Create new file" << endl;
		cout << "3 : Edit existing file" << endl;
		cout << "4 : Delete file" << endl;
		cout << "5 : List all files" << endl;
		cout << "6 : Exit program" << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << endl;


		scanf("%1s", commandinput);
		//scanf("%9s", commandinput);	//doing again will put whatever is left in buffer into the array
		//change to take in more strings later
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;	//new lines

		switch(commandinput[0])
		{
			case '1':
				dnewdir();
				break;

			case '2':
				dnew();
				break;

			case '3':
				dedit();
				break;

			case '4':
				ddel();
				break;

			case '5':
				dlist();
				break;
	
			case '6':
				endbool = true;
				break;
	
			default:
				cout << "\nInput not recognized\n" << endl;
				break;
		}
		//scanf("%9s", commandinput);	//doing this again will input second string into the array
	} while(endbool == false);
}

void dnewdir()
{
	FILE *file_database;
	char filenameinput[64];
	cout << "Enter new directory name: ";
	scanf("%63s", filenameinput);	//input name
	
	char filename[256];
	
	strcpy(filename, "c:\\DATABASE_TEST\\Simple_Database\\directory\\");	//creating directory path text (change "DATABASE_TEST" later)
	strcat(filename, filenameinput);
	strcat(filename, ".bin");

	cout << filename << endl;

	file_database = fopen(filename, "w");	//create directory file
	
	//file in directory stores info about which files in data_files belong to which subject
	fclose(file_database);

	cout << "Directory '" << filenameinput << "' has been created" << endl;
	cout << "\n\n\n\n" << endl;
}

void dnew()
{
	FILE *file_database;
	char filenameinput[64];
	cout << "Enter new file name: ";
	scanf("%63s", filenameinput);	//input name

	char filename[256];

	strcpy(filename, "c:\\DATABASE_TEST\\Simple_Database\\data_files\\");	//creating directory path text (change "DATABASE_TEST" later)
	strcat(filename, filenameinput);
	strcat(filename, ".bin");

	cout << filename << endl;

	file_database = fopen(filename, "w");	//create directory file

											//file in directory stores info about which files in data_files belong to which subject
	fclose(file_database);

	cout << "File '" << filenameinput << "' has been created" << endl;
	cout << "\n\n\n\n" << endl;
}

void dedit()
{
	FILE *file_database;
	char filenameinput[64];
	char filename[256];

	cout << "Delete directory (1) or data file (2)? ";
	scanf("%1s", filename);

	cout << "Enter data name: ";
	scanf("%63s", filenameinput);	//input name

	if (strcmp(filename, "1") == 0)
	{
		strcpy(filename, "c:\\DATABASE_TEST\\Simple_Database\\directory\\");	//creating directory path text (change "DATABASE_TEST" later)
		strcat(filename, filenameinput);
		strcat(filename, ".bin");
	}
	else if (strcmp(filename, "2") == 0)
	{
		strcpy(filename, "c:\\DATABASE_TEST\\Simple_Database\\data_files\\");	//creating directory path text (change "DATABASE_TEST" later)
		strcat(filename, filenameinput);
		strcat(filename, ".bin");
	}
	file_database = fopen(filename, "w");


}

void ddel()
{
	char filenameinput[64];
	char filename[256];

	cout << "Delete directory (1) or data file (2)? ";
	scanf("%1s", filename);

	if(strcmp(filename, "1") == 0)
	{
		cout << "Enter directory name: ";
		scanf("%63s", filenameinput);	//input name
		strcpy(filename, "c:\\DATABASE_TEST\\Simple_Database\\directory\\");	//creating directory path text (change "DATABASE_TEST" later)
		strcat(filename, filenameinput);
		strcat(filename, ".bin");
	}
	else if(strcmp(filename, "2") == 0)
	{
		cout << "Enter file name: ";
		scanf("%63s", filenameinput);	//input name
		strcpy(filename, "c:\\DATABASE_TEST\\Simple_Database\\data_files\\");	//creating directory path text (change "DATABASE_TEST" later)
		strcat(filename, filenameinput);
		strcat(filename, ".bin");
	}
	remove(filename);
	cout << filename << endl;


	cout << "Data '" << filenameinput << "' has been deleted" << endl;
	cout << "\n\n\n\n" << endl;
}

void dlist()
{
	//list all data
}