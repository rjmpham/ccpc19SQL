import sys

ln1 = sys.stdin.readline().split()
numChars = ln1[0]

b = sys.stdin.readline()

v = [0, 0, 0, 0]

bigNum = 10**9 + 7
for ch in b.strip():
    cint = int(ch)
    newV = v.copy()
    if cint == 0:
        newV[0] = v[0] * 2 + 1
        newV[1] = v[1] * 2
        newV[2] = v[2] * 2
        newV[3] = v[3] * 2
    elif (cint % 3) == 0:
        newV[0] = v[0]
        newV[1] = v[1] * 2
        newV[2] = v[2] * 2
        newV[3] = v[3] * 2 + v[0] + 1
    elif (cint % 3) == 1:
        newV[0] = v[0]
        newV[1] = 1 + v[0] + v[3]
        newV[2] = v[2]
        newV[3] = v[2] + v[3]
    elif (cint % 3) == 2:
        newV[0] = v[0]
        newV[2] = 1 + v[0] + v[3]
        newV[1] = v[1]
        newV[3] = v[1] + v[3]
    v = newV
    v[0] = v[0] % bigNum
    v[1] = v[1] % bigNum
    v[2] = v[2] % bigNum
    v[3] = v[3] % bigNum
print(v[3])
