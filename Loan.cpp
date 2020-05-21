//
// Created by jesus on 19/05/2020.
//

#include "Loan.h"
#include <cstring>
#include <iostream>
using namespace std;
Loan::Loan() {

}
Loan::Loan(int users,int  books,char date[100],int status,char dateR[100]) {
    this->users=users;
    this->books=books;
    strcpy(this->date,date);
   this->status=status;
   strcpy(this->dateR,dateR);

}
int Loan::getuser() {
    return this->users;
}
int Loan::getbooks() {
    return this->books;
}
int Loan::getstatus(){
    return this->status;
}

int Loan::backBook() {
    return this->status=0;
}

void Loan::toString(){
    cout<<"Libro:"<<this->books<<endl;
    cout<<"Fecha de prestamo"<<this->date<<endl;
    cout<<"Fecha de entrega:"<<this->dateR<<endl;
    if(this->status==0){
        cout<<"Estatus disponible"<<endl;
    } else{
        cout<<"Prestado"<<endl;
    }

};