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
    cout << "Enter Name: " << endl;
    cin.ignore();
    getline(cin,info.name);
    cout << "Enter Age: " << endl;
    cin>>info.Age;
    cout << "Enter City: " << endl;
    cin>>info.city;
    cout << "Enter Country: " << endl;
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

void printInf2(strInfo person[100],int count){
    for(int i=0;i<count;i++){
        cout<<"person's "<<i+1<<" info:\n";
        printInfo(person[i]);
    }
}
void readInfo2(strInfo person[100],int &count){
    cout <<"Enter the number of people info that you want to enter (with max number 100): ";
    cin>>count;
    for(int i=0;i<count;i++){
       cout<<"please enter person's "<<i+1<<" info:\n";
       readInfo(person[i]);
       cout<<"******************\n";
    }
}

int main(){
    strInfo person[100];
    // readInfo(person[0]);
    // printInfo(person[0]); 
    int count;
    readInfo2(person,count);
    printInf2(person,count);
    return 0;
}