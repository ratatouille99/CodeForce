#include <iostream>

using namespace std;

int main()
{
    int w1, h1, w2, h2, res = 0;

    cin>>w1>>h1>>w2>>h2;

    res = 2*(h1+h2) + w1 + w2 + 4 + (w1-w2);

    cout <<res<< endl;

    return 0;
}

