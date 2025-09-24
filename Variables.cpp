#include <iostream>
using namespace std;
int main()
{
    // program1
    // output:
    // ***********************
    // Name: Fatma Abdelhaleem
    // Age: 23 years
    // City: Zefta
    // Country: Egypt
    // Monthly Salary: 5000
    // Yearly Salary: 60000
    // Gender: F
    // married: 1
    // ***********************
    string name = "Fatma Abdelhaleem";
    int Age = 23;
    string city = "Zefta";
    string country = "Egypt";
    float monthly_salary = 5000;
    // int yearly_salary = monthly_salary * 12;
    char gender = 'F';
    bool isMarried = true;

    cout << "***********************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << Age << " years" << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthly_salary << endl;
    cout << "Yearly Salary: " << monthly_salary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "married: " << isMarried << endl;
    cout << "***********************\n";

    // program2
    // output:
    // 20+
    // 30+
    // 10
    // -------------------------
    // Total= 60

    int num1 = 20;
    int num2 = 30;
    int sum = num1 + num2;
    cout << num1 << '+' << endl;
    cout << num2 << '+' << endl;
    cout << "10\n";
    cout << "-------------------------\n";
    cout << "Total= " << sum + 10 << endl;

    // program3
    int myAge = 25;
    cout << "\nAfter 5 years you will be " << myAge + 5 << " years old\n";
}
