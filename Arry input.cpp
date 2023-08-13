#include <iostream>
#include <conio.h>
using namespace std ;

main ()

{
 int marks [5];
 //input
 for (int i=0;i<5;i++)

 {
     cout<<"marks for student " << i <<" = ";
     cin>>marks [i] ;

 }
//output
 cout<<"marks are  :";
for (int i=0;i<5;i++)
{
 cout<<marks [i] <<" ";


}


 getch();
}
