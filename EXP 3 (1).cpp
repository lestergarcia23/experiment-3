#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int e = 10;
	int a, b;
	float c, d, num[e];
	
	for(int i=0; i<e; i++)
	{
		cout<<"Enter value for Number "<< i+1 <<": "; cin>> num[i];
		
		if(i == 0)
		{
			a = num[i];
			b = num[i];
		}
		else
		{
			if(a > num[i])
			{
				a = num[i];
			}
			if(b < num[i] )
			{
				b = num[i];
			}
		}
	}
	d = num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9];
	
	c = d / e;
	
	cout<<"The Smallest Number is: "<<a<<endl;
	cout<<"The Largest Number is: "<<b<<endl;
	cout<<"The Average Number is: "<<c<<endl;
	cout<<"The Sum of all Number is: "<<d<<endl;
	
	
	_getch();
	return 0;
}
