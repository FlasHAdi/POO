#ifndef CONTBANCAR_H
#define CONTBANCAR_H
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define WHITE   "\033[37m"      /* White */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#pragma once

#include <iostream>
#include <string>
#include <cctype>

class ContBancar
{
public:
    ContBancar();//constructor
    ~ContBancar();//destructor

    void setNume(std::string nume, bool checkNume = false);
    std::string getNume() { return m_nume; }

    void setSold(int sold);
    int getSold() { return m_sold; }

    void setIban(std::string iban, bool checkiban = false);
    std::string getIban() { return m_iban; }

    //Tema: o metoda publica prin care puteti printa detaliile contului
    //Extindeti cu un setter si getter pt m_iban

private:
    std::string m_nume;
    int m_sold;
    std::string m_iban;
};

#endif