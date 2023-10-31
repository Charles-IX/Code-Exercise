s1 = input("输入第一个单词：")
s2 = input("输入第二个单词：")
alist1 = list(s1)
alist2 = list(s2)

alist1.sort()
alist2.sort()
pos = 0
matches = True
while pos < len(s1) and matches:
    if alist1[pos] == alist2[pos]:
        pos += 1
    else:
        matches = False
if matches == True:
    print("两者互为变位词。")
else:
    print("两者并非变位词。")