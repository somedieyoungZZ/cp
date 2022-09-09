#include<bits/stdc++.h>

using namespace std;

int main() {

    int X = 4;
    int Y = 2;
    int Z = 0;

    int T;
    cin >> T;

    while(T--){

    int RTP,Audit,NonRTP;

    cin >> RTP >> Audit >> NonRTP ;
    cout << RTP * X + Audit * Y + NonRTP * Z << endl;

    }
    return 0;
}