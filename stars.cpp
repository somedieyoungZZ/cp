#include<bits/stdc++.h>

using namespace std;


int main () {

    int n; // take our input for number of lines to be printed or no of stars to be printed
    cin >> n;

    for(int i=1;i<= n; ++i) { /* First we make a "for" loop for printing lines upto our input or "n" */
        for(int j=1; j<=i; ++j) { // then we make a nested loop for printing stars equal to our line number
            cout << "*" << endl ; // dont use endl here as it will print all stars single in new line
        }
    cout << endl; // very imp otherwise stars will be printed in single line
    }


    return 0;
}
