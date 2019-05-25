#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char arr[100];
	int a;
    
	cout << "Enter number of elements: ";
	cin >> a;

	cout << "Enter the Numbers: ";

    for (int i = 0; i < a; i++)
    {
    cin >> arr[i];
    }

	cout << "Reverse: ";

    for (int i = a; i>=0; i--)
    {
        cout << arr[i];
    }

    return 0;
}
