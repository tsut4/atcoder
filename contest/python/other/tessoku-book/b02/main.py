A, B = map(int, input().split())

Answer = False
for i in range(A, B):
    if 100 % i == 0:
        Anser = True

if Answer:
    print("Yes")
else:
    print("No")
