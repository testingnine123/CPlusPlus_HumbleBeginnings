#ifndef printName_h //ifndef stands for "if not defined". The first pair of statements tells the program to define the MyClass header file if it has not been defined already. This prevents a header file from being included more than once within one file.
endif ends the condition.
#define printName_h

class printName
{
	private:
		std::string name;
	
	public:
		printName(std::string nm);
		~printName();
		void setName(std::string x);		
		std::string getName();
};

#endif /* Header_h */ //endif ends the condition.
