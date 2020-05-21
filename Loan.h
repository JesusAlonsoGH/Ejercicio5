//
// Created by jesus on 19/05/2020.
//

#ifndef UNTITLED1_LOAN_H
#define UNTITLED1_LOAN_H


class Loan {
private:
    int  users;
    int books;
    char date [100];
    int status;
    char dateR[100];
public:
    Loan();
    Loan(int,int,char[],int,char[]);
    int getuser();
    int getbooks();
    int getstatus();
    void toString();
    int backBook();
    char getdateR();
};


#endif //UNTITLED1_LOAN_H
