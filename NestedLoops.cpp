#include<iostream>
using namespace std;
//program 1:
// AA
// AB
// AC
// ..
//BA
//BB
//BC
//..

void PossibilitiesOfLetters(){
    for(int i=65;i<=90;i++){
        cout<<"Letter: "<<char(i)<<endl;
        for(int j=65;j<=90;j++){
          cout<<char(i)<<char(j)<<endl;
        }  
        cout<<"*******************\n";
    }
     cout<<"-----------------------\n";
} 

//program 2:
//**********  
//********* 
//********
//*******
//******
//*****
//****
//***
//**
//*

void drawInvertedTriangle(){
    for(int i=10;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   cout<<"-----------------------\n";
}

//program 3:
//1 2 3 4 5 6 7 8 9 10
//1 2 3 4 5 6 7 8 9
//1 2 3 4 5 6 7 8 
//1 2 3 4 5 6 7 
//1 2 3 4 5 6 
//1 2 3 4 5 
//1 2 3 4 
//1 2 3 
//1 2
//1 

void NumberedInvertedTriangle(){
    for(int i=10;i>=1;i--){
        for(int j=1;j<=i;j++){
             cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------\n";
}

//program 4:
//1 
//1 2 
//1 2 3
//1 2 3 4 
//1 2 3 4 5
//1 2 3 4 5 6 
//1 2 3 4 5 6 7 
//1 2 3 4 5 6 7 8 
//1 2 3 4 5 6 7 8 9
//1 2 3 4 5 6 7 8 9 10

void NumberedTriangle(){
    for(int i=1;i<=10;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------\n";
}

// program 5:
//A
//A B
//A B C
//A B C D
//A B C D E
//A B C D E F

void printFromAToF(){
    for(int i=65;i<=70;i++){  
        for(int j=65;j<i+1;j++){   
          cout<<char(j)<<" ";
      }
      cout<<endl;
    }  
    cout<<"-----------------------\n";
}

// program 6:
//1 2 3 4 5 6 7 8 9 10
//2 3 4 5 6 7 8 9 10
//3 4 5 6 7 8 9 10
//4 5 6 7 8 9 10
//5 6 7 8 9 10
//6 7 8 9 10
//7 8 9 10
//8 9 10
//9 10
//10

void InvertedNumberedTriangle(){
    for(int i=1;i<=10;i++){
        for(int j=i;j<=10;j++){
           cout<<j<<" ";
        }
       cout<<endl;
    }
    cout<<"-----------------------\n";
}


int main(){
    PossibilitiesOfLetters();
    drawInvertedTriangle();
    NumberedInvertedTriangle();
    NumberedTriangle();
    printFromAToF();
    InvertedNumberedTriangle();
    return 0;
}