#include<bits/stdc++.h>

using namespace std;


int main () {

    string a;
    string b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    // this is important
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout << a << " " << b << endl;


    return 0;
}
