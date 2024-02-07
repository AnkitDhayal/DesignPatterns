#include <iostream>
#include <string>
using namespace std;


class Logger {
    Logger()  ;  
    static Logger* ptr ;
    
  
    public :
    // Logger(const Logger& logger) = delete;

    static Logger* getInstance();
    void Log(string msg);
};