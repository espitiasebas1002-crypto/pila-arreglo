#include <iostream>
using namespace std;

const int MAX = 5;

class pila {
private:
    int datos[MAX];
    int top;

public:
    // Constructor
    pila() {
        top = -1;
    }

    // Verifica si la pila está vacía
    bool estaVacia() {
        return top == -1;
    }

    // Verifica si la pila está llena
    bool estaLlena() {
        return top == MAX - 1;
    }

    // Agregar un elemento
    void push(int valor) {
        if (estaLlena()) {
            cout << "Error: la pila esta llena." << endl;
            return;
        }

        top++;
        datos[top] = valor;

        cout << "Se agrego: " << valor << endl;
    }

    // Eliminar el elemento superior
    int pop() {
        if (estaVacia()) {
            cout << "Error: la pila esta vacia." << endl;
            return -1;
        }

        int valor = datos[top];
        top--;

        return valor;
    }

    // Consultar el elemento superior
    int peek() {
        if (estaVacia()) {
            cout << "La pila esta vacia." << endl;
            return -1;
        }

        return datos[top];
    }
};

int main() {
    pila pila;

    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << "Elemento superior: " << pila.peek() << endl;

    cout << "Elemento eliminado: " << pila.pop() << endl;

    cout << "Nuevo elemento superior: " << pila.peek() << endl;

    return 0;
}