#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

string binaryString(string s);

int main()
{
    int t;
    cin>>t;

     while(t--){
        string word;
        int n;

        cin>>n>>word;

        string respuesta = binaryString(word);

        cout<<respuesta<<endl;
     }

    return 0;
}

string binaryString(string s){
    unordered_set<char>odd, even;
    int size = s.length();

    for(int i = 0; i < size; i++){
        char c = s[i];

        if(i % 2 == 0){
            if(even.count(c)) return "NO";

            odd.insert(c);

        }

        else{
            if(odd.count(c)) return "NO";
            even.insert(c);
        }
    }

    return "YES";
}
