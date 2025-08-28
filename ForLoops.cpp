#include <iostream>
using namespace std;

// Problem 26: 
// Write a program to print numbers from 1 to N.
//  Input:
//  10
//  Outputs:
//  1
//  2
//  3
//  4
//  5
//  6
//  7
//  8
//  9
//  10

void printNumbersAscending(int N){
    for (int i=1;i<=N;i++){
        cout<<i<<endl;
    }
   cout<<"*****************\n";
}

//proplem 27:
// Write a program to print numbers from N to 1.
//  Input 
// 10
//  Outputs
//  10
//  9
//  8
//  7
//  6
//  5
//  4
//  3
//  2
//  1
void printNumbersDescending(int N){
    for(int i=N;i>=1;i--){
       cout<<i<<endl;
    }
    cout<<"***********************\n";
}

// Problem 28: 
// Write a program to Sum odd numbers from 1 to N.
// Input 
// 10
// Outputs
// 25 (1+3+5+7+9)

int sumOdd(int N){
    int sum=0;
    for(int i=1;i<=N;i=i+2){
       sum=sum+i;
    }
    return sum;
     
}

// Problem 29: 
// Write a program to Sum even numbers from 1 to N.
// Input 
// 10
// Outputs
// 30 (2+4+6+8+10)

int sumEven(int N){
    int sum=0;
    for(int i=0;i<=N;i=i+2){
       sum=sum+i;
    }
    return sum;
}

// Problem 30: 
// Write a program to calculate factorial of N!
// Example: factorial of 6: 6 x 5 x 4 x 3 x 2 x 1 = 720
// Input 
// 6
// Outputs
// 720

//Draft for thinking:
// 6 x 5 x 4 x 3 x 2 x 1 
// n-0 * n-1 * n-2 * n-3 * n-4 * n-5
// n-(i)

int calculateFactorial(int N){
    int result=1;
    for(int i=0;i<N;i++){
        result=result*(N-i);
    }  

    return result;
}

// Problem 32 : 
// Write a program to ask the user to enter:
// • Number
// • M
// Then Print the Number^M without using built-in functions
// Example Inputs:
// 2
// 4
// Outputs
// 16

//Draft for thinking :
//2^4=2*2*2*2  

int power(int base,int exponent){
    int result =1;
    for(int i=0;i<exponent;i++){
        result=result*base;
    }
    return result;
}

// Problem: 
// Write a program to print all letters from A to Z
//  Outputs
//  A
//  B
//  C
//  .
//  .
//  .
//  Z
// note : ascii from 65 to 90  and use char(i) function

void printLetters(){
    for(int i=65; i<=90;i++) {
       cout<< char(i)<<endl;
    }
}

int main(){
    //problem 26:
    int N1,N2,N3,N4,N5;
    cout<<"Enter N to print numbers from 1 to N: " ;
    cin>>N1;
    printNumbersAscending(N1);
    //problem 27:
    cout<<"Enter N to print numbers from N to 1: " ;
    cin>>N2;
    printNumbersDescending(N2);
    //problem 28:
     cout<<"Enter N to Sum odd numbers from 1 to N: " ;
     cin>>N3;
     cout<<sumOdd(N3)<<endl;
     cout<<"********************\n";
     //problem 29:
     cout<<"Enter N to Sum even numbers from 1 to N: " ;
     cin>>N4;
     cout<<sumEven(N4)<<endl;
     cout<<"********************\n";
     //problem 30: 
     cout<<"Enter N to calculate factorial of it: " ;
     cin>>N5;
     cout<< calculateFactorial(N5)<<endl;
     cout<<"********************\n";
    //problem 32:
    cout<<power(2,4)<<endl;
    cout<<"********************\n";
    //problem 46:
    printLetters();
    return 0;
    
}