import random
import string
from collections import Counter

side_length = 4

total_length = side_length * 12 + 9
random_list = [random.choice(string.ascii_letters + string.digits + '_') for _ in range(total_length)]

for i in range(total_length):
    if i < side_length * 2 + 2 or (i > side_length * 5 + 2 and i < side_length * 7 + 5) or (i > side_length * 10 + 5 and i < side_length * 12 + 8):
        print(random_list[i], end='')
    elif i == side_length * 2 + 2 or i == side_length * 7 + 5 or i == side_length * 12 + 8:
        print(random_list[i])
    elif (i > side_length * 2 + 2 and i <= side_length * 5 + 2):
        if (i - side_length * 2 - 2) % 3 != 0:
            print(random_list[i], end=' ' * side_length)
        else:
            print(random_list[i])
    elif (i > side_length * 7 + 5 and i <= side_length * 10 + 5):
        if (i - side_length * 7 - 5) % 3!= 0:
            print(random_list[i], end=' ' * side_length)
        else:
            print(random_list[i])

statistics = dict(Counter(random_list))
print(statistics)
