#include <iostream>
#include "Book.h"
#include "Person.h"
#include "Loan.h"
using namespace std;
void mainn(){
    cout<<"----------Menu-------------"<<endl;
    cout<<"1.Usuarios 2.Libros 3.Prestamos"<<endl;
    cout<<"Opcion:";
}

Book registerF(){
    char name[100];
    char  author[100];
    char year[100];
    char gender[100];
    char editorial[100];
    char isbn[100];


    cout << "Ingrese nombre de libro"<<endl;
    cin >> name;
    cout<<"Ingrese nombre del autor"<<endl;
    cin>>author;
    cout << "Ingrese año"<<endl;
    cin >> year;
    cout << "Ingrese  genero"<<endl;
    cin >> gender;
    cout << "Ingrese  editorial"<<endl;
    cin >> editorial;
    cout << "Ingrese isbn"<<endl;
    cin >> isbn;




    return Book(name,author,year,gender,editorial,isbn);
}
Person registerU(){
    char nameU[100];
    char age[100];

    cout<<"Ingrese nombre:";
    cin>>nameU;
    cout<<"Ingrese Edad";
    cin>>age;

    return Person(nameU,age);
}
Loan registerL(){
    int NumberU=0;

}
int main() {
   int optionM=0;
   int accumulator=0;
   Book books[10];
   bool end=true;
   char name[100];
   char lastname[100];
   char author[100];
   char year[100];
   char gender[100];
   char editorial[100];
   char isbn[100];
   Person user[10];
   int accumulatorU=0;
   int accumulatorL=0;
   Loan loans[100];
   while(end==true) {
       mainn();
       cin >> optionM;
       if(optionM==1){
           cout<<"----Administrar usuarios----"<<endl;
           cout<<"1.Registrar 2.Editar 3.Consultar informacion 4.Eliminar 5.Menu principal"<<endl;
           cout<<"Opcion:";
           cin>>optionM;

           switch (optionM) {


               case 1:
                   user[accumulatorU]=registerU();
                   cout<<"Numero de usuario:"<<accumulatorU<<endl;
                   accumulatorU+=1;
                   break;
               case 2:
                   cout<<"------Edicion de datos de usuario-------"<<endl;
                   cout<<"Libro que desea editar :";

                   cin>>optionM;
                   user[optionM].toString();
                   user[optionM]=registerU();
                   break;


               case 3:
                   cout<<"------Datos de usuario-------"<<endl;
                   cout<<"Libro que desea ver sus datos :";

                   cin>>optionM;
                   user[optionM].toString();

                   break;
               case 4:
                   cout<<"------Eliminar usuario-------"<<endl;
                   cout<<"Libro que desea eliminar:";
                   cin>>optionM;
                   user[optionM]=Person();
                   cout<<"Libro eliminado "<<endl;
                   break;
               case 5:
                   break;
           }


       }
       if(optionM==2){
           //Registro de libro

               cout<<"----Administrar Libros----"<<endl;
               cout<<"1.Registrar 2.Editar 3.Consultar informacion 4.Eliminar 5.Menu principal"<<endl;
               cout<<"Opcion:";
               cin>>optionM;

               switch (optionM) {


                   case 1:
                       books[accumulator]=registerF();
                       accumulatorU+=1;
                       break;
                   case 2:
                       cout<<"------Edicion de libro-------"<<endl;
                       cout<<"Libro que desea editar :";

                       cin>>optionM;
                       books[optionM].toString();
                       books[optionM]=registerF();
                       break;


                   case 3:
                       cout<<"------Datos-------"<<endl;
                       cout<<"Libro que desea ver sus datos :";

                       cin>>optionM;
                       books[optionM].toString();

                       break;
                   case 4:
                       cout<<"------Eliminar libro-------"<<endl;
                       cout<<"Libro que desea eliminar:";
                       cin>>optionM;
                       books[optionM]=Book();
                       cout<<"Libro eliminado "<<endl;
                       break;
                   case 5:
                       break;
               }
         if(optionM==3){
             cout<<"----Administrar prestamo----"<<endl;
             cout<<"1.Registrar 2.Editar 3.Consultar informacion  4.Menu principal"<<endl;
             cout<<"Opcion:";
             cin>>optionM;
             case 1:
                 loans[accumulatorL]=registerL();
             accumulatorL+=1;
             break;
             case 2:
                 cout<<"-----Devolver-------"<<endl;
             cout<<"Libro que desea editar :";

             cin>>optionM;
             books[optionM].toString();
             books[optionM]=registerF();
             break;


             case 3:
                 cout<<"------Datos-------"<<endl;
             cout<<"usuario :";

             cin>>optionM;
             books[optionM].toString();

             break;

             case 4:
                 break;
         }

       }
   }
    return 0;
}
