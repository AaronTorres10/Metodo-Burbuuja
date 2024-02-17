#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int numero[] = {29, 1, 14, 22, 12, 20, 10, 18, 31, 40};
    int i, j, aux;
    int comparaciones = 0;
    int intercambios = 0;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8 - i - 1; j++) {
            comparaciones++;
            if (numero[j] > numero[j + 1]) {
                intercambios++;
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }

    cout << "Orden Ascendente ";
    for (i = 0; i < 10; i++) {
        cout << numero[i] << " ";
    }
    cout << "\nOrden Descendente: ";
    for(i=9; i>=0; i--){
        cout << numero[i] << " ";
    }

    cout << "\nN?mero de comparaciones: " << comparaciones << endl;
    cout << "N?mero de intercambios: " << intercambios << endl;

    getch();
}
