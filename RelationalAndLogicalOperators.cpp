#include <iostream>
using namespace std;
  
int main (){

   //program1
   //  please enter the first number A ?
   // 2
   // please enter the second number B ?
   // 1
   // 2 + 1 is 3
   // 2 != 1 is 1
   // 2 > 1 is 1
   // 2 < 1 is 0
   // 2 >= 1 is 1
   // 2 <= 1 is 0
   
  int A, B, result;
  cout<<"please enter the first number A ?\n";
  cin>>A;
  cout<<"please enter the second number B ?\n";
  cin>>B;
  result=A+B;
  cout<<A<<" + "<<B<<" is "<< result << endl;
  result= (A!=B);
  cout<<A<<" != "<<B<<" is "<<result << endl;
  result= (A>B);
  cout<<A<<" > "<<B<<" is "<<result<<endl;
  result= (A<B); 
  cout<<A<<" < "<<B<<" is "<<result<<endl;
  result= (A>=B);
  cout<<A<<" >= "<<B<<" is "<<result<<endl;
  result= (A<=B);
  cout<<A<<" <= "<<B<<" is "<<result<<endl;

  //program2
   //(5>6 and 7=7) OR (1 Or 0)  -- 0 || 1 --> 1
   //Not(5>6 and 7=7) OR (1 Or 0) -- (! 0 )|| 1 --> 1
   //Not(5>6 and 7=7)OR NOT(1 Or 0) -- (!0)||(!1) -->1
   //Not(5>6 and 7=7)AND NOT(1 Or 0) -- 1 && 0 -->0
   //((5>6 and 7<=8)OR(8>1 and 4<=3)) AND True) -- (0 || 0)&& 1 -->0
   //((5>6 and NOT( 7<=8)) AND(8>1 OR 4<=3)) OR True) (0 && 1) || 1 -->1
   // 1 1 0 0 0 1

   cout<< ((5>6 && 7==7) || (1 || 0)) <<endl;
   cout<< (!(5>6 && 7==7) || (1 || 0))<<endl;
   cout<< (!(5>6 && 7==7) || !(1 || 0))<<endl;
   cout<< (!(5>6 && 7==7) && !(1 || 0))<<endl;
   cout<< (((5>6 && 7<=8)||(8>1 && 4<=3)) && 1)<<endl;
   cout<< (((5>6 && !(7<=8))&&(8>1 || 4<=3)) || 1)<<endl;

  return 0;
}