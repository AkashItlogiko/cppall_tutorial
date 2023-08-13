#include <iostream>
#include <conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa ;
    void display()
    {
        cout << id <<" " << gpa << endl ;
    }
    void setvalue(int x,double y)
    {
        id = x ;
        gpa = y ;
    }
};


int main()
{
    student Alim,prokas;
    Alim.setvalue(101,3.44);
    Alim.display();




    prokas.setvalue(102,3.46);
    prokas.display();




    getch();
}
