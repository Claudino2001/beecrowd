import string

N = int(input())
tam = 0
arr = []
abre = []
fecha = []
cont = 0

for i in range (N):
    arr = input()
    for j in arr:
        if(j == '<'):
            abre.append('<')
        if(j == '>'):
            if(len(abre) > 0):
                abre.pop()
                cont = cont + 1
    print(cont)
    cont = 0
