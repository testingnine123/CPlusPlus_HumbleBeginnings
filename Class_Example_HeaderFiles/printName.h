#ifndef printName_h
#define printName_h

class printName
{
	private:
		std::string name;
	
	public:
		printName(std::string nm);
		void setName(std::string x);		
		std::string getName();
};

#endif /* Header_h */