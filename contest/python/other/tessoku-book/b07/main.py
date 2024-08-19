T = int(input())
N = int(input())

L = [None] * N
R = [None] * N
for i in range(N):
    L[i], R[i] = map(int, input().split())
B = [0] * (T + 1)
Answer = [None] * (T + 1)

for i in range(N):
    B[L[i]] += 1
    B[R[i]] -= 1

Answer[0] = B[0]
for t in range(1, T + 1):
    Answer[t] = Answer[t - 1] + B[t]

for t in range(T):
    print(Answer[t])
