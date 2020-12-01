#include "zoo_animal.cpp"

void ZooAnimal::Create(char *name_, int cageNumber_, int weightDate_, int weight_)
{
    name = name_;
    cageNumber = cageNumber_;
    weightDate = weightDate_;
    weight = weight_;
};

void ZooAnimal::Destroy()
{
    delete [] name;
}
char* ZooAnimal::reptName()
{
    return name;
}
int ZooAnimal::daysSinceLastWeighed(int today){
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
}
int ZooAnimal::reptWeightDate()
{
    return weightDate;
}
void ZooAnimal::changeWeightDate(int today)
{
    weightDate = today;
}
void ZooAnimal::isMotherOf(ZooAnimal& mother_)
{
    *mother = mother_;
}
