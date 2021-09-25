#include <iostream>
using namespace std;
void Prime(int num) {
   int i, c= 0;
   for(i=2; i<=num/2; ++i) {
      if(num%i==0) {
         c=1;
         break;
      }
   }
   if (c==0)
   cout<<num<<" is a prime number"<<endl;
   else
   cout<<num<<" is not a prime number"<<endl;
}
int main() {
   int num;
   cout<<"enter any number: "<<endl;
   cin>>num;
   Prime(num);

   return 0;
}

