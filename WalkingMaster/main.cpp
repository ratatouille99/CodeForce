#include <iostream>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--){
        int a, b, c, d;
        int pasos = 0;

        cin>>a>>b>>c>>d;

        if(b > d){
            cout<<-1<<endl;
        }

        else{
            pasos += abs(b - d);
            a += pasos;

            if(a < c) cout<<-1<<endl;

            else{
                pasos += abs(a - c);
                cout<<pasos<<endl;
            }
        }

    }

    return 0;
}
