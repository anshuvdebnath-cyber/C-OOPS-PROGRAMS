/**
4. Write a program to print the names of students by creating a Student class.
 If no name is  passed while creating an object of Student class,
  then the name should be "Unknown", otherwise the name should be equal
   to the String value passed while creating object of Student class
**/

#include<iostream>
#include<string>
using namespace std;

class student{
  public:
    string name;

    student(string name){
      if(name.empty()){
        this->name="unknown";
      }else{
        this->name=name;
      }
      }
};

int main(){

  //normal case
  student s1("alice");
  cout << s1.name << endl;

  //empty case
  student s2("");
  cout << s2.name << endl;
  
  return 0;
}

