//
// Created by jesus on 14/05/2020.
//

#ifndef UNTITLED1_BOOK_H
#define UNTITLED1_BOOK_H
#include  "Person.h"

class Book {
private:
    char name[100];
    char author[100];
    char year[100];
    char gender[100];
    char editorial[100];
    char isbn[100];
public:
    Book();
    Book(char[],char [],char[],char[],char[],char[]);


    void toString();
};


#endif //UNTITLED1_BOOK_H
