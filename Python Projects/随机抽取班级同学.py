import random

number_str = input ("The number of people wanted:")
number = int (number_str)
FilePath = r"C:\Users\Charles\OneDrive\轻大文件\行软23-02\行软23-02 名单.txt"
with open(FilePath, 'r', encoding='utf-8') as f:
    Namelist = [_.rstrip('\n') for _ in f.readlines()]
LuckyOnes = random.sample(Namelist,k=number)
print(LuckyOnes)