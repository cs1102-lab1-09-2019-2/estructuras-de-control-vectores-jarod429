/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>
using std::cout;

int main() {

  for(int i=2;i<8;i++){
    for(int j=1;j<8;j++){
      if(j<=i){cout<<j;}
      else cout<<"*";

    }
    cout<<"\n";
  }


    return 0;
}
