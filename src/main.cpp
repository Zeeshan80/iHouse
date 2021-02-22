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
#include "include/Hus.hpp"
#include "include/Kjokken.hpp"
#include "include/Stue.hpp"


void myFunction();

int main(){
    // Noen random variabler
    int x = 3;
    int y = 5;
    int z (12);
    int sum;
    sum = x + y + z;

    // lets start the fun
    std::cout << std::endl;
    std::cout << "Dette er min version av første delen av koden :) " <<std::endl;  
    std::cout << std::endl;
    std::cout << "Nå tror jeg source kontroll er i rkitg innstillinger " << std::endl;  
    std::cout <<std::endl;
    std::cout << sum << std::endl;  
    std::cout <<std::endl;
    myFunction();

    Hus objHus;
    Kjokken objKjokken;
    Stue objStue;

    objHus.myHusFunctionHus();
    std::cout <<std::endl;

    std::cout << objHus.myHusFunctionHus2(2,5) << std::endl;
    std::cout <<std::endl;

    objKjokken.myFunctionKjokken();
    std::cout <<std::endl;

    objStue.myFunctionStue();
    std::cout <<std::endl;
    
    return 0;
}

void myFunction(){
    std::cout << "Dette er en funksjon for å se branchen til github" << std::endl;
    std::cout <<std::endl;
}
