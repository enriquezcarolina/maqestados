#include <stdint.h>
#include <iostream>
#include <rta.hpp>
#include <string.h>
using std::string;
//#include <led.hpp>

class msj

{

public:

msj(string senial): _senial(senial){}

~msj();
void FSM(){

switch (_state)
{

case noanswer:
if(_senial== 'hola')
{
    hola();
    _state=hola;
}

case hola:
if(_senial=='identifica')
{
    if(conocido('identifica')==true)
    {
        _state=ok;
        ok();
    } else
    {
        _state=error()
        error();
    }
}

case ok:

if(_senial=='pass')
{
     if(conocido('identifica')==true)
    {
        _state=ok;
        ok();
    } else
    {
        _state=error()
        error();
    }
}




}

void init()
{
    rta::noanswer();
 
}

private:

string _senial;

enum class _state{

void ok(){rta::ok();}
void hola(){ rta::hola();}
void error(){rta::error();}
};



};