#include <iostream>

using namespace std;

int main() {
    long long n,m;

    while(cin >> n >> m){
    
        if (n == 0 && m == 0){
            break;
        }
        long long jack[n];
        long long jill[m];

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            jack[i] = temp;
        }

        for (long long i = 0; i < m; i++) {
            long long temp;
            cin >> temp;
            jill[i] = temp;
        }
        long long i=0,j=0,c=0;
        while ((i<n) || (j<m))
        {
            if(jack[i] == jill[j]){
                c+=1;
                i +=1;
                j +=1;
                
            } else if ( jack[i] > jill[j]) { 
                j+=1;

               
            } else {
                i+=1;

                
            }
        }
        cout << c;
    }

    return 0;
}