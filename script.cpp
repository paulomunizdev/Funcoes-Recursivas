#include <iostream>

// Função recursiva para calcular o fatorial de um número
int fatorial(int n) {
    // Condição de parada: o fatorial de 0 é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        // Chamada recursiva para calcular o fatorial
        return n * fatorial(n - 1);
    }
}

// Função recursiva para calcular a soma dos elementos de um array
int somaArray(int arr[], int tamanho) {
    // Condição de parada: array vazio
    if (tamanho == 0) {
        return 0;
    }
    else {
        // Chamada recursiva para calcular a soma
        return arr[tamanho - 1] + somaArray(arr, tamanho - 1);
    }
}

// Função recursiva para calcular a potência de um número
int potencia(int base, int expoente) {
    // Condição de parada: qualquer número elevado a 0 é 1
    if (expoente == 0) {
        return 1;
    }
    else {
        // Chamada recursiva para calcular a potência
        return base * potencia(base, expoente - 1);
    }
}

// Função recursiva para calcular o termo n da sequência de Fibonacci
int fibonacci(int n) {
    // Condição de parada: os dois primeiros termos são 0 e 1
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        // Chamada recursiva para calcular o termo n
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Testando as funções
    int numero = 5;
    int arr[] = { 1, 2, 3, 4, 5 };
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int base = 2;
    int expoente = 5;
    int termoFibonacci = 6;

    // Fatorial
    int resultadoFatorial = fatorial(numero);
    std::cout << "O fatorial de " << numero << " é: " << resultadoFatorial << std::endl;

    // Soma dos elementos do array
    int resultadoSomaArray = somaArray(arr, tamanho);
    std::cout << "A soma dos elementos do array é: " << resultadoSomaArray << std::endl;

    // Potência
    int resultadoPotencia = potencia(base, expoente);
    std::cout << base << " elevado a " << expoente << " é: " << resultadoPotencia << std::endl;

    // Fibonacci
    int resultadoFibonacci = fibonacci(termoFibonacci);
    std::cout << "O termo " << termoFibonacci << " da sequência de Fibonacci é: " << resultadoFibonacci << std::endl;

    return 0;
}
