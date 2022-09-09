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

    int N,M,X; // length of the plate, width of the plate, and the cost of frame per cm
    cin >> N >> M >> X;

    int TotalLengthOfFrame = 2 * N + 2 * M;
    cout << TotalLengthOfFrame * X << endl;

    }


    return 0;
}