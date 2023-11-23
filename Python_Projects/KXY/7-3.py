n = int(input())
output = ord('A')
for i in range(1, n + 1):
    print("{}{}".format(" " * (n - i), chr(output) * (2 * i - 1)))
    output += 1
