'''for i in sys.stdin:
    ab = i.split()
    a = int(ab[0])
    b = int(ab[1])


long long n;
    long long p;
    long long k;
    cin >>n >>p >>k;
    long long temp;
    long long event[n+1];'''

import sys

ln1 = sys.stdin.readline().split()
n = int(ln1[0])
p = int(ln1[1])
k = int(ln1[2])
#print(ln1)


event = []
ln2 = sys.stdin.readline().split()
for i in ln2:
    event.append(int(i))

event.append(k)

simtime = 0
a = 0
cur = 0
next = 0
dif=0
while cur < k:
    dif = event[next]- cur
    simtime += (dif*((100+(next)*p)/100.0))
    cur = event[next]
    next += 1

print(simtime)
