/**
Create a class named BOX with data members: Length, Breadth, & Height.  
Implement multiple constructors to initialize the object using different 
no. of argument & display the dimensions & calculate the vol. of BOX.
**/

#include<iostream>
#include<string>
using namespace std;

class dimension{

public:
  int length, breadth, height;
 

  dimension(int side){
    cout<<"length: "<<side<<endl;
    cout<<"breadth: "<<side<<endl;
    cout<<"height: "<<side<<endl;
    cout<<"the volume of box is: "<<side*side*side<<endl; 
  }

  dimension(int length, int breadth, int height){
    cout<<"length: "<<length<<endl;
    cout<<"breadth: "<<breadth<<endl;
    cout<<"height: "<<height<<endl;
    cout<<"the volume of box is: "<<length*breadth*height<<endl; 
  }
};

int main(){
  dimension d1(2);
  dimension d2(1,2,3);
  return 0;
}