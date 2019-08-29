/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30

 */
#include <iostream>
using namespace std;
int main(){
int a;
int b;
int c;
cout<<"ingrese tres numeros separados por un espacio: ";
cin>>a;
cin>>b;
cin>>c;
if(a>b&a>c){
  cout<<"el mayor valor:"<<a;
}
else if (b>a&b>c){
  cout<<"el mayor valor:"<<b;

}
else if (c>a&c>b){
  cout<<"el mayor valor:"<<c;

}
}
