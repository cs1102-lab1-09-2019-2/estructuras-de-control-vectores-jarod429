#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() { vector<int> Ans;
  int numer = 0;
  while(numer!=-1){ cout<<"ingrese un numero ";
      cin>>numer;
      Ans.push_back(numer);
 }
 Ans.pop_back();
 return Ans;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

float promedio(vector<int> &lista) {
    double prom=0;
    int sum=0;
    int cant=lista.size();
    for(int i=0;i<=cant;i++ ){
      sum+=lista[i];
    }
    prom=sum/cant;
    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
    return prom;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}

