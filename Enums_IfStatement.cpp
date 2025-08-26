#include<iostream>
using namespace std;

//write this program using enums & else if once and switch another time :
// ****************************
// Please Enter the number of your country?
// (1) Jordan
// (2) Tunisa
// (3) Algeria
// (4) Oman
// (5) Egypt
// (6) Iraq
// (7) Other
// ****************************
// Your Choice? 6
// Iraq

enum enCountries{Jordan=1,Tunisa=2,Algeria=3,Oman=4,Egypt=5,Iraq=6,Other=7};

//solution using else if 
// void checkCountry(enCountries country){
//    if(country==enCountries::Jordan){
//     cout<<"Jordon";
//    }else if(country==enCountries::Tunisa){
//     cout<<"Tunisa";
//    }else if(country==enCountries::Algeria){
//     cout<<"Algeria";
//    }else if(country==enCountries::Oman){
//     cout<<"Oman";
//    }else if(country==enCountries::Egypt){
//     cout<<"Egypt";
//    }else if(country==enCountries::Iraq){
//     cout<<"Iraq";
//    }else if(country==enCountries::Other){
//     cout<<"Other";
//    }else{
//     cout<<"Wrong Answer";
//    }
// }

//solution with switch :
void checkCountry(enCountries country){
    switch (country){
     case enCountries::Jordan:
         cout<<"Jordan";
         break;
     case enCountries::Tunisa:
         cout<<"Tunisa";
         break;
     case enCountries::Algeria:
         cout<<"Algeria";
         break;
     case enCountries::Oman:
         cout<<"Oman";
         break;
     case enCountries::Egypt:
         cout<<"Egypt";
         break;
     case enCountries::Iraq :
         cout<<"Iraq";
         break;
     case enCountries::Other :
         cout<<"Other";
         break;
     default:
       cout<<"Wrong Answer";
    }
}


int main(){
    cout << "****************************\n"; 
    cout << "Please Enter the number of your country?\n"; 
    cout << "(1) Jordan\n"; 
    cout << "(2) Tunisa\n"; 
    cout << "(3) Algeria\n"; 
    cout << "(4) Oman\n"; 
    cout << "(5) Egypt\n"; 
    cout << "(6) Iraq\n"; 
    cout << "(7) Other\n"; 
    cout << "****************************\n"; 
    cout << "Your Choice? ";
    int container;
    cin>>container;
    enCountries country=(enCountries)container;
    checkCountry(country);
    return 0;
}