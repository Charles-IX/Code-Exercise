n = int(input())
lst = []
for i in range(1, n+1):
    circle = []
    x, y, z = map(int,input().split())
    circle.append(x)
    circle.append(y)
    circle.append(z)
    lst.append(circle)

is_intersect=False

for i in range(0, n-1):
    for j in range(i+1, n):
        if (lst[i][0]-lst[j][0])**2 + (lst[i][1]-lst[j][1])**2 < (lst[i][2] + lst[j][2])**2:
            is_intersect=True
            
            
if is_intersect:
    print("YES")
else:
    print("NO")