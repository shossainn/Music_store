#include <iostream>
#include <iomanip>
using namespace std;

int main()
{







double balance = 10, input; 
  while(balance >= 0.1){

cout << "Please Enter the cost of a song: ";
cin >> input;

if(input > balance)
cout << "Your choice is too expensive!!! Choose another one please!"<<endl;

else
balance -= input;

cout << "You remaining balance is: " << fixed << setprecision(2) << 

balance << endl << endl;}

cout << "Sorry, your balance is $" << fixed << setprecision(2) << 

balance << ". You can not buy more songs\n";





return 0;
}