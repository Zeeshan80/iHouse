
#include "iostream"
#include "include\bathroom.hpp"
#include "include\bathtub.hpp"

//mingw32-make
int main(){
    std::cout<< "noe skjer" << std::endl;
    bathtub* badekaret = new bathtub();
    std::cout<< badekaret->get_bubbleState() << std::endl;
    std::cout<< badekaret->get_waterLevel() << std::endl;
    std::cout<< badekaret->get_temp() << std::endl;

    badekaret->set_temp(50);
    std::cout<< badekaret->get_temp() << std::endl;
    badekaret->get_bathtubInfo();
    badekaret->get_bathtubInfo();
    badekaret->get_bathtubInfo();
    std::cout<< "noe er ferdig" << std::endl;
    return 0;

}

