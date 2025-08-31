#include <iostream>
using namespace std;

//program 1 :
//Define an array integers contains 10 elements
//arr[10]={10,20,44,55,33,22,99,100}
//search of 20 and print its position ,use for loop and break statement

void searchForPosition(int number){
   int arr[10]={20,1,44,55,33,22,99,100};
   
   for(int i=0;i<10;i++){
      cout<<"we are at itiration "<<i+1<<endl;
      if(arr[i]==number){
         cout<<"the position of "<<number<<": "<<i<<endl;
         break;
         
      }
   }
   
}

int main(){
    int number=20;
    searchForPosition(number);
    return 0;
}