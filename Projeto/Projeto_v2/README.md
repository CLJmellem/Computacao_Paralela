<h1>Como compilar!</h1>
<h3>Foi utilizado gcc para a compilação</h3>
<br>Já existe as versões compiladas, no entanto, para criar outra: gcc TaylorSeries_OpenMP.c -o taylorserie -fopenmp
<br>E para a execução: ./taylorseries ---- ou para ver o tempo -> time ./taylorseries

***

<h2>Resultados</h2>
<li><b>Para o código serial: </b></li>
  <ol><li>resultado para ln(100): 5.1873</li>
  <li>tempo de execução: 0m0.010s</li></ol>
  
<li><b>Para o código OpenMP: </b></li>
  <ol><li>resultado para ln(100) da primeira thread: 2.9377</li>
  <li>resultado para ln(100) da segunda thread: 2.2496</li>
  <li>tempo de execução: 0m0.006s</li></ol>

<li><b>Para o código Critical: </b></li>
  <ol><li>resultado para ln(100) da primeira thread: 4.4992</li>
  <li>resultado para ln(100) da segunda thread: 0.6881</li>
  <li>tempo de execução: 0m0.006s</li></ol>
  
  ***
  
  <h2>Screenshot do código compilado com time</h2>
  <li>Código Serial</li>
  <img src="https://cdn.discordapp.com/attachments/534542243701456896/975162785472323644/unknown.png"></img>
  <li>Código OpenMP</li>
  <img src="https://cdn.discordapp.com/attachments/534542243701456896/975163203690565692/unknown.png"></img>
  <li>Còdigo Critical</li>
  <img src="https://cdn.discordapp.com/attachments/534542243701456896/975197399666524170/unknown.png"></img>
