#include <iostream>
using namespace std;
int main() {
    //Desarrolla con c++ un ciclo que sume los numeros impares en una variable "a"
    // y los numeros pares en una varible "b" en un rango de 0 a 50
    // utilizando la estructura de control "for"//

        /*int a = 0;
        int b = 0;

        for (int i = 0; i <= 50; ++i) {
            if (i % 2 == 0) {

                b += i;
            } else {

                a += i;
            }
        }

       cout << "La suma de los numeros impares en el rango de 0 a 50 es: " << a <<endl;
        cout << "La suma de los numeros pares en el rango de 0 a 50 es: " << b <<endl;*/


        //usando la estructura de control "while" has un ciclo  iniciando en cero,
        // que increimente de 3 en 3 hasta llegar
        // al primer numero impar despues de 30 en c++//



        int num = 0;
        while (num <= 30 || num % 2 == 0) {
            num += 3;
        }
        std::cout << "El primer numero impar despues de 30 es: " << num <<endl;
        return 0;
    }







