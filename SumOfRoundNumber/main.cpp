#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int n, t, k = 0, res = 0, pot, temp = 0;

    cin>>t;
    while(t != 0){
        cin>>n;

        string s = to_string(n);

        for(int i = 0; i < s.length(); i++){
            if(s[i] != '0') k++;
        }

        cout<<k<<endl;
        res = 0;

        for(int i = 1; i <= 5; i++){
            pot = pow(10,i);
            res = n % pot;
            if(res != 0 && res != temp){
              n = n - res;
              cout<<res<<" ";
            }
            temp = res;
        }

        cout<<'\n';

        k = 0;
        t--;
    }
}
