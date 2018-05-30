#pragma once

#include "stdafx.h"
using namespace std;

#ifndef STRINGCOMMAND_H
#define STRINGCOMMAND_H

class command
{
	private:
		bool endbool;
		FILE *file_database;

	public:
		command();
		~command();
		//'login'	(later)
		void dnewdir();	//add new directory
		void dnew();	//add new data
		void dedit();	//edit existing data
		void ddel();	//delete data
		void dlist();	//list data
		void dexit();
		//'logoff'	(later)
		void getinput();	//
		void choose(char);	//choose one of the data commands to execute
};

#endif