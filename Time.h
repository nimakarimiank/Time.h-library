#include <iostream>
#include <time.h>
/*

*/
using namespace std;
class Time
{
private:
public:
    void Now();
    void GMTnow();
};

void Time::Now(){
    time_t now = time (0); /* This returns the current calendar time of the system in number of
                              seconds elapsed since January 1, 1970. If the system has no time, .1 is returned.*/
    char* Time= ctime(&now); //convert now to string form
    cout<<'\n'<<Time<<'\n';
}
void Time::GMTnow(){
    time_t GMTnow = time (0); /* This returns the current calendar time of the system in number of
                              seconds elapsed since January 1, 1970. If the system has no time, .1 is returned.*/
    tm* GMTFORMAT=gmtime(&GMTnow);
    char* GMTSTRING=asctime(GMTFORMAT);
    cout<<'\n'<<GMTSTRING<<'\n';
}