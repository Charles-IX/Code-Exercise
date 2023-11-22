# 6-3-2-whatever.py
# 随便套餐
import random

# 随便套餐包括1个主食，1个饮料和指定数量的热菜（默认值1）

def whatever(count=1):
    global order
    menu = {
        "主食":["小面", "担担面", "牛肉粉", "米饭"],
        "热菜":["毛血旺", "酸菜鱼", "口水鸡", "烤鱼",
            "小龙虾", "水煮牛肉", "泡椒牛蛙", "辣子鸡"],
        "饮料":["气泡水", "椰奶", "听可乐", "扎啤"]
    }
    # random.sample是从列表中任意选出指定数量元素，返回一个列表
    order = random.sample(menu["热菜"], count)
    order.append(random.choice(menu["主食"]))
    order.append(random.choice(menu["饮料"]))
    return order



def price(item):
    menu = {
        "小面":10, "担担面":12,"牛肉粉":16, "米饭":2,
        "毛血旺":48, "酸菜鱼":32, "口水鸡":26, "烤鱼":68,
            "小龙虾":38, "水煮牛肉":32, "泡椒牛蛙":39, "辣子鸡":32,
        "气泡水":8, "椰奶":6, "听可乐":5, "扎啤":20
     }
    total=0
    for items in item:
              
        total+=menu[items]
    return total


print("随便套餐！")
print("小王点了", whatever(),"花费",price(order))
print("小佩点了", whatever(2),"花费",price(order))
print("小明点了", whatever(2),"花费",price(order))