# 众所周知 ljc 是一名法外狂徒，经常尝试挑战未成年人保护法，警方决定对其进行抓捕，现在需要你收集证据来帮助对其定罪.
# 但 ljc 早有预警，他会故意把话反过来说(比如 hello world !  他会说  ! world hello )，所以你要收集 ljc 的发言并将"反话"转成正话.

# 输入格式:
# 每个测试用例的第一行包含一个长度为 n 的字符串 (1≤n≤1000)

# 输出格式:
# 对于每个测试用例，输出正确的话语

lst = input().split()
length = len(lst)
for i in range(length):
    print("{}".format(lst[length - i - 1]), end=" ")