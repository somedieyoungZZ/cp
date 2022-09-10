#include<bits/stdc++.h>


using namespace std;


/*int SpeedFormula(int AliceDist, int AliceTime, int BobDist, int BobTime){
	Formula1 = AliceDist / AliceTime;
	Formula2 = BobDist / BobTime;
	return 0;
} */

int main() {

	int T;
	cin >> T;

	while(T--) {

		int AliceDist,AliceTime,BobDist,BobTime;
		cin >> AliceDist >> AliceTime >> BobDist >> BobTime;
		
		int AliceSpeed = AliceDist / AliceTime;
		int BobSpeed = BobDist / BobTime;
		if(AliceSpeed > BobSpeed) {
			cout << "Alice" << endl;
		} else if(AliceSpeed < BobSpeed) {
			cout << "Bob" << endl;
		} else if(AliceSpeed = BobSpeed) {
			cout << "Equal"<< endl;
		}

	}

	return 0;
}