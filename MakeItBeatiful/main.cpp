#include <vector>
#include <iostream>

using namespace std;

void lista(void);
bool ugly(vector<int> &numeros);
void swapValues(vector<int> &nums, int i, int j);

int main()
{
    int t;
    cin>>t;

    if(1 <= t && t <= 2000){
        while(t--){
            lista();
        }
    }


    return 0;
}

void lista(void){
    int n , a;

    cin>>n;

    if( 2 <= n && n <= 50){
        vector<int>numeros;

        for(int i = 0; i < n; i++){
            cin>>a;
            if(1 <= a && a <= 100)  numeros.push_back(a);
            else return;
        }

        if(ugly(numeros)){
            cout<<"YES"<<endl;
            for(int i : numeros) cout<<i<<' ';
            cout<<endl;
        }

        else{
            cout<<"NO"<<endl;
            return;
        }
    }

    else return;

}

void swapValues(vector<int> &nums, int i, int j) {
  int res = nums[i];
  nums[i] = nums[j];
  nums[j] = res;
}

bool ugly(vector<int>&numeros){

    int contador = 0, suma = 0, mayor = 0, index1;

    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] > mayor) {
            index1 = i;
            mayor = numeros[i];
        }
    }

    swapValues(numeros, index1, 0);

    for(int i = 1; i < numeros.size(); i++){//1
        contador = numeros[i];
        for(int j = 0; j < i; j++){
            suma += numeros[j];
        }

        if(suma == contador) return false;
    }

    return true;
}
