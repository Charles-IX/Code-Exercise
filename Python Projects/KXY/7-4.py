import math

x = eval(input())

y = math.sin(math.radians(35)) + ((math.exp(x) - 15 * x) / (math.sqrt(x**4 + 1))) - math.log(7 * x)
# 弧度制和角度制不能混着用，如果直接写 math.sin(35) 就会出现最终答案总是和标准答案差1.几的铸币错误
# 同时，写 math.e**x 也非常粪，不如math.exp(x)，不过肯定比 math.e^x 这种脑残写法好不少（最后这种会报 unsupported operand type(s) for : 'float' and 'int'）

print_y = round(y, 3)
text = "f({})={}"
print(text.format(x, print_y))