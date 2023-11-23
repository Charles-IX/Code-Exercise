# 大家一起在学习单词时，会对学习的单词评分，评分越高，单词越难。现在每个人都对10个单词评分，不同的人可能对同一个单词评分，求最简单的单词。
# 最简单的单词必须被评过分。如果单词被多个人评分，它的综合评分是这些评分的平均数，最后求的是综合评分最小的单词。不会出现多个最简单单词。
# Input: 第一行T，表示有T组数据。对于每组数据：第一行N，表示有N个人。接下来输入N*10行，每一行有一个单词，一个整数（表示评分），由空格隔开。
# Output: 对于每组数据，输出最简单的单词。

t = int(input())
dict_list = []

for i in range(t):
    dict = {}
    n = int(input())
    for i in range(10 * n):
        word, point_str = input().split()
        point = int(point_str)
        for key, value in dict.items():
            if key == word:
                point = (int(point_str) + value) / 2
        dict[word] = point
    dict_list.append(dict)

for dict in dict_list:
    min_value = min(dict.values())
    min_key = [key for key, value in dict.items() if value == min_value][0]
    print(min_key)
