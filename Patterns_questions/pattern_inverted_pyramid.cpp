//Print the below pattern
/*
* * * * *
* * * *
* * * 
* *
*
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
		for(int j = n; j >= i; j--)
		{
			cout<<"*";
			//cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
