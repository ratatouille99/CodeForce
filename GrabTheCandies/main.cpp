#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int par = 0, impar = 0;

        vector<int>candies(n);

        for(int i = 0; i < n; i++){
            cin>>candies[i];
            if(candies[i] % 2 == 0) par += candies[i];
            else impar += candies[i];
        }

        if(par > impar) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
