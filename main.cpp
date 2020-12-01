#include "header.h"

int main()
{
    ZooAnimal bozo;
    char arr_bozo[] = {'B','o','z','o','\0'};
    bozo.Create(arr_bozo, 408, 1027, 400);

    std::cout<<"This animal's name is "<<bozo.reptName()<<std::endl;

    bozo.Destroy();

    return 0;
}
