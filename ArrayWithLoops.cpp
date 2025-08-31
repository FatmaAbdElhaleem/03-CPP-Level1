#include <iostream>
using namespace std;

//solve this:
// How Many Numbers do you want to enter? 1 to 100?
// 3
// Please enter Number 1
// 1
// Please enter Number 2
// 2
// Please enter Number 3
// 3
// Array Data...
// Number [1] : 1
// Number [2] : 2
// Number [3] : 3
// ************************************
// Sum = 6
// Average = 2

void readData(int Numbers[100],int count){
    for(int i=0;i<count;i++){
        cout<<"Please enter Number "<<i+1<<": ";
        cin>>Numbers[i];
    }
}

void displayData(int Numbers[100],int count){
    cout<<"Array Data..."<<endl;
    for(int i=0;i<count;i++){
        cout<<"Number ["<<i+1<<"] : "<<Numbers[i]<<endl;
    }
    cout<<"***********************************\n";
}

int sum(int Numbers[100],int count){
    int sum=0;
    for(int i=0;i<count;i++){
      sum=sum+Numbers[i];
    }
    return sum;
}

int main(){
   int Numbers[100];
   int count=0;
    cout<<"How Many Numbers do you want to enter? 1 to 100? ";
    cin>>count;
   readData(Numbers,count);
   displayData(Numbers,count);
   cout<<"Sum = "<<sum( Numbers, count)<<endl;
   cout<<"Average = "<<sum( Numbers, count)/count;
}