t = int(input())
invalid = 0
array = [''] * 9
row = [''] * 9
block = []
for r in range(t):
    invalid = 0
    for i in range(9):
        array[i] = ['']*9
    for i in range(9):
        array[i] = input().split()
        for j in range(9):
            array[i][j] = int(array[i][j])

    for i in range(9):
        for k in range(1,10):
            if array[i].count(k) != 1:
                invalid = 1
                break
        for j in range(9):
            row.append(array[j][i])
        for k in range(1,10):
            if row.count(k) != 1:
                invalid = 1
                break
        row = [''] * 9

    for x in range(9):
        if x == 0:
            m = 0
            n = 0
        elif x == 1:
            m = 0
            n = 3
        elif x == 2:
            m = 0
            n = 6
        elif x == 3:
            m = 3
            n = 0
        elif x == 4:
            m = 3
            n = 3
        elif x == 5:
            m = 3
            n = 6
        elif x == 6:
            m = 6
            n = 0
        elif x == 7:
            m = 6
            n = 3
        else:
            m = 6
            n = 6
        for i in range(m,m+3):
            for j in range(n,n+3):
                block.append(array[i][j])
        for k in range(1,10):
            if block.count(k) != 1:
                invalid = 1
                break
        block = []

    if invalid == 1:
        print("No")
    else:
        print("Yes")
