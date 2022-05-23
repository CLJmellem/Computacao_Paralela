import concurrent.futures

def taylor(x):
    soma = 0
    soma2 = 0
    soma3 = 0
    total = 0
    if x == 0:
      for i in range(50000001):
        if i == 0:
          pass
        else:
          soma += 1/i
    elif x == 1:
        for j in range(50000001, 75000001):
          soma2 += 1/j
    elif x == 2:
        for j in range(75000001, 100000001):
          soma3 += 1/j
    total = soma + soma2 + soma3
    return total


with concurrent.futures.ThreadPoolExecutor(3) as executor: #A declaração with é usada para criar um executor de instância do ThreadPoolExecutor que irá esvaziar os threads imediatamente após a conclusão.
    futures = []
    for x in range(3):
        futures.append(executor.submit(taylor, x))#Cada chamada a submit retorna uma instância Future que está armazenada na lista futures.
    somaArr = []
    for future in concurrent.futures.as_completed(futures): #Espera cada chamada da função ser concluída para poder imprimir o resultado.
        somaArr.append(future.result())
    sum = somaArr[0] + somaArr[1] + somaArr[2]
    print("Sério de Taylor paralelizada com {} Threads = {}".format( 2,sum))