/**
Create a class name Person containing a dynamically allocated integer
pointer age. Initialize the pointer using a parameterized constructor. 
Create an second object by copying the first object using the compile-generated
copy constructor. Modify the age through the second object and observe the effect
on first object.
**/

#include<iostream>
#include<string>
using namespace std;

class person{
public:
  int*agePtr;

  person(int age){
    agePtr= new int;
    *agePtr=age;  
  }

  void getInfo(string name){
    cout<<name<<" age:"<<*agePtr<<endl;
  }
};

int main(){
  person p1(5);

  // example of compile-generated copy constructor
  person p2(p1);
  p1.getInfo("p1");

  // p2 object will also get the p1 properties due to copy constructor
  p2.getInfo("p2");
}