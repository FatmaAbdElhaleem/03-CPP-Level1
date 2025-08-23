#include<iostream>
using namespace std;
 
//1: use procedure function once and function with return value another time to do this program  
//2: make a swap function that affects the original variables
void sumProcedure(){
  int num1, num2;
  cout<<"Enter Number 1: ";
  cin>>num1;
  cout<<"Enter Number 2: ";
  cin>>num2;
  cout<<"**********************\n";
  cout<<num1+num2<<endl;
}
int sumFunction(){
    int num1,num2;
     cout<<"Enter Number 1: ";
     cin>>num1;
     cout<<"Enter Number 2: ";
     cin>>num2;
     cout<<"**********************\n";
    return num1+num2;
}
int swap (int &x, int &y){
   int container;
   container=x;
   x=y;
   y=container;
   return x,y;
}
 
int main(){
   int x=5;
   int y=6;
   sumProcedure();
   cout<< sumFunction()<<endl;
   swap(x,y);
   cout<<"x,y is: "<<x<<","<<y;
   return 0;
}