n1 = int(input("Entre com um número "))
n2 = int(input("Entre com outro número "))

if n1 < n2:
    for i in range(n1+1,n2):
        print(i)
elif n1 > n2:
    for i in range(n2+1,n1):
        print(i)
else: 
    print('você digitou os mesmos números.')