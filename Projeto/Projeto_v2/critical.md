<h1>Controle de acesso à região crítica</h1>
Quando se é utilizado no código #pragma omp critical, a condição de corrida é evitada. Desta forma, não ocorre resultados imprevisíveis, pois duas ou mais threads estão rodando simultaneamente.<br><br>
Utilizamos a seção crítica no cum, dentro da função TaylorSeries. Desta forma percebe-se que quando o resultado foi exposto, a primeira thread quase realizou todo o cálculo.<br><br>
Resultando, para o cálculo de ln(100) 
<li> primeira thread = 4.49</li>
<li> segunda thread =  0.68</li>

<br>Já para a questão tempo, a mudança foi quase que insignificante.
