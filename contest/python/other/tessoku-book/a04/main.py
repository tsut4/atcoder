N = int(input())

for i in reversed(range(10)):
    wari = 2 ** i
    print((N // wari) % 2, end="")

print("")
