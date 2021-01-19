w1 = raw_input()
w2 = raw_input()

total = 0
for letter in "abcdefghijklmnopqrstuvwxyz":
    total += abs(len([  1 for i in w1 if i==letter])-len([  1 for i in w2 if i==letter]))

print total