#include<iostream> //is a header file library
using namespace std; //we can use names for  object & variables from the standard library

int main()
{
	int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You are eligible to vote." << endl ;
    if (age < 18)
        cout << "You are not eligible to vote." << endl;

    return 0;
}
