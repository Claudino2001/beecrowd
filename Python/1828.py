x = int(input())

for i in range (1,x+1):
    vet = input().split()
    if(vet[0] == "tesoura" and vet[1] == "tesoura"):
        print("Caso #{}: De novo!".format(i))
    if(vet[0] == "papel" and vet[1] == "papel"):
        print("Caso #{}: De novo!".format(i))
    if(vet[0] == "Spock" and vet[1] == "Spock"):
        print("Caso #{}: De novo!".format(i))        
    if(vet[0] == "pedra" and vet[1] == "pedra"):
        print("Caso #{}: De novo!".format(i))
    if(vet[0] == "lagarto" and vet[1] == "lagarto"):
        print("Caso #{}: De novo!".format(i))

    if(vet[0] == "tesoura" and vet[1] == "papel"):
        print("Caso #{}: Bazinga!".format(i))
    if(vet[1] == "tesoura" and vet[0] == "papel"):
        print("Caso #{}: Raj trapaceou!".format(i))

    if(vet[0] == "pedra" and vet[1] == "papel"):
        print("Caso #{}: Raj trapaceou!".format(i))
    if(vet[1] == "pedra" and vet[0] == "papel"):
        print("Caso #{}: Bazinga!".format(i))

    if(vet[0] == "pedra" and vet[1] == "lagarto"):
        print("Caso #{}: Bazinga!".format(i))
    if(vet[1] == "pedra" and vet[0] == "lagarto"):
        print("Caso #{}: Raj trapaceou!".format(i))

    if(vet[0] == "Spock" and vet[1] == "lagarto"):
        print("Caso #{}: Raj trapaceou!".format(i))
    if(vet[1] == "Spock" and vet[0] == "lagarto"):
        print("Caso #{}: Bazinga!".format(i))

    if(vet[0] == "Spock" and vet[1] == "tesoura"):
        print("Caso #{}: Bazinga!".format(i))
    if(vet[1] == "Spock" and vet[0] == "tesoura"):
        print("Caso #{}: Raj trapaceou!".format(i))

    if(vet[0] == "lagarto" and vet[1] == "tesoura"):
        print("Caso #{}: Raj trapaceou!".format(i))
    if(vet[1] == "lagarto" and vet[0] == "tesoura"):
        print("Caso #{}: Bazinga!".format(i))

    if(vet[0] == "lagarto" and vet[1] == "papel"):
        print("Caso #{}: Bazinga!".format(i))
    if(vet[1] == "lagarto" and vet[0] == "papel"):
        print("Caso #{}: Raj trapaceou!".format(i))

    if(vet[0] == "Spock" and vet[1] == "papel"):
        print("Caso #{}: Raj trapaceou!".format(i))
    if(vet[1] == "Spock" and vet[0] == "papel"):
        print("Caso #{}: Bazinga!".format(i))

    if(vet[0] == "Spock" and vet[1] == "pedra"):
        print("Caso #{}: Bazinga!".format(i))
    if(vet[1] == "Spock" and vet[0] == "pedra"):
        print("Caso #{}: Raj trapaceou!".format(i))

    if(vet[0] == "tesoura" and vet[1] == "pedra"):
        print("Caso #{}: Raj trapaceou!".format(i))
    if(vet[1] == "tesoura" and vet[0] == "pedra"):
        print("Caso #{}: Bazinga!".format(i))

