#include<iostream>
#include<string.h>
using namespace std;
class statemachine
{
    /*void changestate()
  {
  if(walk(a=1))
  {
  setstatus(1);
  }
  else if(run(a=1))
  {
    setstatus(3);
  }
  else if(climb()=1)
  {
    status=2;
  }
  else 
  {
    status=0;
  }
  }*/
  void checkstate()
  {
    cout<<"i am "<<getstatus()<<endl;
  }
  void play()
  {
    cout<<"i am playing"<<endl;
  }

  void climb()
  {
    cout<<"i am climbing"<<endl;
  }
  void walk()
  {
    cout<<"i am walking"<<endl;
  }
  void run()
  {
    cout<<"i am running"<<endl;
  }
  void stop()
  {
    cout<<"i have stopped"<<endl;
  }
};