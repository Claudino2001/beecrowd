x = int(input())
vet = input().split(" ")

for j in range (x):
    vet[j] = int(vet[j])

menorNum = vet[0]
posi = -1

for i in range (x):
    if(vet[i] < menorNum):
        menorNum = vet[i]
        posi = i

print("Menor valor: {}".format(menorNum))
print("Posicao: {}".format(posi))