#include <iostream>
using namespace std;
int main()
{
    // program1
    // output: (input from user)
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
    string name;
    int Age;
    string city;
    string country;
    float monthly_salary;
    char gender;
    bool isMarried;

    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your age:";
    cin >> Age;
    cout << "Enter your city:";
    cin >> city;
    cout << "Enter your country:";
    cin >> country;
    cout << "Enter your monthly salary:";
    cin >> monthly_salary;
    cout << "Enter your gender(F for female/ M for male):";
    cin >> gender;
    cout << "Enter your marital state(1 for married / 0 for single):";
    cin >> isMarried;

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
    // output: (input from user)
    // 20+
    // 30+
    // 10
    // -------------------------
    // Total= 60

    int num1;
    int num2;
    int num3;
    cout << "Enter number1:";
    cin >> num1;
    cout << "Enter number2:";
    cin >> num2;
    cout << "Enter number3:";
    cin >> num3;

    cout << num1 << '+' << endl;
    cout << num2 << '+' << endl;
    cout << num3 << "\n";
    cout << "-------------------------\n";
    cout << "Total= " << num1 + num2 + num3 << endl
         << endl;

    // program3
    // output: (input from user)
    // After 5 years you will be 30 years old
    int myAge;

    cout << "Enter your age:";
    cin >> myAge;
    cout << "After 5 years you will be " << myAge + 5 << " years old\n";
}
