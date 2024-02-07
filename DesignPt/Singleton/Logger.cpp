#include <iostream> 
#include "Logger.h"
#include <string>
using namespace std;

  Logger* Logger:: ptr = nullptr;
  
 Logger :: Logger(){
  cout << "inside ctr" << endl;
 }
  Logger* Logger::getInstance(){

   if(ptr == nullptr){
       ptr = new Logger();
   }

     return ptr;
     
}

void Logger::Log(string msg)
{
    cout << msg << endl;
}