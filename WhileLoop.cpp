#include <iostream>
using namespace std;

//program 1:
// Enter integer number from 2 To 8: 1
// Wrong Number, please try again..
// Enter integer number from 2 To 8: 1
// Wrong Number, please try again..
// Enter integer number from 2 To 8: 2
// The correct Number you entered is: 2

//solution using while

// void readIntNumberInRange(int from,int to){
//     int rangedNumber;
//     cout<<"Enter integer number from "<<from<<" To "<<to<<": ";
//     cin>>rangedNumber;
//     while(rangedNumber<from||rangedNumber>to){
//         cout<<"Wrong Number, please try again..\n";
//         cout<<"Enter integer number from "<<from<<" To "<<to<<": ";
//         cin>>rangedNumber;
//     }
//     cout<<"The correct Number you entered is: "<<rangedNumber<<endl;
//     cout<<"---------------------\n";
// }

//solution using do..while
void readIntNumberInRange(int from,int to){
    int rangedNumber;
    do{
    cout<<"Enter integer number from "<<from<<" To "<<to<<": ";
    cin>>rangedNumber;
    }while(rangedNumber<from||rangedNumber>to);
    cout<<"The correct Number you entered is: "<<rangedNumber<<endl;
    cout<<"---------------------\n";
}

// Problem 37: 
// Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print 
// the Sum on screen.
// Input:
// 10
// 20
// 30
// 40-99
// Outputs:
// 100

void sum(int numbers[100],int count){
    int sum=0;
   for(int i=0;i<count;i++){
      sum=sum+numbers[i];
   }
  cout<<"*******************\n";
  cout<<sum<<endl;
  cout<<"---------------------------\n";
}

void readNumbers (){
    int numbers[100];
    int temp;
    cout<<"Enter numbers to sum them and notice to finish entering numbers type -99 : ";
    cin>>temp;
    int i=0;
    while(temp!=-99){
        numbers[i]=temp;
        cin>>temp;
        i++;
    }
    sum( numbers,i);
}



// Problem 50: 
// Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance 
// to user, otherwise print “Wong PIN” and ask the user to enter the PIN again. 
// Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
// Assume User Balance is 7500.
// Input 
// 1234
// 5151 
// Outputs
// Your Balance is: 7500
// Wrong PIN

int readAtmPIN(){
    int PIN;
    cout<<"Enter the ATM PIN code: ";
    cin>>PIN;
    return PIN;
}

void checkPIN(){
     int balance=7500;
     int PIN;
    int i=0;
    //case 1: user enter pin successfully ---> cout<< your palance is 7500
    //case 2: user enter pin wrong & <3 times ---> loop until 3 times
    //case 3: user enter pin wrong & >3 times ---> cout<< Card is locked!
    do{
       PIN=readAtmPIN();
       if (PIN==1234){
          cout<<"Your Balance is: "<<balance<<endl;
       }else{
           cout<<"Wong PIN\n";
            i++;
       }
    }while (PIN!=1234 && i<3); 
    if(i>=3){
        cout<<"Card is locked!";
    }
}

int main(){
     //program 1:
     readIntNumberInRange(2,8);
     //problem 37:
     checkPIN();
    return 0;
}
