
# Super Trunfo em C

Este projeto é uma implementação do jogo Super Trunfo, desenvolvido em linguagem C. O jogo permite que duas cartas de "cidades" sejam comparadas com base em dois atributos numéricos escolhidos pelo usuário. A carta com a maior soma dos atributos vence a rodada.

## Como Compilar e Executar

Para rodar o jogo, você precisará de um compilador C, como o **GCC**.

1.  **Baixe o arquivo** `logicaSuperTrunfo.c` para o seu computador.
2.  **Abra o terminal** na pasta onde o arquivo foi salvo.
3.  **Compile o código** com o seguinte comando:
    ```bash
    gcc -o supertrunfo logicaSuperTrunfo.c
    ```
4.  **Execute o programa** com o comando:
    ```bash
    ./supertrunfo
    ```

---

## Instruções de Uso

Ao executar o programa, siga as instruções no terminal:

1.  Você será solicitado a **inserir os dados** para duas cartas (código, nome, população, área, PIB, e pontos turísticos).
2.  Depois, o menu de comparação será exibido. Você deverá **escolher o primeiro atributo** para a comparação. Os atributos disponíveis são:
    -   População
    -   Área
    -   PIB
    -   Densidade Demográfica
    -   PIB Per Capita
3.  Em seguida, o programa exibirá um **menu dinâmico** para o segundo atributo, excluindo a opção já escolhida.
4.  O programa calculará a soma dos valores de ambos os atributos para cada carta. A **carta com a maior soma vence**. Em caso de empate, o resultado será "Empate!".
