<h1 align="center"> Calculadora</h1>
<h2 align="center"> Calculadora Privada em <strong>C++</strong></h2>
<p> Há tres arquivos: <p>
<ul>
<li>Fim</li>
<li>Meio</li>
<li>Origem</li>
</ul>
<p align="justify"> O arquivo <strong> FIM </strong> apresenta os <em>forward declaration</em> (ou declaração antecipada) é uma declaração que informa ao compilador a existência de uma classe, função ou variável sem precisar fornecer sua implementação completa.
A forward declaration é útil em situações em que a implementação completa não é necessária, como em casos em que uma função precisa apenas receber um ponteiro ou referência a uma classe, mas não precisa acessar seus membros ou chamar seus métodos.</p>
<p align="justify">Por outro lado há o <strong> MEIO </strong> que tem todas as funções que serão usadas no meu "main ()", essas funções são uteis para que eu não fique "recriando" elas
toda hora no meu programa. Simplesmente eu chamo elas e elas são executadas por inteiro.</p>
<p align="justify">Por fim o <strong> ORIGEM </strong> que é o codigo principal, nele eu fico chamando funções para atribuir falores a algumas variaveis. A primeira parte do Origem
apresenta um teste com bool, ja a segunda parte é o inicio da calculadora, e ultima é outra forma de usa bool para verificar se dois numero são iguais.</p>
