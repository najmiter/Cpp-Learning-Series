#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[100] = "codeMite";
    char school[100];
    char section[100];
    char rollNumber[10];

    cout << "Enter your name: ";
    cin.getline (name, 100);
    cout << "Enter your school: ";
    cin.getline (school, 100);
    cout << "Enter your section: ";
    cin.getline (section, 100);
    cout << "Enter your roll number: ";
    cin.getline (rollNumber, 10);
    
    cout << "Your name is " << name << endl;
    cout << "Your school is " << school << endl;
    cout << "Your section is " << section << endl;
    cout << "Your roll number is " << rollNumber << endl;


    return 0;
}