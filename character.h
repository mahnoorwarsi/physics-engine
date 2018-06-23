#include<iostream>
#include<string.h>
using namespace std;
class character
{
  enum status{stopped,walking,climbing,running};
  character()
  {
  status=stopped;
  }
  void setstatus(int a)
  {
    status=a;
  }
   status getstatus()
  {
    return status;
  }

};