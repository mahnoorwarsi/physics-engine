#include<iostream>
#include<string.h>
#include"character.h"
using namespace std;
class motion
{
 void run()
  {
    cout<<"i am running"<<endl;
  }
  void stop()
  {
    cout<<"i have stopped"<<endl;
  }
   

  bool climb()
  {
    cout<<"i am climbing"<<endl;
    bool a=1;
  }
  bool walk()
  {
    cout<<"i am walking"<<endl;
    bool a=1;
  }
};