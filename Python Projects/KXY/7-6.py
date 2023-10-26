age_list,leftover_list = (input().split(' '))
age = int(age_list)
leftover = int(leftover_list)

if age <= 6 :
    p_age = 10
elif age <= 12 :
    p_age = 78 / 2
else :
    p_age = 78

p_leftover = 10 * (leftover // 250)

print(p_age + p_leftover)