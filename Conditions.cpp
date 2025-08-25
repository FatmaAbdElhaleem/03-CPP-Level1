#include<iostream>
using namespace std;

//  Problem 4:
//  Write a program to ask the user to enter his/her:
//  • Age
//  • Driver license
//  Then Print “Hired” if his\her age is grater than 21 and s/he 
// has a driver license, otherwise Print “Rejected"

void readInfo(int &age,bool &licence){
    cout <<"Enter your age: ";
    cin>>age;
    cout<<"Do you have a driver licence? 1 (for yes)/ 0 (for no)";
    cin>>licence;
}
void evaluate(int age,bool licence){
    if (age>21&&licence){
        cout<<"Hired\n";
    }else{
        cout<<"Rejected\n";
    }
}

// Problem 8:
//  Write a program to ask the user to enter:
//  • Mark
//  Then Print the “PASS” if mark >=50, otherwise print “Fail”
//  Example Inputs:
//  45
//  Outputs
//  Fail
 
void evaluateMark(float mark){
    if(mark >=50){
        cout<<"PASS";
    }else{
        cout<<"Fail";
    }
}
//proplem 45: (using if else)
// Write a program to ask the user to enter:
//  • Month
//  Then print the day as follows:
//  • 1 Print January
//  • 2 Print February
//  • 3 Print March
//  • 4 Print April
//  • 5 Print May
//  • 6 Print June
//  • 7 Print July
//  • 8 Print August
//  • 9 Print September
//  • 10 Print October
//  • 11 Print November
//  • 12 December
//  • Otherwise print “Wrong Month” and ask the use to enter the Month again.
//  Example Inputs:
//  11
//  Outputs
//  Novembe

void checkMonth(int month){
   if(month==1){
    cout<<"January";
   }else if(month==2){
    cout<<"February";
   }else if(month==3){
    cout<<"March";
   }else if(month==4){
    cout<<"April";
   }else if(month==5){
    cout<<"May";
   }else if(month==6){
    cout<<"June";
   }else if(month==7){
    cout<<"July";
   }else if(month==8){
    cout<<"August";
   }else if(month==9){
    cout<<"September";
   }else if(month==10){
    cout<<"October";
   }else if(month==11){
    cout<<"November";
   }else if(month==12){
    cout<<"December";
   }else{
    cout<<"Wrong Month";
   }
}


int main(){
    //  Problem 4:
    int age;
    bool driverLicence;
    readInfo(age,driverLicence);
    evaluate(age,driverLicence);

    //  Problem 8:
      cout<<"**********************\n";
    float mark;
    cout<<"Enter your mark: ";
    cin>>mark;
    evaluateMark(mark);

    //problem 45:
    int month;
    cout<<"\nEnter the month? ";
    cin>>month;
    checkMonth(month);
    return 0;
}