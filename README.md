# Simulador de Movimentação de Xadrez em C

Este projeto foi desenvolvido como parte de um desafio acadêmico para aplicar conceitos fundamentais e avançados de programação na linguagem C, simulando a movimentação de peças de xadrez em um tabuleiro.

**Estudante:** [Seu Nome Aqui]  
**Instituição:** [Nome da Faculdade]  
**Disciplina:** Algoritmos e Programação

---

## 🚀 Sobre o Projeto

O objetivo deste simulador é demonstrar o domínio de diferentes estruturas de controle de fluxo, loops aninhados e recursividade, dividindo-se em três níveis de complexidade incremental.

### 🧩 Níveis de Implementação

#### 1. Nível Novato (Estruturas de Repetição Simples)
Implementação dos movimentos básicos das peças utilizando uma estrutura de repetição diferente para cada uma:
* **Torre:** Movimentação de 5 casas à direita utilizando o loop `for`.
* **Bispo:** Movimentação de 5 casas na diagonal (Cima Direita) utilizando o loop `while`.
* **Rainha:** Movimentação de 8 casas à esquerda utilizando o loop `do-while`.

#### 2. Nível Aventureiro (Loops Aninhados)
Simulação do movimento em "L" do **Cavalo**:
* Implementação de 2 casas para baixo e 1 para a esquerda.
* Uso obrigatório de loops aninhados (`for` e `while`) para estruturar as etapas do movimento.

#### 3. Nível Mestre (Recursividade e Controle Avançado)
Refatoração e aprimoramento técnico do código:
* **Recursividade:** As movimentações da Torre, Bispo e Rainha foram transformadas em funções recursivas.
* **Bispo Aninhado:** Implementação de loops aninhados para coordenar os eixos vertical e horizontal.
* **Cavalo Avançado:** Movimentação complexa (2 para cima, 1 para direita) utilizando múltiplas variáveis de controle no mesmo loop e a instrução `continue` para priorizar a lógica vertical.

---

## 🛠️ Tecnologias e Decisões Técnicas

* **Linguagem:** C (Padrão C99/C11).
* **Portabilidade:** O código foi escrito sem o uso de acentuação gráfica nas strings de saída e comentários. Essa decisão garante que o programa seja exibido corretamente em qualquer terminal (Windows, Linux ou macOS), evitando erros de codificação (UTF-8/Windows-1252).
* **Eficiência:** Uso estratégico de recursividade com casos base bem definidos para evitar *stack overflow*.

---

## 💻 Como Executar

1. Certifique-se de ter um compilador (como o GCC) instalado.
2. Compile o arquivo:
   ```bash
   gcc Xadrez.c -o xadrez
