import math

x = eval(input())

y = math.sin(35) + (((math.e)**x - 15 * x) / (math.sqrt(x**4 + 1))) - math.log(7 * x, math.e)

print_y = round(y, 3)
text = "f({})={}"
print(text.format(x, print_y))