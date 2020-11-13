result = ""

def add_list(lista):
    global result
    for i in lista:
        result += str(i) + " "
    result += "\n"

n = int(input())
lista = input().split(" ")
flag = True

for i in range(n):
    lista[i] = int(lista[i])

val = lista[-1]

for j in range(n-1):
    if (abs(val-lista[n-j-2]) >= 1 and (lista[n-j-2] > val)):
        lista[n-j-1] = lista[n-j-2]
        add_list(lista)
    else:
        lista[n-j-1] = val
        flag = False
        break

if flag:
    lista[0] = val    

add_list(lista)
print(result)


