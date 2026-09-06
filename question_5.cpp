/**
 Suppose you have a Piggie Bank with an initial amount of $50 and you have to add 
some more amount to it. Create a class 'AddAmount' with a data member named 
'amount' with an initial value of $50. Now make two constructors of this class as 
follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to Piggie Bank
Create object of the 'AddAmount' class and display the final amount in Piggie Bank
* */

#include<iostream>
#include<string>
using namespace std;

class addAmount{

public:
  int amount=50;

  addAmount(){
    cout<<"no amount will be added to the piggie bank"<<endl;
  }

  addAmount(int extraAmount){
    amount=amount+extraAmount;
    cout<<"final amount: "<<amount<<endl;
  }
};

int main(){

  //for default constructor
  addAmount a1;

  //for parametrized constructor
  addAmount a2(20);
  return 0;
  
}