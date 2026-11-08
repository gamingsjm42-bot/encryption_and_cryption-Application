//includes
#include "application.h"
#include <cmath>
//set set 
const int lenLetter= 26 ,add= 3;

//crypt uncrypt function
application crypt (std::function<num(num)>([](num x){return (x==(int)' ')? (int)' ' :(x+add)%lenLetter +(num)'a';})),
uncrypt (std::function<num(num)>([](num x){return (x==(int)' ')?' ' :((x-add>0)?(x-add) :(26-x+add))+(num)'a';}));
//
