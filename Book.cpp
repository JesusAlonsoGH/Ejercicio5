//
// Created by jesus on 14/05/2020.
//

#include "Book.h"
#include <iostream>
#include "Person.h"
#include <cstring>

using namespace std;

Book::Book() {

}

Book::Book( char name[100],char author[100] ,char year [100],char gender[100],char editorial[100],char isbn[100]){
    strcpy(this->name,name);
    strcpy(this->author,author);
    strcpy(this->year,year);
    strcpy(this->gender,gender);
    strcpy(this->editorial,editorial);
    strcpy(this->isbn,isbn);
}
void Book::toString() {
    cout<<"Nombre del libro :"<<this->name<<endl;
    cout<<"Autor:"<<this->author<<endl;
    cout<<"Año :"<<this->year<<endl;
    cout<<"Genero:"<<this->gender<<endl;
    cout<<"Editorial:"<<this->editorial<<endl;
    cout<<"Isbn:"<<this->isbn<<endl;



}
