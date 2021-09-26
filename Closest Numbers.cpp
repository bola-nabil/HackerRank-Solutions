#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int > v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int max = 100000000;
    int id = 0;

    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) < max) {
            max = abs(v[i] - v[i - 1]); id = i - 1;
        }
    }

    for (int i = id; i < n - 1; i++)
    {
        if (abs(v[i + 1] - v[i]) == max) {
            cout << v[i] << " " << v[i + 1] << " ";
        }
    }
    return 0;
}