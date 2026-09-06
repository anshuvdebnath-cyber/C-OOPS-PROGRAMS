/**
1. Constructor Overloading for Student
Create a Student class with:
Default constructor
Constructor accepting only name
Constructor accepting name and age
Constructor accepting name, age, and marks 
**/

#include<iostream>
#include<string>
using namespace std;

class student{

  public:
   string name;
   int age;
   double marks;

   student(){
    this->name=name;
    cout<<"im a default constructor"<<endl;
   }

   student(string name){
    this->name=name;
    cout<<"name : "<<name<<endl;
   }

   student(string name,int age){
    this->name=name;
    this->age=age;
    cout<<"Name is: "<<name<<", Age is: "<<age<<endl;
   }

    student(string name,int age,double marks){
      this->name=name;
      this->age=age;
      this->marks=marks;
      cout<<"Name is: "<<name<<", Age is: "<<age<<", Marks is: "<<marks<<endl;
    }
};

int main() {
    student s1("ram", 20, 85.5);
    student s2("shyam", 20);
    return 0;
}