
#include <boton.hpp>

class press{


public:

press(bool button): button(button){}
~press();

switch (_state)
case suelta:
if(button==1){

vent_desc();
_state=vent_desc; 
count= t_on;
}

case vent_desc:
if(count<=0)
{
    hold();
    _state=hold;
}

case hold:

if(button==0)
{

    vent_asc();
    count=t_on;
    _state=vent_asc;
}

case vent_asc:

if(count<=0){

release();
_state=release;

}

}

void init()
{
    press::release(); // por default esta suelto
}


private:

bool button; // envia 0 si esta sin presionar 1 si se presiona


enum class _state{

void suelta(){ press::release();    }
void vent_desc(){ press::press();}
void vent_asc(){ press::release();}
void hold(){ press::hold();}
};

uint32_t count;
static constexpr uint32_t t_on= 50; // 50 ms



};

