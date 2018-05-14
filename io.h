#ifndef IO.H
#define IO.H

class io
{
	public:
		io();
		~io();
		void ask();	//asks for user input
		unsigned short int choose();	//chooses which command to execute
		char unknown();	//returns unknown command
		bool loop;	//determines if it's going to loop
		operator ==(
	private:
		char *inputstring;	//entire string inputted
		char *inputcommand;	//singles out command word
}

io::io()
{
	loop = false;
}

void io::ask()
{
	
}

unsigned short int io::choose()
{

}

char io::unknown()
{

}

bool io::getloop()
{
	return loop;
}

#endif