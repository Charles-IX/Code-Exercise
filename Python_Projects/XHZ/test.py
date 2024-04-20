lst = []
sum = 0
higher = 0
while True:
    n = int(input())
    if n > 0:
        lst.append(n)
    elif n < 0:
        continue
    else:
        break
for num in lst:
    sum += num
avg = sum / len(lst)
for num in lst:
    if num > avg:
        higher += 1
print("输入的所有正整数的平均值：" + str(avg))
print("高于平均值的正整数的个数：" + str(higher))