#include <iostream>
#include <conio.h>
using namespace std;

class student
{
 private :S
     string name ;
 public :
    void setname(string x)
    {
      name = x;
    }
    string getname()
    {
     return name;
    }
};

int main()
{
  student s1;

  s1.setname ("anisul");
  cout <<s1.getname();S

 getch();
}
