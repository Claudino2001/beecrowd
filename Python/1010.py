lista = []
lista = input().split(" ")
vzs = int(lista[1])
val = float(lista[2]) * vzs

lista2 = []
lista2 = input().split(" ")
vzs1 = int(lista2[1])
val1 = float(lista2[2]) * vzs1

vFinal = val + val1

print("VALOR A PAGAR: R$ {:.2f}".format(vFinal))