N_str, M_str = input().split()
N = int(N_str)
M = int(M_str)
for a in range(1, 500000):
    if N % a == 0 and N % (M - a) == 0:
        judge = 1
        print(a)
        break
if judge != 1:
    print("-1")