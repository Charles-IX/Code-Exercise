import random

random.seed()
menu = ["cola", "milk", "tea", "coffee", "water", "juice"]

print("~=" * 12)
print("Welcome to Random Bar!")
print("~=" * 12)
guest = input("Your name please:")
drink=random.choice(menu)
print("-*-" * 10)
print(f"Hello! {guest}, enjoy your {drink}.")
cost = random.randrange(6)
donation = cost * 0.03 + 0.01
if cost == 0:
    print("It's free!")
else:
    print(f"${cost}, please.")
    print(f"We'll donate ${donation:.2f} to the Red Cross.")