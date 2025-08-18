#include <iostream>
using namespace std;
int main (){
    //write this program using structure inside structure
    // ***********************
    // Name: Fatma Abdelhaleem
    // Age: 22
    // City: Giza
    // Country: Egypt
    // Monthly Salary: 5000
    // Yearly Salary: 60000
    // Gender: F
    // Married: 0
    // ***********************
   
    struct Address{
        string city ;
        string country ;
    };
    enum Gender{Male,Female};
    enum MarritalStatus{Single,Married};
    enum FavoriteColor{red,green};
    
    struct Person {
        string name ;
        int age ;
        int monthlySalary ;
        // char gender='F';
        Gender f;
        // bool married=0;
        MarritalStatus s;
        Address address;
        FavoriteColor color;
    };
    Person p1;
    p1.name="Fatma Abdelhaleem";
    p1.age=22;
    p1.monthlySalary=5000;
    p1.address.city="cairo";
    p1.address.country="Egypt";
    p1.s=MarritalStatus::Single;
    p1.f=Gender::Female;
    p1.color=FavoriteColor::red;

    cout<<"***********************\n";
    cout<<"Name: " << p1.name<<endl;
    cout<<"Age: " << p1.age<<endl;
    cout<<"City: "<<p1.address.city<<endl;
    cout<<"Country: "<<p1.address.country<<endl;
    cout<<"Monthly Salary: "<<p1.monthlySalary<<endl;
    cout<<"Yearly Salary: "<<p1.monthlySalary*12<<endl;
    // cout<<"Favorite color is: "<<p1.color<<endl;
    cout<<"Gender: "<<p1.f<<endl;
    cout<<"Married: "<<p1.s<<endl;
    cout<<"***********************\n";
    
    return 0;
}