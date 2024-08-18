N = int(input())
A = list(map(int, input().split()))
Answer = False

for x in range(N):
    for y in range(x + 1, N):
        for z in range(y + 1, N):
            if A[x] + A[y] + A[z] == 1000:
                Answer = True

if Answer:
    print("Yes")
else:
    print("No")
