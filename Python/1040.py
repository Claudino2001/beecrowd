notas = input().split(" ")

for i in range (4):
    notas[i] = float(notas[i])

media = ((notas[0] * 2 + notas[1] * 3 + notas[2] * 4 + notas[3] * 1) / (2 + 3 + 4 + 1))

print("Media: {:.1f}".format(media))

if(media >= 7.0):
    print("Aluno aprovado.")

if(media < 5.0):
    print("Aluno reprovado.")
elif(media >= 5.0 and media <= 6.9):
    print("Aluno em exame.")
    n1 = float(input())
    print("Nota do exame: {:.1f}".format(n1))
    media = (media + n1) / 2
    if(media > 5.0):
        print("Aluno aprovado.")
        print("Media final: {:.1f}".format(media))
    else:
        print("Aluno reprovado.")
        print("Media final: {:.1f}".format(media))