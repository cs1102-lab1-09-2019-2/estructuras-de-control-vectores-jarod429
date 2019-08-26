#include<iostream>
#include<vector>
using namespace std;
int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
vector<int> Ans;
  int numer = 0;
  while(numer!=-1){ cout<<"ingrese un numero ";
      cin>>numer;
      Ans.push_back(numer);
 }
  Ans.pop_back();
  return Ans;}//Ingrese un numero positivo, escriba -1 si ya no quiere ingresar  mas numeros:
int mediana(vector<int> &lista) {
     int median=0;
    int n=lista.size();
    if(n%2==0){
      median=lista[n/2 -1] +lista[n/2];}
    else median=lista[(n-1)/2];/*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2
    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    return median;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
