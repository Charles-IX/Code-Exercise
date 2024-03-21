# 如果一个数字从左到右或从右到左读时都是正常的，我们就说它是回文数。例如，数字 75457 是一个回文。
# 当然，该属性取决于数字表示的基础。数字 17 不是 10 进制的回文，但它在 2 进制 (10001) 中的表示是回文。
# 该问题的目标是验证一组给定数字是否是从 2 到 16 的任意基数下的回文。

# 输入格式:
# 输入包含几个整数。每个数字 0<n<50000 都以十进制形式在单独的行中给出。输入以零结束。

# 输出格式:
# 您的程序必须打印消息 Number i is palindrom in basis...，其中 i 是给定数字，后跟数字表示形式是回文的基础。
# 如果该数字在 2 进制到 16 进制 之间的任何基础上都不是回文，则您的程序必须打印消息 Number i is not a palindrom

def decToAny(decimal: int, x: int):
    remainder = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']
    res = ""
    while decimal:
        res = remainder[decimal % x] + res
        decimal //= x
    return res

while True:
    n = int(input())
    if n == 0:
        break
    else:
        lst = []
        for i in range(2, 17):
            ans = decToAny(n, i)
            ans_str = str(ans)
            for j in range(len(ans_str) // 2 + 1):
                if ans_str[j] != ans_str[-(j+1)]:
                    flag = False
                    break
                else:
                    flag = True
            if flag:
                lst.append(i)
        if len(lst) == 0:
            print("Number {} is not a palindrom".format(n))
        else:
            print("Number {} is palindrom in basis".format(n), end=" ")
            length = len(lst)
            for m in range(length):
                if m != length - 1:
                    print("{}".format(lst[m]), end=" ")
                else:
                    print("{}".format(lst[m]))