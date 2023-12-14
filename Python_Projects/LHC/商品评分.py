n = int(input())

for i in range(n):
    m = int(input())
    items = ['', '', '']
    lst = []
    rate_average = []
    reviews = []
    
    for i in range(m):
        items = ['', '', '']
        rate = input().split()
        items[0] = rate[0]
        rate.remove(rate[0])
        total = sum(map(int, rate))
        average = total / len(rate)
        items[1] = average
        items[2] = len(rate)
        lst.append(items)

# 调用sort函数对列表进行排序，排序规则为：按照评分平均值从高到低排序，如果评分平均值相同，按照评分个数从高到低排序
lst.sort(key = lambda x:(-x[1], -x[2]))
for item in lst:
    print(item[0])