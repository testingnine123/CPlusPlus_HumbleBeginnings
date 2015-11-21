#ifndef printName_h
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

#endif /* Header_h */
