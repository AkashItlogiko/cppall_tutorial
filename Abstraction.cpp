# include <iostream>
# include <conio.h>

using namespace std;

class Mobileuser
{
  public :
        void call ()
        {
          cout << "Hello !"<<endl;
        }

    virtual void sendMessage() = 0;
};

class Rahim : public Mobileuser

{

 public :
     void sendMessage()
     {
       cout << " Hi,This is Rahim"<<endl;
     }
};

class Karim : public Mobileuser
{

 public :
     void sendMessage()
     {
       cout << " Hi,This is Karim"<<endl;
     }
};
int main()
{
  Mobileuser *m;

  Rahim r;
  Karim k;

  m = &r;
  m ->sendMessage();

  m= &k;
  m -> sendMessage ();

 getch();
}
