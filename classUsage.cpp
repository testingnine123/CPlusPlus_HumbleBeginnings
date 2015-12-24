#include<iostream>
#include<string>
using namespace std;
class myClass
{
	private:
		string name;
	
	public:
		void setString(string x)
		{
			name = x;
		}

		string getString(string x)
		{
			return name;
		}
};

int main()
{
	string name;
	cout<<"Enter a string:";
	cin>>name;
	
	myClass obj;
	obj.setString(name);
	
	cout<<"Name entered was:"<<obj.getString(name)<<endl;
	return 0;
}
