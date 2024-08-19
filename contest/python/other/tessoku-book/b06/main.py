N = int(input())
A = list(map(int, input().split()))
Q = int(input())
L = [None] * Q
R = [None] * Q
for i in range(Q):
    L[i], R[i] = map(int, input().split())

Atari = [0]
Hazure = [0]

for i in range(N):
    Atari.append(Atari[i])
    if A[i] == 1:
        Atari[i + 1] += 1
    Hazure.append(Hazure[i])
    if A[i] == 0:
        Hazure[i + 1] += 1

for i in range(Q):
    NumAtari = Atari[R[i]] - Atari[L[i] - 1]
    NumHazure = Hazure[R[i]] - Hazure[L[i] - 1]
    if NumAtari > NumHazure:
        print("win")
    elif NumAtari == NumHazure:
        print("draw")
    else:
        print("lose")
