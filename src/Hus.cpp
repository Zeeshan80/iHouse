#include "include/Hus.hpp"  
#include "iostream"

Hus::Hus()
{
	
}
	
Hus::~Hus()
{
	
}

void Hus::myHusFunction(){
    
    std::cout << "Dette er en test for å sjekke om hpp og cpp filene fungerer" << std::endl;

}

int Hus::myHusFunction2(int x, int y){

int sum = x + y;

return sum;
}