# 实验室里Frex大佬很爱吃甜品。有一天，他买了一个甜品盲盒，盲盒有x个小盒子（依次编号为1、2、3……x），所有小盒子围成一圈
# （第一个盒子和最后一个盒子相连，1号和2号相连，2号和3号相连，……，x号与1号相连），每个小盒子里都有一个甜品，每个甜品都有一个对应的幸福值。
# 由于需要控制每天糖分的摄入量，他给自己设下规矩：不能选择相邻的甜品。请你帮他计算一下他能获得的最大幸福值。

# 输入格式:
# 输入两行
# 第一行为x（小盒子数量，1 <= x <= 100）
# 第二行为x个值，每个值分别代表每个小盒子中甜品可获得的幸福值。（0 <= 幸福值 <= 1000）

# 输出格式:
# 输出可获得的最大幸福值

def max_happiness(happiness):
    n = len(happiness)
    if n == 0:
        return 0
    if n == 1:
        return happiness
    
    # 取第一个
    dp_1 = [0] * n
    dp_1[0] = happiness[0]
    dp_1[1] = max(happiness[0], happiness[1])
    for i in range(2, n - 1):
        dp_1[i] = max(dp_1[i-1], dp_1[i-2] + happiness[i])

    # 取最后一个
    dp_2 = [0] * n
    dp_2[0] = 0
    dp_2[1] = happiness[1]
    for i in range(2, n):
        dp_2[i] = max(dp_2[i-1], dp_2[i-2] + happiness[i])
    
    return max(dp_1[-1], dp_1[-2], dp_2[-1], dp_2[-2])

x = int(input())
happiness = list(map(int, input().split()))
ans = max_happiness(happiness)
print(ans)
