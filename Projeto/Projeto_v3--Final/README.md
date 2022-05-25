<h1>Projeto Final __ TaylorSeriesOpenMP</h1>
<p>Programa que realiza o calculo de Taylor: 1/1 +...+ 1/T ;; utilizando OpenMP para o paralelismo</p> 
<p>Programa realiza o calculo de acordo com a quantidade de threads do sistema, dessa forma o tempo de execucao pode variar de acordo com o sistema</p>
<h4>Testado em Linux e Windows, utilizando gcc para compilar</h4> 
<ol>Como compilar: gcc -g -fopenmp -o nome nome.c</ol>
<ol>Para executar: ./nome 
<li>OU para ver o tempo de execucao em Linux: time ./nome</li>
<li>OU para ver o tempo de execucao em Windows: Measure-Command {.\nome.exe}</li></ol>

***

<h2>Calculo do speedup</h2>

Tempo Serial para ln(100000000000):    5m21,978s<br>
Tempo Paralelo para ln (100000000000): 0m30,419s<br>
Speedup: 10,584

<ol>Execução + Tempo Serial: </ol>
<img src="https://cdn.discordapp.com/attachments/534542243701456896/978166560499838996/Screenshot_from_2022-05-23_02-18-16.png"></img>
<ol>Execução + Tempo Paralelo: </ol>
<img src="https://cdn.discordapp.com/attachments/534542243701456896/978166560898285638/Screenshot_from_2022-05-23_02-20-30.png"></img>

***

<h3>Melhor resultado (tempo e tamanho de T)</h3>
<ol>Utilizando T = 10^13</ol>
<img src="https://cdn.discordapp.com/attachments/534542243701456896/978523816517070888/Screenshot_from_2022-05-24_02-03-45.png"></img>
