#include <iostream>
using namespace std;

// Nodo de la lista enlazada
struct Nodo {
    int dato;
    Nodo* siguiente;
};

class Pila {
private:
    Nodo* top;

public:
    // Constructor
    Pila() {
        top = NULL;
    }

    // Verificar si la pila está vacía
    bool estaVacia() {
        return top == NULL;
    }

    // Agregar un elemento a la pila
    void push(int valor) {
        Nodo* nuevo = new Nodo;

        nuevo->dato = valor;
        nuevo->siguiente = top;

        top = nuevo;

        cout << "Se agrego: " << valor << endl;
    }

    // Eliminar el elemento superior
    int pop() {
        if (estaVacia()) {
            cout << "Error: la pila esta vacia." << endl;
            return -1;
        }

        Nodo* auxiliar = top;
        int valor = auxiliar->dato;

        top = top->siguiente;

        delete auxiliar;

        return valor;
    }

    // Mostrar el elemento superior
    int peek() {
        if (estaVacia()) {
            cout << "La pila esta vacia." << endl;
            return -1;
        }

        return top->dato;
    }

    // Destructor
    ~Pila() {
        while (!estaVacia()) {
            pop();
        }
    }
};

int main() {

    Pila pila;

    // Agregar elementos
    pila.push(100);
    pila.push(200);
    pila.push(300);

    // Mostrar elemento superior
    cout << "Elemento superior: " << pila.peek() << endl;

    // Eliminar elemento
    cout << "Elemento eliminado: " << pila.pop() << endl;

    // Mostrar nuevo elemento superior
    cout << "Nuevo elemento superior: " << pila.peek() << endl;

    return 0;
}