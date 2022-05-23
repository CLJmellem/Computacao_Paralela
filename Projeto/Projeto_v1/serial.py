def taylor():
    soma = 0
    for i in range(100000001):
        if i == 0:
            pass
        else:
            soma += 1/i
    print(soma)
taylor()