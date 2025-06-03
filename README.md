
# ♟️ Projeto Final - Simulador de Movimento de Peças de Xadrez em C

Este projeto simula, em linguagem C, os movimentos das principais peças de xadrez utilizando **estruturas de repetição**, **recursividade** e **loops aninhados**. A atividade está dividida em três níveis: Novato, Aventureiro e Mestre.

## 🎯 Objetivo

Desenvolver lógica de programação em C para:
- Praticar `for`, `while` e `do-while`
- Aplicar `recursividade`
- Construir `loops aninhados e complexos`
- Simular movimentos realistas de peças no tabuleiro

## 🔰 Nível Novato

### Torre (Recursividade)
- Movimento: 5 casas para a **direita**
- Implementado com função recursiva

### Bispo (Recursividade)
- Movimento: 5 casas na **diagonal superior direita**

### Rainha (Recursividade)
- Movimento: 8 casas para a **esquerda**

## ⚔️ Nível Aventureiro

### Cavalo (Loops aninhados)
- Movimento: 2 casas para **baixo**, 1 casa para **esquerda**
- Obs: no projeto final, adaptado para cima e direita com múltiplas condições

## 🧠 Nível Mestre

- Torre, Bispo e Rainha com recursividade
- Bispo com loops aninhados
- Cavalo com loops complexos (`for` + `while`, múltiplas variáveis)

## 🛠️ Como compilar e executar

```bash
gcc xadrez.c -o xadrez
./xadrez
```

## ✅ Requisitos atendidos

- [x] Estruturas `for`, `while`, `do-while`
- [x] Recursividade aplicada corretamente
- [x] Loops aninhados e múltiplas condições
- [x] Código organizado e comentado

Desenvolvido por: **Michele Cardoso Müller**  
Curso: Ciência da Computação – Estácio  
Entrega: Junho/2025
