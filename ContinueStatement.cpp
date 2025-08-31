#include <iostream>
using namespace std;

//program : use for loop and continue not if else
//Read 5 numbers and sum them up as long as the number is below 50 use for 
//Input:
//10
//20
//55
//10
//20
//Output:60

int sumNumbers(int fiveNumbers[5]){
    int sum=0;
   for(int i=0;i<5;i++){
      if(fiveNumbers[i]>50){
         cout<<"The number "<<fiveNumbers[i]<<" is greater than 50 and won't be calculated\n";
         continue;
      }
      sum=sum+fiveNumbers[i];
   }
   return sum;
}

void readFiveNumbers(){
    int fiveNumbers[5];
    cout<<"Please, enter the 5 numbers to sum them up as long as the number is below 50: ";
    for(int i=0;i<5;i++){
      cin>>fiveNumbers[i];
    }
   cout<<"********************\n";
   cout<< sumNumbers(fiveNumbers);
}

int main(){
    readFiveNumbers();
    return 0;
}