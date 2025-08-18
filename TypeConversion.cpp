#include<iostream>
#include<string>
using namespace std;
int main(){
    //convert string st1="43.22" to double , float, and integer
    string st1="43.22" ;
    double dSt1=stod(st1);
    float fSt1=stof(st1);
    int iSt1=stoi(st1);
    cout<<"st1 to double: "<<dSt1<<" ,st1 to float: "<<fSt1<<" ,st1 to integer: "<<iSt1<<endl;
    //convert integer N1=20 to string
    int N1=20;
    string str=to_string(N1);
    cout<<"N1 to string "<< str<<endl;
    //convert double N2=33.5 to string
    double N2=33.5;
    str=to_string(N2);
    cout<<"N2 to string "<<str;
    //convert float N3=55.23 to string, and integer
    float N3=55.23;
    str=to_string(N3);
    int integer=(int)N3;
    cout<<"\nN3 to string "<<str;
    cout<<"\nN3 to integer "<< integer;
    return 0;
}