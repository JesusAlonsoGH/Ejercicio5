//
// Created by jesus on 19/05/2020.
//

#ifndef UNTITLED1_LOAN_H
#define UNTITLED1_LOAN_H


class Loan {
private:
    char user[100];
    char books[100];
    char date [100];
    char status[100];
public:
    Loan();
    Loan(char[],char[],char[],char[]);
    void toString();
};


#endif //UNTITLED1_LOAN_H
