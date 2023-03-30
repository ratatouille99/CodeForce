#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int>nums(n);
        ll suma = 0;

        for(int i = 0; i < n; i++){
            cin>>nums[i];
            suma += nums[i];
        }

        bool consecutivo = false, Nconsecutivo = false;

        for(int i = 0; i < n; i++){
            if(nums[i] == -1 && nums[i+1] == -1 && i <= n - 2) consecutivo = true;
            if(nums[i] == -1) Nconsecutivo = true;
        }

        if(consecutivo) suma += 4;
        if(!Nconsecutivo) suma -= 4;

        cout<<suma<<endl;
    }

    return 0;
}

