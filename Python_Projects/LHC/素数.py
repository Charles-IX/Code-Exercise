N=int(input())
if N in (1,2):
    print(1)
else:
    for i in range(2,int(N**0.5)+1):
        if N%i==0:
            print(0)
            break
    else:
        print(1)