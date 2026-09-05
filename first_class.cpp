#include<iostream>
#include<string>
using namespace std;

class teacher{

  public:
    string name;
    string subject;
    string dept;
    
  private:
    int salary;

  public:

  int setSalary(int s){
    salary=s;
    return salary;
  }

  int showSalary(){
    cout<<"salary:"<<salary<<endl;
  }

  void showDetails(string n, string s, string d){
    cout<<"name:"<<n<<endl;
    cout<<"subject:"<<s<<endl;
    cout<<"department:"<<d<<endl;
    showSalary();
  }

};

int main(){
  teacher t1;

  t1.name="monu";
  t1.subject="maths";
  t1.dept="mathematics";
  t1.setSalary(50000);

  t1.showDetails(t1.name, t1.subject, t1.dept);
}