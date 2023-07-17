#include <bits/stdc++.h>

using namespace std;
class Student // here student is the user defined data type and assume class as a blueprint or group
{
public: // acces modifier
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student rahim; // here rahim is a variable but it not a normal variable that can be assign a value
    rahim.roll = 50;
    rahim.cls = 9;
    rahim.section = 'A';
    char n[100] = "Rahim Uddin";
    strcpy(rahim.name, n);

    Student ovi; // here ovi is a variable but it not a normal variable that can be assign a value
    ovi.roll = 50;
    ovi.cls = 6;
    ovi.section = 'C';
    char s[100] = "Ovi Saha";
    strcpy(ovi.name, s);

    cout << ovi.roll << endl;
    cout << ovi.cls << endl;
    cout << ovi.section << endl;
    cout << ovi.name << endl;

    cout << rahim.roll << endl;
    cout << rahim.cls << endl;
    cout << rahim.section << endl;
    cout << rahim.name << endl;

    return 0;
}