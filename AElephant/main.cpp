#include <iostream>

using namespace std;

int pasos(int&);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int destino = 0;
    cin>>destino;

    cout<<pasos(destino);

    return 0;
}

int pasos(int &destino){
    int i = 5;
    int contador = 0;

    if(destino <= 5) return contador = 1;

    while(destino != 0){
        if(destino <= i) i = destino;

        destino = destino - i;
        contador++;
    }

    return contador;
}
