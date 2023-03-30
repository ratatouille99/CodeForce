#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        if(n < k) cout<<"NO"<<endl;
        else{
            if(n % k == 0){
                cout<<"YES"<<endl;
                for(int i = 0; i < k; i++) cout<<n/k<<" ";
                cout<<endl;
            }
            else{
                int t1 = n-(k-1);
                int t2 = n -2*(k-1);

                if(t1 % 2 == 1 && t1 > 0){
                    cout<<"YES"<<endl;
                    for(int i = 0; i < k-1; i++) cout<<1<<" ";
                    cout<<t1<<endl;
                }
                else if(t2 % 2 == 0 && t2 > 1){
                    cout<<"YES"<<endl;
                    for(int i = 0; i < k-1; i++) cout<<2<<" ";
                    cout<<t2<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
