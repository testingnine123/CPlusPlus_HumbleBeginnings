//Print the below pattern
/*
A
B B
C C C
D D D D
E E E E E
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout<<char(i+64);
		}
		cout<<"\n";
	}
	return 0;
}
