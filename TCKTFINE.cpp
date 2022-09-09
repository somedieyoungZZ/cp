#include<bits/stdc++.h>


using namespace std;


int main() {

    int T;
    cin >> T;

    int Fee,NosPass,TicketsCol;


    while(T--) {

    cin >> Fee >> NosPass >> TicketsCol;
    int PassWithoutTicket = NosPass - TicketsCol;
    cout << Fee * PassWithoutTicket << endl;

    }



    return 0;
}