# Vow 对故事情有独特的钟爱，他内心深处铭记着许多珍贵的故事。一天他突然发现他所记录的故事中有很多相似的部分,他想要知道有多少对相似的故事,请你设计一个程序帮帮他吧：
# 给你一个由 n 个整数组成的数组 a 。如果数组中的元素满足 i < j 且 aj − ai =j − i 说明这两个故事是相似的

# 输入格式:
# 第一行包含一个整数 t ( 1 ≤ t ≤ 10^4 )。然后是 t 个测试用例。
# 每个测试用例的第一行包含一个整数 n ( 1 ≤ n ≤ 2⋅10^5 )。
# 每个测试用例的第二行包含 n 个整数 a1, a2, …, an( 1 ≤ ai ≤ n) - 数组 a 。
# 保证所有测试用例的 n 之和不超过 2⋅10^5

# 输出格式:
# 输出数组中 索引 (i, j) 中有 i < j 且 aj − ai = j − i 的索引对的数量

t = int(input())
for _ in range(t):
    n = int(input())
    cp = 0
    lst = list(map(int, input().split()))
    for i in range(n - 1):
        for j in range(i+ 1, n):
            if lst[j] - lst[i] == j - i:
                cp += 1
    print(cp)