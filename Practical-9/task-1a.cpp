// WAP to assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
#include<iostream>
#include<string>
using namespace std;
class student{
  public:
      int rollno;
      int phoneno;
      string address;
};
int main(){
student jay,josh;
jay.rollno=12;
jay.phoneno=739479324;
jay.address="Hairdwar";

cout<<"jay.rollno: "<<jay.rollno<<endl;
cout<<"jay.phoneno: "<<jay.phoneno<<endl;
cout<<"jay.address: "<<jay.address<<endl;

josh.rollno=13;
josh.phoneno=815479324;
josh.address="Canada";

cout<<"josh.rollno: "<<josh.rollno<<endl;
cout<<"josh.phoneno: "<<josh.phoneno<<endl;
cout<<"josh.address: "<<josh.address<<endl;

return 0;}
