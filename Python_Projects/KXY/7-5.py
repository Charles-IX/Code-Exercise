x = eval(input())

if x < -4 :
    y = x + 9
elif x < 4 :
    y = x^2 + 2 * x + 1
else :
    y = 2 * x - 15

text = "y={}"
print(text.format(y))
# 使用format外加占位符的方式可以确定其他类型在字符串中的打印位置。