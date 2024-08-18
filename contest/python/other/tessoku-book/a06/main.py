N, Q = map(int, input().split())
A = list(map(int, input().split()))
L = list(map(int, input().split()))
R = list(map(int, input().split()))
for j in range(Q):
    L[j], R[j] = map(int, input().split())

S = []
S[0] = 0

for i in range(1, N + 1):
    S[i] = S[i - 1] + A[i]
for j in range(1, Q + 1):
    print(S[R[j]] - S[L[j] - 1])
