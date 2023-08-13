
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
 public:
 int id;
 double gpa ;
};


int main()
{
  student Alim ;
  Alim.id =101;
  Alim.gpa =3.44 ;

  cout <<Alim.id <<" " <<Alim.gpa <<endl;

   student prokas ;
  prokas.id =102;
  prokas.gpa =3.46;

  cout <<prokas.id <<" " <<prokas.gpa;



 getch();
}
