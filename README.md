# Ravast
Atividade  de LFA: Introdução às Linguagens Livres de Contexto - Realizada em C++
### Autômato de Pilha: Simulador de Linguagem (a^n b^n)
O objetivo do código é validar strings que seguem a regra da linguagem $L = \{a^n b^n \mid n \geq 0\}$, garantindo que o número de ocorrências da letra 'a' seja exatamente igual ao número de ocorrências da letra 'b', respeitando a ordem de entrada.
#### Como funciona?
O autômato utiliza a estrutura de dados std::stack para "memorizar" a entrada:
* Leitura de 'a': Para cada 'a' lido, um caractere é adicionado (empilhado) na memória
* Leitura de 'b': Para cada 'b' lido, um caractere é removido (desempilhado) da memória. 
* Aceitação: Se ao final da string a pilha estiver vazia, significa que a contagem foi perfeita e a string é aceita. Caso contrário, a string é rejeitada.
