/*The first input line contains a single integer n (1<=n<=1000) — the number of problems in the contest.
Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line
equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows
Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by
spaces.*/

#include <map>
#include <iostream>

using namespace std;

int contest(bool *lista);

int main()
{
    int n, suma = 0;
    bool lista[3] = {0};

    cin>>n;

    while(n--){
        cin>>lista[0];
        cin>>lista[1];
        cin>>lista[2];
        suma += contest(lista);
    }
    cout<<suma;

    return 0;
}

int contest(bool *lista){
    int contador = 0;

    for(int i = 0; i < 3; i++){
        if(lista[i]) contador++;
    }

    if(contador >= 2) return 1;

    return 0;
}
