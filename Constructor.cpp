#include <iostream>
#include <conio.h>
using namespace std;

class student
{

  public :
      int id ;
      double gpa ;

      void display ()
      {
        cout << id << " " << gpa << endl ;
      }
     student(int x,double y)
    {
      id = x;
      gpa =y ;
    }

};
int main()
{
  student Alim (101,3.44);
  Alim.display ();

  student David (102,3.93) ;
  David.display();


 getch();
}
