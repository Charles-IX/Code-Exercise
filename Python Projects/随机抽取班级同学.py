import random

FilePath = r"C:\Users\Charles\OneDrive\轻大文件\行软23-02\行软23-02 名单.txt"
with open(FilePath, 'r', encoding='utf-8') as f:
    Namelist = [_.rstrip('\n') for _ in f.readlines()]
LuckyOnes = random.sample(Namelist,k=28)
print(LuckyOnes)