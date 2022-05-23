<h1>Projeto Final __ TaylorSeriesOpenMP</h1>
<p>Programa que realiza o calculo de Taylor: 1/1 +...+ 1/T ;; utilizando OpenMP para o paralelismo</p> 
<p>Programa realiza o calculo de acordo com a quantidade de threads do sistema, dessa forma o tempo de execucao pode variar de acordo com o sistema</p>
<h4>Testado em Linux e Windows, utilizando gcc para compilar</h4> 
<ol>Como compilar: gcc -g -fopenmp -o nome nome.c</ol>
<ol>Para executar: ./nome 
<li>OU para ver o tempo de execucao em Linux: time ./nome</li>
<li>OU para ver o tempo de execucao em Windows: Measure-Command {.\nome.exe}</li></ol>