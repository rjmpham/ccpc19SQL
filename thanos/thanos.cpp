#include <iostream>

using namespace std;

int main() {
    long long  n;
    cin >> n;
    long long  worlds[n];

    for (long long  i = 0; i < n; i++) {
        long long  tmp;
        cin >> tmp;
        worlds[i] = tmp; 
    }

    long long  lives = 0;
    for (long long  i = n-1; i > 0; i--) {
        if (worlds[i] <= worlds[i-1]) {
            long long  diff = worlds[i-1] - worlds[i] + 1;
            lives += diff;
            worlds[i-1] -= diff;
        }
        if (worlds[i-1] < 0) {
            cout << 1;
            return 0;
        }
    }

    cout << lives;

    return 0;
}