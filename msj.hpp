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
enum class _state{
ok,hola,error
//void ok(){rta::ok();}
//void hola(){ rta::hola();}
//void error(){rta::error();}
};
void FSM(){

switch (_state)
{

case noanswer:
if(_senial== 'hola')
{
    hrta::ola();
    _state=hola;
}
break;
case hola:
if(_senial=='identifica')
{
    if(conocido('identifica')==true)
    {
        _state=ok;
        ok();
    } else
    {
        _state=error;
        error();
    }
}
break;
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





}