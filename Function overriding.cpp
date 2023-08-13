#include <iostream>
#include <conio.h>
using namespace std ;

class person
{
public :
    void display ()
    {
     cout<< " I am a person "<<endl;
    }

};

class student : public person
{

    //display
public :
    void display ()
    {
     cout<< " I am a student "<<endl;
    }

};

   class Teacher : public person
 {

   //display;
public :
    void display ()
    {
     cout<< " I am a Teacher "<<endl;
    }

};

int main ()
{
  person p;
  p.display();

  student s;
  s.display();
  Teacher t;
  t.display();
    getch();
}
