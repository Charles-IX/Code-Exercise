#读取奥特曼和怪兽数据
m = input()
n = int(input())
o = int(input())

if m == "alpha":
    power = 2
elif m == "beta":
    power = 1
elif m == "gamma":
    power = 3
elif m == "delta":
    power = 1
if n == 1 and m != "delta":
    power += 1
elif n == 1 and m == "delta":
    power = 6

if power >= o:
    print("YES")
else:
    print("NO")