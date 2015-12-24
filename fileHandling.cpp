#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	string str,line;
	cout<<"Enter file name:";
	cin>>str;

	//so that we don't need to type too much
	if (sizeof(str) < 2) str = "test.txt";

	//initialize a variable for fstreaming
	//open the user entered file name. If doesn't exists, fstream will not create it but ofstream would have
	//ios::app ensures no test will get overwritten, and that new text gets inserted at the...
	//...end of the file
	fstream MyFile (str,ios::app);

	//check if you have write permissions or not
	if (MyFile.is_open())
	{
		//write to the user file
		MyFile << "I have write permissions!\n";
		MyFile << "Faiz Abidi testing again and again and again....\n";
	}
	else cout<<"Something went wrong.\n";

	//read the file line by line
	while (getline(MyFile,line))
	{
		cout<<line<<"\n";
	}

	//close the file after use
	MyFile.close();

	return 0;
}