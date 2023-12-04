m, n = map(int, input().split())

fungi_lines = []
total = 0
for i in range(1, m+1):
    fungi = [int(x) for x in input().split()]
    fungi_lines.append(fungi)
for fungi_line in fungi_lines:
    total += fungi_line.count(1)

print(total)