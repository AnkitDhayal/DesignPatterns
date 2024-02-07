#include <iostream>
#include "Logger.h"

using namespace std;

int main()
{

   Logger* res = Logger::getInstance();
   //Logger res2(*res);
    cout << res << endl;
   //cout << &res2 << endl;
  
   res->Log("Result by variable 1");
   
    Logger* res1 = Logger::getInstance();
     cout << res1 << endl;
   res1->Log("Result by variable 2");

   return 0;

}