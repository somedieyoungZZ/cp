#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string lowercase[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n > 9){
        cout << lowercase[0];
    } else {
        cout << lowercase[n];
    }
    if(n <=1){
        // throw std::invalid_argument("AddPositiveIntegers arguments must be positive");
        throw invalid_argument("Add positive numbers only");
    }
    return 0;
}
