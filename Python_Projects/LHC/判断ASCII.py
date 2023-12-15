# 标准ASCII中，其二进制最高位(b7)常用作奇偶校验位。所谓奇偶校验，是指在编码传送过程中用来检验是否出现错误的一种方法，一般分奇校验和偶校验两种。
# 奇校验规定：正确的一个字节编码中1的个数必须是奇数，若非奇数，则在最高位b7添1。偶校验规定：正确的一个字节编码中1的个数必须是偶数，若非偶数，则在最高位b7添1。
# 你的任务是编写程序判断输入的数值n是否是ASCII编码值，如果是，按整数m指示的奇偶校验的规定，这里用m=1代表奇校验，m=0代表偶校验，输出带奇偶校验的ASCII码的二进制形式（从左到右分别为b7~b0位），每一位按"%2d"格式输出；
# 如果不是ASCII码，输出“is not ASCII!”。

# 输入
# 一个整数n和一个整数m,这里用m=1代表奇校验，m=0代表偶校验。

# 输出
# 输出带奇偶校验的ASCII码的二进制形式（从左到右分别为b7~b0位），每一位按"%2d"格式输出；如果不是ASCII码，输出“is not ASCII!”

# 样例输入
# 220 1
# 127 1
# 127 0

# 样例输出
# is not ASCII!
#  0 1 1 1 1 1 1 1
#  1 1 1 1 1 1 1 1

binary_list = []
def is_ASCII(n):
    if n < 0 or n > 127:
        return False
    else:
        return True

n, m = map(int, input().split())
if is_ASCII(n):
    binary = bin(n)[2:]
    for bit in range(len(binary)):
        binary_list.append(int(binary[bit]))
    if m == 1:
        if binary_list.count(1) % 2 == 0:
            binary_list.insert(0, 1)
        else:
            binary_list.insert(0, 0)
    else:
        if binary_list.count(1) % 2 == 1:
            binary_list.insert(0, 1)
        else:
            binary_list.insert(0, 0)
    for bit in binary_list:
        print("%2d" % bit, end="")
else:
    print("is not ASCII!")
