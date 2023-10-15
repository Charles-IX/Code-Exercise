import random       # 引入随机函数库

number_str = input ("需要抽取的人数:")      # 从键盘读取输入，存储为字符串number_str
number = int (number_str)       # 将上一步读取到的number_str转换为整型，存储为变量number
FilePath = r"C:\Users\Charles\OneDrive\轻大文件\行软23-02\行软23-02 名单.txt"       # 指定全班人员名单文件存放位置
with open(FilePath, 'r', encoding='utf-8') as f:        # 以UTF-8标准编码读取上一步指定的文件
    Namelist = [_.rstrip('\n') for _ in f.readlines()]      # 将每一行的内容作为数据列表Namelist中的一个元素，并自动删除各行行尾的换行符\n
LuckyOnes = random.sample(Namelist,k=number)        # 调用随机取样函数，对Namelist中的数据进行Number次不放回的随机抽取
print(LuckyOnes)        # 在屏幕上打印出被抽取到的幸运同学