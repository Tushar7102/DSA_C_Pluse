#include<iostream>
using namespace std;

int main(){
	 float percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage >= 90)
        cout << "Grade: A\n";
    else if (percentage >= 80)
        cout << "Grade: B\n";
    else if (percentage >= 70)
        cout << "Grade: C\n";
    else if (percentage >= 60)
        cout << "Grade: D\n";
    else
        cout << "Grade: F\n";
        return 0;
}
