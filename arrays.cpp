#include <bits/stdc++.h>

using namespace std;


int main() {

	int N;
	cin >> N;

	int list[N];

	for(int i = 0; i < N; ++i){
		cin >> list[i];
		
	}

	for(int i = N -1; i>=0; i--){
		cout << list[i] << " ";
	}

	return 0;
}