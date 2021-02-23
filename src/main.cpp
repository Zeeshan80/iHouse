
#include "iostream"
#include "include\baderom.hpp"
#include "include\badekar.hpp"

//mingw32-make
int main(){
    std::cout<< "noe skjer" << std::endl;
    badekar* badekaret = new badekar();
    std::cout<< badekaret->get_bubbleState() << std::endl;
    std::cout<< badekaret->get_waterLevel() << std::endl;
    std::cout<< badekaret->get_temp() << std::endl;

    badekaret->set_temp(50);
    std::cout<< badekaret->get_temp() << std::endl;
    std::cout<< "noe er ferdig" << std::endl;
    return 0;

}

