#include <iostream>
#include <cmath>
using namespace std;
int main (){
   // problem 16 :
   //  Write a program to calculate rectangle area through diagonal and side area of 
   // rectangle and print it on the screen.
   //  The user should enter:
   //  a
   //  d
   //  Example Inputs:
   //  5
   //  40
   //  Outputs
   //  198.431
   // Area= a.sqrt(d*d-a*a )

   float a, d ;
   cout<<"Enter the diagonal of the  rectangle: ";
   cin>>d;
   cout<<"Enter the side of the  rectangle: "; 
   cin>>a;
   cout<<"The rectangle area is: "<< a*sqrt(pow(d,2)-pow(a,2))<<endl;

   //  Problem 18:
   //  Write a program to calculate circle area then print it on the screen.
   //  The user should enter:
   //  r
   //  Example Inputs:
   //  5
   //  Outputs 
   //  78.54
   float r;
   cout <<"Enter the r of the circle: ";
   cin>> r;
   cout<<"The Area of the circle is: "<<round(3.14*pow(r,2));
   
    return 0;
   
}
