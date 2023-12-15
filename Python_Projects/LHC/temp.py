n = int(input())
for i in range(n):
    dic={}
    for i in range(ord('a'), ord('z') + 1):
        dic[chr(i)]=0
    
    line=input()
    line=line.replace(" ","")
    for letter in dic:
        dic[letter]=line.count(letter)
    print(dic)
    lst=[]
    
    for value in dic:
        lst.append(dic[value])
    for m in lst[0:24]:
        print(m,end=" ")
    print(lst[-1])