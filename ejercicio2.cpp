#include<vector>
#include <iostream>

using namespace std;
int moda(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
  vector<int> Ans;
  int numer = 0;
  while(numer!=-1){ cout<<"ingrese un numero ";
      cin>>numer;
      Ans.push_back(numer);
 }
 Ans.pop_back();
 return Ans;
}
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:

int moda(vector<int> &lista) {
  int moda_ele;
  int repes = 0;
  for(int i=0;i<lista.size();i++){
    int s=0;
    for(int j=i;j<lista.size();j++){
      if(lista[i]==lista[j]){
        s++;
      }
      
    }
    if(s>repes){
      repes=s; 
      moda_ele = lista[i];
      }
  }
     /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    return moda_ele;
}
int main(){
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
