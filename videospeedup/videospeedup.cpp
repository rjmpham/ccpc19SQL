#include <iostream>

using namespace std;

int main()
{   long long n;
    long long p;
    long long k;
    cin >>n >>p >>k;
    long long temp;
    long long event[n+1];


    for(int i = 0 ; i <n ; i++)
    {
        cin >> temp;
        event[i]=temp; 
    }
    event[n] = k;

    long double simtime;
    long double a ;
    long long cur = 0;
    long long next = 0;
    long long dif=0;
    while(cur < k)
    {   
        dif = event[next]- cur;
        simtime += (dif*((100+(next)*p)/100.0));
        cur = event[next];
        next++;
    }
    cout << simtime;
    return 0;
}