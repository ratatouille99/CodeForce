#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool binaryString(string word, int len);

int main()
{
    int t, tam;
    string word;

    cin>>t;

    while(t--){
        cin>>tam;
        cin>>word;

        if(binaryString(word, tam)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

bool binaryString(string word, int len){

    vector<char>rep;
    const char *cadena = word.c_str();

    if(len == 1) return true;

    for(int i = 0; i < len; i++){
        if(i % 2 == 1){
            rep.push_back(cadena[i]);
        }
    }

    for(int i = 0; i < len; i+=2){
        for(int j = 0; j < rep.size(); j++){
            if(cadena[i] == rep[j]){
                return false;
            }
        }
    }

    return true;
}
