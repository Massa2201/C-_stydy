#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, price, N;
    cin >> p;
    string text;

    // pattern01
    if (p == 1)
    {
        cin >> price;
    }

    //pattern02
    else if (p == 2)
    {
        cin >> text >> price;
    }

    cin >> N;

    cout << text << "!" << endl;
    cout << price * N << endl;
}