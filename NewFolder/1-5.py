# 经典之咖波做数独

# 输入格式:
# 先输入一行一个正整数 T (1≤T≤200)，表示查询的次数。
# 每次查询中，输入一个 9×9 的矩阵 A，表示咖波的作答。

# 输出格式:
# 对于每次查询，如果咖波的作答正确，则输出 Yes，否则输出 No。
# 你可以以任何大小写输出答案中的每个字母。例如，yEs, yes, Yes 和 YES 都将视为肯定的回答。

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
        m = x // 3 * 3
        n = x % 3 * 3
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
