#include<iostream>
#include<string.h>
using namespace std;
class oned:public motion
{
     walk()
  {
    cout<<"i am walking"<<endl;
    enum status=1;
    bool a=1;
  }
    run()
  {
    cout<<"i am running"<<endl;
    enum status=3;
    bool a=1;
  }
};