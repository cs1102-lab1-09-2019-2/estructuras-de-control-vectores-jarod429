/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo

 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo

 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111

 Continuar? y

 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.

 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
using namespace std;
void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);
void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
}
int sumar(int a,int b){
  int c;
  c=a+b; 
  return c;
}
int resta(int a,int b){
   int c;
  c=a-b; 
  return c;

}
int multiplicar(int a,int b){
   int c;
  c=a*b; 
  return c;

}
float dividir(int a,int b){
   int c;
  c=a/b; 
  return c;

}
int modulo(int a,int b){
   int c;
  c=a%b; 
  return c;

}
int main() {
  int a;
  int b;
  int opcion;
  mostrarMenu();
  cout<<"ingresar una opcion";
  cin>>opcion;
  switch(opcion){
    case 1:{
      cout<<"ingrese  dos números separados por un espacio";
      cin>>a;
      cin>>b;
      cout<<"Resultado:"<<sumar(a,b);
      break;
    }
    case 2:{
      cout<<"ingrese  dos números separados por un espacio";
      cin>>a;
      cin>>b;
      cout<<"Resultado:"<<resta(a,b);
      break;
    }
    case 3:{cout<<"ingrese  dos números separados por un espacio";
      cin>>a;
      cin>>b;
      cout<<"Resultado:"<<multiplicar(a,b);
      break;}
    case 4:{cout<<"ingrese  dos números separados por un espacio";
      cin>>a;
      cin>>b;
      cout<<"Resultado:"<<dividir(a,b);
      break;}
    case 5:{cout<<"ingrese  dos números separados por un espacio";
      cin>>a;
      cin>>b;
      cout<<"Resultado:"<<modulo(a,b);
      break;}
  }
    return 0;
}
