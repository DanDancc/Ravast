#include <iostream>
#include <stack>
#include <string>

bool reconhecerAnBn(const std::string& entrada) {
    std::stack<char> pilha;
    int estado = 0;
    for (char simbolo : entrada) {
        switch (estado) {
            case 0:
                if (simbolo == 'a') {
                    pilha.push('X');
                } else if (simbolo == 'b') {
                    if (pilha.empty()) return false;
                    pilha.pop();
                    estado = 1;
                } else {
                    return false;
                }
                break;
            case 1: 
                if (simbolo == 'b') {
                    if (pilha.empty()) return false;
                    pilha.pop();
                } else {
                    return false;
                }
                break;
        }
    }
    return pilha.empty();
}
int main() {
    std::string teste = "aaabbb";
    if (reconhecerAnBn(teste)) {
        std::cout << "A string '" << teste << "' foi ACEITA." << std::endl;
    } else {
        std::cout << "A string '" << teste << "' foi REJEITADA." << std::endl;
    }
    return 0;
}
