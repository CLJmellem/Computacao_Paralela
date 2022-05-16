<h1>Controle de acesso à região crítica</h1>
Quando se é utilizado no código #pragma omp critical, a condição de corrida é evitada. Desta forma, não ocorre resultados imprevisíveis, pois duas ou mais threads estão rodando simultaneamente.<br><br>
Utilizamos a seção crítica no sum, dentro de cada for na função TaylorSeries.<br>

<br>Já para a questão tempo, a mudança foi relevante quando quando utiliza-se um T maior. Neste caso, a diferença no tempo foi quase do dobro para a versão com critical. Resultando de 0m015s para 0m029s (com critical).
