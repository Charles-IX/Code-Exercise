# Frex 汇编小课堂开课啦！下面将为你介绍4种常见的汇编指令：
# add a,b 加法操作，将两个变量的值相加;
# sub a,b 减法操作，将两个变量的值相减;
# mov a,b 赋值操作，将一个变量的值赋给另一个变量;
# xor a,b 异或操作，将两个变量进行异或运算.
# 现在你已经初步了解了这些指令的基本操作，请你编写一段解析汇编指令的代码，并将对应指令的操作翻译出来并进行结果运算。最后将翻译结果全部输出。

# 输入格式:
# 第一行输入一个整数 n 代表测试用例的数量；
# 接下来 n 行，每行输入对应的汇编操作指令；
# 且 a、b 分别满足 ( 0 < a < 2^63 ) ( 0 < b < 2^63 ) ( 0 < a+b < 2^63 ) ( −2^63 < a−b < 2^63 ).

# 输出格式:
# 输出每个测试样例的翻译结果以及运算结果.

import re

n = int(input())
for _ in range(n):
    lst = re.split(r'[ ,]', input())
    op = lst[0]
    a = lst[1]
    b = lst[2]
    if op == 'add':
        ans = int(a) + int(b)
        print("{}+{}={}".format(a, b, ans))
    elif op == 'sub':
        ans = int(a) - int(b)
        print("{}-{}={}".format(a, b, ans))
    elif op == 'mov':
        print("{}={}".format(a, b))
    elif op == 'xor':
        ans = int(a) ^ int(b)
        print("{}^{}={}".format(a, b, ans))