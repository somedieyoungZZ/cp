    
/* 
    Dated - 14/09/2022
    Use simple || operator to find the solution
    Location BACE Jagatpura
    Hare Krishna
    - Prajwal Das
*/





#include<iostream>

using namespace std;

int T;

int main() {

    cin >> T;
    while(T--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        // R can be either 0 or 1
        // 0 is inside the limits  
        // 1 is outside the limits
        if(a == 1 || b == 1 || c == 1 || d == 1  ){
            cout << "Out" << endl;
        } else{
            cout << "In" << endl;
        }


    }

    return 0;
}