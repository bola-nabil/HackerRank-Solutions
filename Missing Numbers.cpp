#include <iostream>
using namespace std;


int main() 
{
    int fr[100001];
    for (int i = 1; i <= 100000; i++) {
        fr[i] = 0;
    }

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        fr[a]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        fr[b]--;
    }

    for (int i = 1; i <= 10000; i++) {
        if (fr[i] != 0) {
            cout << i << " ";
        }
    }
    return 0;
}