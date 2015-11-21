#include<iostream>
#include<cstdlib> //for rand() function
#include<ctime> //for time() function
using namespace std;
int main()
{
	//seed srand with current time to generate new seeds and new random numbers every time.
	srand(time(0));
	
	for (int i = 0; i<10; i++)
	{
		//print 10 random numbers within 0 to 10
		cout<<"Random number "<<i+1<<":"<<(rand()%10)<<"\n";
	}
	return 0;
}