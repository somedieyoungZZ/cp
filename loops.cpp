#include<bits/stdc++.h>


using namespace std;

int main() {
    int i = 1 ;
    while(i <= 10) {
            cout << i << endl;
            ++i;
    }
    cout << "now for loop" << endl;
    
    for(int x = 10; x<=50; x++) { // variable used here x is declared in scope in the for loop and is not wasted like the 
            //above  loop where we declared variable called i and cant give it a new value again
        cout << x << endl;
    }

    return 0;
}
