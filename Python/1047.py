n = input().split()

for i in range (4):
    n[i] = int(n[i])

HI = n[0]
MI = n[1]
HF = n[2]
MF = n[3]

MTI = HI*60+MI
MTF = HF*60+MF

if (MTI>=MTF):
    HF=HF+24
    MTI=HI*60+MI
    MTF=HF*60+MF
    MTF=MTF-MTI
    H = int(MTF/60)
    M = int(MTF%60)
    print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(H, M))
else:
    MTF=MTF-MTI
    H = int(MTF/60)
    M = int(MTF%60)
    print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(H, M))