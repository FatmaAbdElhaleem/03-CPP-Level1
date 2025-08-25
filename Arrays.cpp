#include <iostream>
using namespace std;

//program: use arrays and functions to do this:
// Enter Grade 1: 80
// Enter Grade 2: 70
// Enter Grade 3: 90
// *******************
// The average of grades is: 80

void readArray(float grades[3]){
    cout<<"Enter Grade 1: ";
    cin>>grades[0];
    cout<<"Enter Grade 2: ";
    cin>>grades[1];
    cout<<"Enter Grade 3: ";
    cin>>grades[2];
    cout<<"*******************\n";
}

float averageOfArray(float grades[3]){
    return (grades[0]+grades[1]+grades[2])/3;
}

int main (){
    float grades[3];
    readArray(grades);
    float result=averageOfArray(grades);
    cout<<"The average of grades is: "<<result;
    return 0;
}