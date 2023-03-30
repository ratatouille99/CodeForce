#include <iostream>

using namespace std;

int main()
{
    long long int n = 0;
    int k, t;
    int res = 0;

    cin>>t;
    while(t){
        cin>>n>>k;

        if(k >= n){
            if(k == n){
                cout<<"YES\n";
                for(int j = 1; j <= n; j++){
                    cout<<n/k<<" ";
                }
            }

            else{
                cout<<"NO";
            }
            break;
        }

        else{
            if(n % k == 0){
                res = k;
                while(res){
                    cout<<n/k<<" ";
                    res--;
                }
            }
            else{
                int lista[k] = {0}, i = 0;
                long long int ini = (n/k) + (n%k);
                res = ini % 2;
                lista[i] = ini;

                for(int j = 1; j < k; j++){
                    lista[j] = n/k;
                }

                for(int j = 0; j < k; j++){

                }
            }
            break;
        }
    }

    return 0;
}
