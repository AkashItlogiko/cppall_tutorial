#include <iostream>
#include<conio.h>
using namespace std;

int main()

{ double farn,cels;


cout << "Enter celsius : " ;
cin >> cels ;

farn =1.8 *cels + 32;

cout<< "Fahrenheit = " <<farn;

cout << "Enter Fahrenheit : " ;
cin >> farn ;

cels = (farn - 32) /1.8;

cout<< "celsius = " <<cels;




  getch ();
}


