#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;

    while(t--){
        ll n, resultado = 1;

        cin>>n;

        vector<ll>nums(n);

        for(ll i = 0; i < n; i++){
            cin>>nums[i];
            resultado *= nums[i];
        }

        resultado += n - 1;

        cout<<resultado*2022<<endl;
    }

    return 0;
}

