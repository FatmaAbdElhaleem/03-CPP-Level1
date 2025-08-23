#include <iostream>
using namespace std;

//program:1- do this using structure and functions with one parameter
// 2- use array of structures and make 2 functions for read & write 2 persons info in one time
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
    cin.ignore();
    getline(cin,info.name);
    cout << "Enter your Age: " << endl;
    cin>>info.Age;
    cout << "Enter your City: " << endl;
    cin>>info.city;
    cout << "Enter your Country: " << endl;
    cin>>info.country;
}
void printInfo(strInfo info){
    cout << "***********************\n";
    cout << "Name: " << info.name << endl;
    cout << "Age: " << info.Age << " years" << endl;
    cout << "City: " << info.city << endl;
    cout << "Country: " << info.country << endl;
    cout << "***********************\n";
}

void printInf2(strInfo person[2]){
   printInfo(person[0]);
   printInfo(person[1]);
}
void readInfo2(strInfo person[2]){
   readInfo(person[0]);
   readInfo(person[1]);
}

int main(){
    strInfo person[2];
    // readInfo(person[0]);
    // printInfo(person[0]);
    
    readInfo2(person);
    printInf2(person);
    return 0;
}