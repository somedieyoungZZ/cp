#include<bits/stdc++.h>

using namespace std;

int max(int a, int b, int c, int d){
    int maxVal = max(max(a,b) , max(c,d));;
    return maxVal;

}

int main(){

    int a,b,c,d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << max(a,b,c,d) << endl;

    return 0;
}