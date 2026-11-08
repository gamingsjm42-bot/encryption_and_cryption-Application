//includes
#include <vector>
#include <functional>
//usings
using num = int;
using set =std::vector<num>;
//
struct application
{
    //set f functions   
    std::function<num(num)> f;
    //set constractor
    application(std::function<num(num)> _f):f(_f){}
    //set application
    set operator()(set _A)
    {
        //set retuning set 
        set returning;
        //set forloop
        for (size_t i = 0; i <_A.size(); i++) returning.push_back(f(_A[i]));
        //returning
        return returning;
    }
};