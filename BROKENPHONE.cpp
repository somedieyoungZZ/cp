#include<bits/stdc++.h>


using namespace std;

int main() {

    int T;
    cin >> T;
    int CostofRepair,CostofNew;

    while(T--) {

        cin >> CostofRepair >> CostofNew;
        if(CostofRepair > CostofNew) {
            cout << "NEW PHONE" << endl;
        } else if(CostofRepair < CostofNew) {
            cout << "REPAIR" << endl;
        } else if(CostofRepair = CostofNew){
            cout << "ANY" << endl;
        }

    }


    return 0;
}