#include "ContBancar.h"
#include <iostream>
#include <string>

ContBancar::ContBancar()
{
    std::cout << "Un cont a fost creat\n" << std::endl;
}

ContBancar::~ContBancar()
{
    std::cout << "Un cont a fost sters\n" << std::endl;
}

void ContBancar::setNume(std::string nume, bool checkNume)
{
    if (nume.empty()) //check nume daca e gol
    {
        std::cout << BOLDRED << "EMPTY NUME!\n" << RESET << std::endl;
        return;
    }
    //Tema: implementati un check in care nume sa fie doar caractere latine
    for (int i=0; i < nume.length(); i++)
        {
            if(isalpha(nume[i]) || isspace(nume[i])) //check latin aA - zZ si Spatiu
            {
                checkNume = true;
                nume[i] = toupper(nume[i]); //convert Majuscule
            }
            else
            {
                checkNume = false;
                std::cout << BOLDRED << "\rINVALID NUME! " << "Doar Caractere(latin) si Spatiu!\n" << RESET << std::endl; //check nume daca nu sunt doar caractere latine
                return;
            }
        } 
    m_nume = nume;
}

void ContBancar::setSold(int sold)
{
   if(sold < 0)
   {
        std::cout << "ERROR sodul initial trebuie sa fie mai mare de 0\n";
   }
   else
   {
        m_sold = sold;
   }
}

void ContBancar::setIban(std::string iban, bool checkiban)
{
    if (iban.empty()) //check nume daca e gol
    {
        std::cout << BOLDRED << "EMPTY IBAN!\n" << RESET << std::endl;
        return;
    }

    for (int i=0; i < iban.length(); i++)
        {
            if(isalpha(iban[i]) || isspace(iban[i]) || isdigit(iban[i])) //check latin aA - zZ , Spatiu si numere
            {
                checkiban = true;
                iban[i] = toupper(iban[i]); //convert Majuscule
            }
            else
            {
                checkiban = false;
                std::cout << BOLDRED <<"INVALID IBAN!\n" << RESET << std::endl; //check nume daca nu sunt doar caractere nevalide
                return;
            }
        } 
    m_iban = iban;
}
