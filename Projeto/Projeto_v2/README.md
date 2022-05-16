<h1>Como compilar!</h1>
<h3>Foi utilizado gcc para a compilação</h3>
<br> $ gcc TaylorSeries_OpenMP.c -o taylorserie -fopenmp
<br>E para a execução: $ ./taylorseries ---- ou para ver o tempo -> $ time ./taylorseries

***

<h2>Resultados</h2>
<li><b>Para o código serial: </b></li>
  <ol><li>resultado para ln(10000000): 15.403683</li>
  <li>tempo de execução: 0m0.062s</li>
  <li>Speedup Serial = 1</li></ol>
  
<li><b>Para o código OpenMP: </b></li>
  <ol><li>resultado para ln(10000000): 15.403683</li>
  <li>tempo de execução: 0m0.012s</li>
  <li>Speedup Serial = 1</li>
  <li>Speedup Paralelo = 5.166...</li></ol>

<li><b>Para o código Critical: </b></li>
  <ol><li>resultado para ln(10000000): 15.403683</li>
  <li>tempo de execução: 0m0.032s</li>
  <li>Speedup Serial = 1</li>
  <li>Speedup Paralelo = 1,9275</li></ol>
  

  
  ***
  
  <h2>Screenshot do código compilado com time</h2>
  <li>Código Serial</li>
  <img src="https://cdn.discordapp.com/attachments/941299140674088990/975809420749574234/serial.png"></img>
  <li>Código OpenMP</li>
  <img src="https://cdn.discordapp.com/attachments/534542243701456896/975819956212076654/openmp.png"></img>
  <li>Còdigo Critical</li>
  <img src="https://cdn.discordapp.com/attachments/534542243701456896/975819955914276864/critical.png"></img>
