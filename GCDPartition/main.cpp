//PROGRAMA DEFINIDO EN C++17
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

typedef long long ll;

int solve();

int main()
{
    ll t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}

int solve(){
    int n;
    cin>>n;

    vector<int>v(n);
    vector<ll>prefix(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];

        if(i == 0) prefix[i] = v[i];
        else prefix[i] = prefix[i-1] + v[i];
    }

    ll ans = 0;

    for(ll i = 0; i < n; i++) cout<<prefix[i]<<' ';
    for(int i = 1; i < n; i++) ans = max(ans,gcd(prefix[i-1],prefix[n-1]-prefix[i-1]));

    cout<<endl<<ans<<endl;

    return 0;

}
