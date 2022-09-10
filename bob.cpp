#include<bits/stdc++.h>


using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--) {

        int CurrentAccBal,Deposit,BankCharge,NosMonths;
        cin >> CurrentAccBal >> Deposit >> BankCharge >> NosMonths;

        if(Deposit > BankCharge) {

        int EndofMonth1 = Deposit - BankCharge;
        cout << EndofMonth1 << endl;
        int FinalAmt = CurrentAccBal + EndofMonth1 ;
        cout << FinalAmt;
        // cout << FinalAmt * NosMonths << endl;

        } else (Deposit < BankCharge); {

         int EndofMonth2 = Deposit - BankCharge; 
         cout << EndofMonth2 << endl;
         int FinalAmt = CurrentAccBal - EndofMonth2 ;
         cout << FinalAmt << endl;
        // cout << FinalAmt * NosMonths << endl;
        }

        
    }


    return  0;
}