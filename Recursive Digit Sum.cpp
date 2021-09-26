#include <iostream>
#include <string>
using namespace std;

int  digit_sum(long long n) {
    if (n < 10)
        return n;

    int newN = 0;
    while (n) {
        newN += n % 10;
        n /= 10;
    }
    return digit_sum(newN);
}


int main() {

    string n; int k; long long p = 0;
    cin >> n >> k;
    for (int i = 0; i < n.size(); i++) {
        p += n[i] - '0';
    }
    p *= k;
    cout << digit_sum(p) << endl;
    return 0;
}