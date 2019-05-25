#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a[7]; 
	int b[7];
	int c[7];
	
	cout <<"Enter all temperature for a week of Province A," << endl;
	cout <<"Province B and then Province C." << endl;
	cout << "" << endl;
	for(int i =0; i<7; i++)
	{
		cout<<"Province A, Day "<<i+1<<": "; 
		cin>>a[i];
	}
	for(int i =0; i<7; i++)
	{
		cout<<"Province B, Day "<<i+1<<": "; 
		cin>>b[i];
	}
	for(int i =0; i<7; i++)
	{
		cout<<"Province C, Day "<<i+1<<": "; 
		cin>>c[i];
	}
	cout << "" << endl;
	cout << "Displaying Values:" << endl;
	cout << "" << endl;
	
	for(int i=0; i<7; i++)
	{
		cout<<"Province A, Day "<<i+1<<" = "<<a[i]<<endl;
	}
	for(int i=0; i<7; i++){
		cout<<"Province B, Day "<<i+1<<" = "<<b[i]<<endl;
	}
	for(int i=0; i<7; i++){
		cout<<"Province C, Day "<<i+1<<" = "<<c[i]<<endl;
	}
	
	return 0;
}
