// pr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int age;
    string Name, Surname, Nationally, Gender, City, IDNum;

    cout << " PLEASE ENTER YOUR NAME " << endl;
    cin >> Name;
    cout << " PLEASE ENTER YOUR SURNAME " << endl;
    cin >> Surname;
    cout << " PLEASE ENTER YOUR NATIONALLY " << endl;
    cin >> Nationally;
    cout << " PLEASE ENTER YOUR GENDER " << endl;
    cin >> Gender;
    cout << " PLEASE ENTER YOUR CITY " << endl;
    cin >> City;
    cout << " PLEASE ENTER YOUR IDNum " << endl;
    cin >> IDNum;
    cout << " PLEASE ENTER YOUR AGE " << endl;
    cin >> age;

    cout << " YOUR NAME IS:" << Name << endl;
    cout << " YOUR SURNAME IS:" << Surname << endl;
    cout << " YOUR NATIONALLY IS:" << Nationally << endl;
    cout << " YOUR GENDER IS:" << Gender << endl;
    cout << " YOUR CITY IS:" << City << endl;
    cout << " YOUR IDENTITY NUMBER IS:" << IDNum << endl;
    cout << " YOUR AGE IS:" << age << endl;

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
