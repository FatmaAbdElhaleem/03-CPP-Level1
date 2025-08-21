#include <iostream>
#include<string>
using namespace std;
    //make this program by creating one function without using conditions or loops 
    // please, enter a string: fatma abdelhaleem
    // please, enter a string: 5
    // please, enter a string: 10
    // ****************************
    // The length of the string1 is: 17
    // charachters at 0, 2, 4, 7 are: f t a b
    // concatinating string2 , string3 : 510
    // 5*10=50

void playingWithStr(){
    string str, n1str, n2str;
    cout<<"please, enter a string: ";
    getline(cin,str);
    cout<<"please, enter a string: ";
    cin>>n1str;
    cout<<"please, enter a string: ";
    cin>>n2str;
    cout<<"****************************\n";
    cout<<"The length of the string1 is: "<<str.length()<<endl;
    cout<<"charachters at 0, 2, 4, 7 are: "<<str[0]<<" "<< str[2] <<" "<<str[4]<<" "<< str[7]<<endl;
    cout<<"concatinating string2 , string3 : "<<n1str+n2str<<endl;
    cout<<n1str<<"*"<<n2str<<"="<< (stoi(n1str) * stoi(n2str))<<endl;
    }

int main(){
  playingWithStr();
}