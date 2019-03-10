#include <iostream>

using namespace std;

struct thing{
    long long left;
    long long right;
};
int compare(const void * a,const void *b)
{
    struct thing *ia =(struct thing*)a;
    struct thing *ib = (struct thing*)b;
    return ia->right - ib->right;
} 



int main()
{
    long long n , k ;
    cin >> n >> k ;

    thing leg[k];
    for(long long i = 0; i < k; i++)
    {
        long long temp1,temp2;
        cin >> temp1 >> temp2;
        leg[i] = {temp1,temp2};
    }
    qsort(leg, k, sizeof(struct thing), compare);

    long long player[n];
    for(long long i = 0; i < n; i++)
    {
        player[i] = i;
    }

    for(long long i = k-1; i >-1; i--)
    {
        long long temp1, temp2;
        temp1 = player[leg[i].left];

        temp2 = player[leg[i].left+1];
        player[leg[i].left]=temp2;
        player[leg[i].left+1]=temp1;
    }

    for(long long i = 0; i < n-1; i++)
    {
        cout << player[i]<< " ";
    }

    cout << player[n-1];
    return 0;  
}