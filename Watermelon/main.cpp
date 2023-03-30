#include <iostream>

using namespace std;

int par(int n);
bool watermelon(int n);

int main()
{
    int n;
    cin>>n;

    if(1 <= n && n <= 100){
        if(2 < n && (n-2) % 2 == 0) cout<<"YES";
        else cout<<"NO";
    }

    return 0;
}
