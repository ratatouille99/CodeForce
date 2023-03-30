#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;

    if(1 <= t && t <= 100){
        while(t--){
        string palabra;
        string otro;
        cin>>palabra;

            if(1 <= palabra.length() && palabra.length() <= 100){
                if(1 <= palabra.length() && palabra.length() <= 10) cout<<palabra<<endl;

                else if(palabra.length() > 10){
                    int tamano = palabra.length() - 2;
                    otro = palabra[0] + to_string(tamano) + palabra[palabra.length() - 1];
                    cout<<otro<<endl;
                }
            }

            else break;

        }
    }


    return 0;
}
