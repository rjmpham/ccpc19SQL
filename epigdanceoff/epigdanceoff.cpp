#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >>m;

    char dance[n][m];

    string var;
    for( int i = 0 ; i < n; i++){
        cin >> var;
        for( int j = 0 ; j < m; j++){
            dance[i][j] = var[j];
        }
    }
    int c=0,moves=1;
    for( int i = 0 ; i < m; i++){
        for( int j = 0 ; j < n; j++){
            if(dance[j][i]=='_'){
                c++;
            }
        }
        if(c==n){
            moves++;
        }
        c=0;
    }

    cout << moves;
    return 0;
}