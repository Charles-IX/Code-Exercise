n = int(input())

mp = [['#']*(n*5+1) for _ in range(3*n+1)]

def fun(x, y, op):
    for i in range(2):
        for j in range(4):
            mp[x+i][y+j] = op

for i in range(n):
    for j in range(n):
        if (i+j) & 1:
            fun(1+i*3, 1+j*5, '*')
        else:
            fun(1+i*3, 1+j*5, '.')

for i in range(3*n+1):
    print(''.join(mp[i]))