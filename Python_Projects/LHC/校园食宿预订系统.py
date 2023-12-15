# 某校园为方便学生订餐，推出食堂预定系统。食宿平台会在前一天提供菜单，学生在开饭时间前可订餐。
# 食堂每天会推出m个菜，每个菜有固定的菜价和总份数，售卖份数不能超过总份数。 
# 假设共有n个学生点餐，每个学生固定点3个菜，当点的菜售罄时, 学生就买不到这个菜了。 
# 请根据学生预定记录，给出食堂总的预定收入 
# 数据满足1 <= n <= 6000，3 <= m <= 6000，单品菜价不大于1000元，每个菜的配额不超过3000

# Input:
# 第一行两个整数n和m，代表有n个学生订餐，共有m个可选的菜
# 下面m行，每行三个元素，分别是菜名、售价和可提供量，保证菜名不重合，菜价为整数
# 下面n行，每行三个元素，表示这个学生点的三个菜的菜名

# Output:
# 一个整数，表示食堂的收入

n, m = map(int, input().split())

dish_list = []
price_list = []
quantity_list = []
demand_list = []
income = 0

for i in range(1, m + 1):
    dish, price, quantity = input().split()
    price = int(price)
    quantity = int(quantity)
    dish_list.append(dish)
    price_list.append(price)
    quantity_list.append(quantity)

demand_quantity_list = [0] * len(dish_list)


for i in range(1, n + 1):
    demand_list += input().split()

for item in demand_list:
    if item in dish_list:
        index = dish_list.index(item)
    else:
        continue
    if demand_quantity_list[index] == quantity_list[index]:
        continue
    else:
        demand_quantity_list[index] += 1
        income += price_list[index]

    
print(income)

# Python不支持直接给列表不存在项赋值，所以在定义列表的时候需要提前给好长度……有点像C语言中的数组。