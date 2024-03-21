# 将一个节点数为 size 链表 m 位置到 n 位置之间的区间反转，要求时间复杂度O(n)，空间复杂度O(1)。

# 输入格式:
# 输入三行（多组实例测试）
# 第一行size（表示链表长度，0<size<=1000 ）
# 第二行输入size个数，为每个节点对应值val（|val|<=1000）
# 第三行为m，n（为反转区间的起止位置，0<m<=n<=size）

# 输出格式:
# 输出若干行，每行为每次区间反转后的结果

while True:
    size = int(input())
    lst = list(map(int, input().split()))
    m, n = map(int, input().split())
    lst[m-1:n] = lst[m-1:n][::-1]
    print(' '.join(map(str, lst)))
