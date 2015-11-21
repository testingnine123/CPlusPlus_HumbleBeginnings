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
		string
		getString(string x)
		{
			return x;
		}
};
int main()
{
	string name;
	cout<<"Enter your name:";
	cin>>name;
	myClass obj;
	cout<<"Name entered was:"<<obj.getString(name)<<endl;
	return 0;
}