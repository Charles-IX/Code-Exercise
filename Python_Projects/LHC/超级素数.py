# 超级素数是指大于1的自然数，它的任意一个前缀都是素数。
# 如37是一个超级素数，因为37的所有前缀3和37都是素数。 同样地，2333也是一个超级素数，因为2333的所有前缀2、23、233、2333都是素数。
# 而41不是超级素数，因为41的前缀4不是素数。 同样的241也不是超级素数，因为241的前缀24不是素数。11也不是超级素数，因为11的前缀1不是素数。
# 现在给定一个大于1的正整数，判断该数字是否是超级素数，如果是超级素数，输出YES，否则输出NO。

import math

# 读入整数n
n_str = input()
n = int(n_str)

# 判断是否超级素数
length = len(n_str)
valid = 1

if n > 1:
   for i in range(1, length + 1):
        clip_str = n_str[0 : i]
        clip = int(clip_str)
        if clip > 1:
           for k in range(2, int(math.sqrt(clip)) + 1):
                if clip % k == 0:
                    valid = 0
                    break
        else:
            valid = 0
else:
    valid = 0

if valid == 1:
    print("YES")
else:
    print("NO")