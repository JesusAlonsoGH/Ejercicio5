//
// Created by jesus on 14/05/2020.
//
#include <iostream>
#include "Person.h"
#include <cstring>

using namespace std;
Person::Person(){

}
Person::Person(char nameU[100], char age [100]) {
    strcpy(this->nameU,nameU);
    strcpy(this->age,age);

}

void Person::toString(){

    cout<<"Nombre:"<<this->nameU<<endl;
    cout<<"Edad:"<<this->age<<endl;



}

