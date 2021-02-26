// Institusjon: Universitetet i SørØst-Norge
// Fag: PIOP21-1 21V Objektorientert programmering 
// Forelesere: Olaf Hallan Graven & Joakim Bjørk
// Dato: 15.02.2021 - 16.03.2021
// Prosjekt i OOP-C++ av Jonathan Van Garling Senning & Zeeshan Aslam
// Oppgave navn: iHouse (SmartHus)

/* Oppgave beskrivelse: iHouse (SmartHus)
   I denne oppgaven skal dere lage et styringssystem for et smarthus, samt å simulere bruken av dette systemet. 
   Det er opp til prosjektgruppa å lage detaljerte spesifikasjon på oppgaven. Mulige ting å lage i systemet er:
        - Legge inn rom
        - Lys (av/på/dim/lysmåler ute /inne)
        - Varme
        - Dørlåser
        - Hvitevarer
        - Alarmer / Automatisk kaffe om morgenen
        - Sporing av om det er personer i et rom.
    Systemet bør implementeres ved bruk av tråder. 
    En mulig utvidelse er å lage et enkelt grafisk brukergrensesnitt. 
    De er viktig at arbeidet med et grafisk brukergrensesnitt ikke går 
    utover funksjonen til systemet (ikke blir hoveddelen av oppgaven)
*/

#include "iostream"
#include "include/Sensorer.hpp"
#include "include/LydSensor.hpp"

void myFunction();

int main(){
    
    LydSensor objLydsensor;
    Sensorer* objSensorer = &objLydsensor;

    objSensorer->Init();
    objSensorer->Write();
    objSensorer->Read();
    srand((int)time(0));
	
    int myRandomValue = (rand() % 10) + 1;
    // std::cout << std::endl; 
    // std::cout << myRandomValue << " " << std::endl;
    int *myRandomPointerValue = &myRandomValue;
    std::cout << std::endl;    
    objLydsensor.setValue( *myRandomPointerValue);
    std::cout << "Det skrives ut " << objLydsensor.getValue() << std::endl;
    std::cout << std::endl;

    return 0;
}



