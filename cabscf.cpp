#include<bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--){
        int X,Y;
        cin >> X >> Y;

        if(X > Y){
            cout << "Second" << endl;
        } else if(X < Y) {
            cout << "First" << endl;
        } else if(X==Y) {
            cout << "Any" << endl;
        }

    }


    return 0;
}