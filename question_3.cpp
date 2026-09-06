/**
 * 3. Create a class named Student with a data member marks.
 *  Dynamically create a Student object using the new operator. 
 * Accept the student's marks from the user, display the
 *  marks, and finally release the dynamically allocated 
 * memory using the delete operator.& Make it for 4 students
 **/

#include<iostream>
#include<string>
using namespace std;

class student{
  public:
    string name;
    double marks;

    student(string name, double marks){
      this->name=name;
      this->marks=marks;
    }

    void showDetails(){
      cout<<this->name<<endl;
      cout<<this->marks<<endl;
    }

  };

  int main(){
    student *s1 = new student("Alice", 85.5);
    student *s2 = new student("Bob", 90.0);
    student *s3 = new student("Charlie", 78.5);
    student *s4 = new student("David", 92.0);


    (*s1).showDetails();
    s2->showDetails();
    s3->showDetails();
    s4->showDetails();

    delete s1;
    delete s2;
    delete s3;
    delete s4;

    return 0;
}