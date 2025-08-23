#include <iostream>
using namespace std;

//program: do this using structure and functions with one parameter
// Enter your Name: 
// fatma
// Enter your Age: 
// 23
// Enter your City: 
// cairo
// Enter your Country: 
// egypt
// ***********************
// Name: fatma
// Age: 23 years
// City: cairo
// Country: egypt
// ***********************



struct strInfo{
    string name;
    int Age;
    string city;
    string country;
};
void readInfo(strInfo &info){
    cout << "Enter your Name: " << endl;
    getline(cin,info.name);
    cout << "Enter your Age: " << endl;
    cin>>info.Age;
    cout << "Enter your City: " << endl;
    cin>>info.city;
    cout << "Enter your Country: " << endl;
    cin>>info.country;
}
strInfo printInfo(strInfo info){
    cout << "***********************\n";
    cout << "Name: " << info.name << endl;
    cout << "Age: " << info.Age << " years" << endl;
    cout << "City: " << info.city << endl;
    cout << "Country: " << info.country << endl;
    cout << "***********************\n";
}

int main(){
    strInfo person;
    readInfo(person);
    printInfo(person);
    return 0;
}