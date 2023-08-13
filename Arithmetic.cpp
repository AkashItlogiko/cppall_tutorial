#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()

{
  float num1,num2;


  cout<<"Enter 2 number :";
  cin>> num1>> num2 ;

  cout<<showpoint;
  cout<<fixed;
  cout<<setprecision(2);

  float sum = num1 + num2;
  cout<<setw (20) << "sum is : " <<sum;
  cout << endl;

  float sub = num1 - num2;
  cout<<setw (20) << "subtraction is :" <<sub;
  cout<<endl;

  float mul = num1 * num2;
  cout<<setw (20) <<"multiplication is :" <<mul;
  cout<<endl;

  double div =(float) num1 / num2;
  cout<<setw (20) <<"Division is :" <<div;
  cout<<endl;

  //int rem = num1 % num2;
  //cout <<"remainder is :" <<rem;
  //cout<<endl;





  getch();

}
