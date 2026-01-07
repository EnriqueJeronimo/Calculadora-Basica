#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

float sum(float num1, float num2) {
    return num1 + num2;
}

float res(float num1, float num2) {
    return num1 - num2;
}

float mult(float num1, float num2) {
    return num1 * num2;
}

float div(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        cout << "Error: Division por cero no es permitida." << endl;
        return 0;
    }
}

int main(){
    int opc;
    float num1, num2;

    cout << "Elige la operacion a realizar: \n 1. Suma. \n 2. Resta. \n 3. Multiplicacion \n 4. Division. \n 5. Potencia. \n";
    cin >> opc;


    if (opc == 1 || opc == 2 || opc == 3 || opc == 4 || opc == 5) {
        cout << "\n Ingresa el primer numero: ";
        cin >> num1;
        cout << "\n Ingresa el segundo numero: ";
        cin >> num2;

        switch (opc) {
        case 1:
            cout << sum(num1, num2);
            break;
        case 2:
            cout << res(num1, num2);
            break;
        case 3:
            cout << mult(num1, num2);
            break;
        case 4:
            cout << div(num1, num2);
            break;
        case 5:
			cout << pow(num1, num2);
            break;
        default:
            cout << "\n OPERACION REALIZADA CON EXITO \n" << endl;
            break;
        }

    } 
    else {
        cout << "\n INGRESA UNA OPCION VALIDA \n" << endl;
        main();
        }

	system("pause");
    return 0;
}