/**
 *  Create a class named Student with a data member marks.
 *  Dynamically create a Student object using the new operator. 
 * Accept the student's marks from the user, display the marks,
 *  and finally release the dynamically allocated memory using the delete operator.**/

 #include<iostream>
 #include<string>
 using namespace std;

 class student{
  public:
    string name;
    int* marksPtr;

    student(string name, int cgpa){
      this->name=name;
      marksPtr = new int;
      *marksPtr=cgpa;
    }

    void showDetails(){
      cout<<name<<endl;
      cout<<*marksPtr<<endl;
    }

 };

 int main(){

  student s1("ram",8);
  s1.showDetails();
 }