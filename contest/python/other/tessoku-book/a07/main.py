D = int(input())
N = int(input())
L = [None] * N
R = [None] * N
B = [0] * (D + 2)
for i in range(N):
    L[i], R[i] = map(int, input().split())

for i in range(N):
    B[L[i]] += 1
    B[R[i] + 1] -= 1

Answer = [None] * (D + 2)
Answer[0] = 0

for d in range(1, D + 1):
    Answer[d] = Answer[d - 1] + B[d]

for d in range(1, D + 1):
    print(Answer[d])
