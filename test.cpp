	
/* 
    Dated - 12/09/2022
    Good Question with new method used to find the solution
    Location JECRC UNIveristy
    Hare Krishna
    - Prajwal Das
*/




	#include<bits/stdc++.h>

	using namespace std;

	#define ll long long

	void Speed(){
		ll a,x,b,y;
		cin >> a >> x >> b >> y;

		float p = (float)a/x;
		float q =  (float)b/y;

		if (p == q){
			cout << "Equal" << endl;
		} else if( p > q) {
			cout << "Alice" << endl;
		} else if( p < q){
			cout << "Bob" << endl;
		}

		return;
	}

	int main() {

		int T;
		cin >> T;

		while(T--) {
			Speed();
		}

		return 0;
	}