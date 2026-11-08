#pragma once
//includes
#include "encrypt_crypt.h"
#include <QString>
//
QString transform(set a)
{
    //set vars
    QString  returning; 
    //set equal variable by variable
    for (auto i = a.begin(); i != a.end(); i++) returning+=char(*i);
    //returning
    return returning;
}
//
set transform(QString a)
{
    //set returning var
    set returning;
    //set equale variable by variable
    for (size_t i = 0; i < a.size(); i++) returning.push_back((num)a[i].toLatin1());

    //return 
    return returning;
}