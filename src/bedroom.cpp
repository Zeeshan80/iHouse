#include "include/bedroom.hpp" 


bedroom::bedroom() {}

bedroom::~bedroom() {}

bedroom::bedroom(double temperature1,double humidity1,bool light1,bool personInBedroom)
{
    temperature=temperature1;
    humidity=humidity1;
    light=light1;
    personInRoom=personInBedroom;
}

void bedroom::set_wakeUpLight(unsigned int hour, unsigned int minute, std::string soundnumber, unsigned int brightness, bool state) {
    wakeUpLightBedroom = new wakeUpLight(hour, minute,soundnumber, brightness, state);
}

void bedroom::set_wakeUpLightState(bool state)
{
    wakeUpLightBedroom->set_onOff(state);
}

void bedroom::get_wakeUplightInfo() {
    wakeUpLightBedroom->get_info();
}

std::string bedroom::name()
{
    return "Bedroom";
}
