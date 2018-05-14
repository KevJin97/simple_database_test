#ifndef COMMAND_H
#define COMMAND_H

class command
{
	public:
		command();
		~command();
		void objinfo(char*);
		void objnew(char*);
		void objdelete(char*);
		void objbom(char*);
		void objprint(char*);
		void objnewdir(char*);	//may be redundant

	private:

};

#endif