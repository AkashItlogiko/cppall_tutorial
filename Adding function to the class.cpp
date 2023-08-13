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
};


int main()
{
    student Alim,prokas;
    Alim.id =101;
    Alim.gpa =3.44 ;
    Alim.display();



    prokas.id =102;
    prokas.gpa =3.46;
    prokas.display();




    getch();
}

