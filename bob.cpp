/* 
    Dated - 09/09/2022
    First Compettion Question Ever
    Location Bhakti Ashray Bace Jagatpura
    Hare Krishna
    - Prajwal Das
*/




#include<bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--) {
        int W,X,Y,Z;
        cin >> W >> X >> Y >> Z;
        
        int Loss = X - Y;
            // cout << Loss << endl;
            cout << W + Loss * Z << endl; 
    }


    return 0;
}
