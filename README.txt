# Fila Dinâmica

## Descrição

Implementação de uma **Fila Dinâmica** utilizando lista encadeada simples 
na linguagem C.
A estrutura mantém dois ponteiros:
- **inicio**: aponta para o primeiro elemento da fila;
- **fim**: aponta para o último elemento da fila.

---

## Estruturas Utilizadas

**Tipo do elemento**
Definição do tipo de dado do elemento:

```c 
typedef int TipoItem;
```

**Estrutura do nó**
Cada nó da fila possui:
- um campo para armazenar a informação;
- um ponteiro para o próximo nó.

```c 
struct no {
    TipoItem info;
    struct no* prox;
};
```

**Estrutura da fila**
A fila possui dois ponteiros:
- inicio: primeiro elemento;
- fim: último elemento.

```c 
typedef struct {
    struct no* inicio;
    struct no* fim;
} Fila;
```

---

## Operações Implementadas

Funcionalidades implementadas:
- criar fila vazia;
- verificar se um fila é vazia;
- inserir um elemento na fila;
- exibir os elementos da fila;
- desenfileirar um elemeto da fila;
- buscar um elemento na fila;
- liberar a memória disponibilizada para fila.

---

## Estrutura Do Programa

```
.
|- main.c
|- fila.h
|- fila.c
|- utils.h
|- utils.c
|- README.txt
```

---

## Compilação

Utilizando GCC:

```bash
gcc *.c -o fila
```

---

# Execução

Linux/macOS:

```bash
./lista
```

Windows:

```cmd
lista.exe
```

---

## Autor

André Brandão