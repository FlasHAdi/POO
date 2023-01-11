#include <iostream>
#include "ContBancar.h"

void print()
{
    std::cout << "Hello from a function\n";
}

class myClass
{
public:
void printHello()
{
    std::cout << "Hello from my Class!!\n";
}

};

int main()
{
    ContBancar c1;
    c1.setNume("FlasH Adi");
    c1.setSold(210);
    c1.setIban("GB17 fxrl 1205 7418 4726 0710");
        std::cout << GREEN << "Numele utilizatorului c1 este " << c1.getNume() << std::endl;
        std::cout << "Soldul lui c1 este " << c1.getSold() << std::endl;
        std::cout << "IBAN`ul lui c1 este " << c1.getIban() << RESET << std::endl;    
    /*ContBancar c2;
    c2.setNume("Ionescu");
    c2.setSold(5);
        std::cout << "Soldul lui c2 este " << c1.getSold() << std::endl;
        std::cout << "Numele utilizatorului c2 este " << c2.getNume() << std::endl;
    

    std::cout<< "Hello World!" << std::endl;
    myClass obiect; // instantiem un obiect de tip myClass
    print();
    obiect.printHello();//invocam metod printHello

    myClass obj2;
    obj2.printHello();
    */
    

    return 0;
}
