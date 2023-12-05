# 读入整数n
n=int(input())
# 判断是否超级素数
def is_prime(x):
    if x==1 or x==0:
        return False
    elif x==2:
        return True
    else:
        for i in range(2,int(x**0.5)+1):
            if x % i == 0:
                return False
                break
        else:
            return True

def is_super_prime(x):
    if len(str(x))==1:
        return is_prime(int(x))
    else:
        return is_prime(int(x)) and is_super_prime(int(str(x)[:-1]))

if is_super_prime(n):
    print("YES")
else:
    print("NO")