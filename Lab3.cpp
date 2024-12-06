//
// For more support see: https://t.me/Deivid21Hub
//
// Copyright (C) 1996 - 2024 INACAP
// Copyright (C) 2017 - 2024 Deivid Ignacio Parra (Deivid21)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <iostream>
#include <math.h>

using namespace std;

void menu() {
	cout << "==================================\n";
	cout << " Calculadora Basica con 2 Numeros \n";
	cout << "==================================\n";
	cout << "1. Sumar ( + )\n";
	cout << "2. Restar ( - )\n";
	cout << "3. Multiplicar ( * )\n";
	cout << "4. Dividir ( / )\n";
	cout << "5. Porcentaje ( % )\n";
	cout << "6. Potenciar ( ^ )\n";
	cout << "7. Raiz Cuadrada\n";
	cout << "8. Volumen Cilindro ( cm^3 )\n";
	cout << "9. Binomio Cuadrado ( (a + b)^2 )\n";
	cout << endl;
	cout << "0. SALIR\n";
	cout << endl;
	cout << "Elige una opcion:" << endl;
}

int main(){
	double num1, num2, value;
	char option;

	do {
		menu();
		cin >> option;
		cout << endl;

		switch (option) {
			case '1':
				cout << " || Sumar ( + ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = num1 + num2;
				cout << num1 << " + " << num2 << " = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '2':
				cout << " || Restar ( - ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = num1 - num2;
				cout << num1 << " - " << num2 << " = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '3':
				cout << " || Multiplicar ( * ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = num1 * num2;
				cout << num1 << " * " << num2 << " = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '4':
				cout << " || Dividir ( / ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = num1 / num2;
				cout << num1 << " / " << num2 << " = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '5':
				cout << " || Porcentaje ( % ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = (num1 * num2) / 100;
				cout << num1 << " % de " << num2 << " es = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '6':
				cout << " || Potenciar ( ^ ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = pow(num1, num2);
				cout << num1 << " ^ " << num2 << " es = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '7':
				cout << " || Raiz Cuadrada || \n";
				cout << "Ingrese el Numero:" << endl;
				cin >> num1;
				cout << endl;
				value = sqrt(num1);
				cout << "La Raiz Cuadrada de " << num1 << " es = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '8':
				cout << " || Volumen Cilindro ( cm^3 ) || \n";
				cout << "Ingrese el Radio (cm^3):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese la Altura (cm^3):" << endl;
				cin >> num2;
				cout << endl;
				value = M_PI * num2 * pow(num1, 2);
				cout << "El Volumen es = " << value << " cm3" << endl;
				cout << "==================================" << endl;
			break;
			case '9':
				cout << " || Binomio Cuadrado ( (a + b)^2 ) || \n";
				cout << "Ingrese el Primer Numero:" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Numero:" << endl;
				cin >> num2;
				cout << endl;
				value = pow(num1, 2) + 2 * num1 * num2 + pow(num2, 2);
				cout << "(" << num1 << " + " << num2 << ")^2" << " es = " << value << endl;
				cout << "==================================" << endl;
			break;
			case '0':
				cout << "Saliendo..." << endl;
				cout << "==================================" << endl;
				return 0;
			break;
			default:
				cout << "Ingrese una opcion correcta" << endl;
				cout << "==================================" << endl;
			break;
		}
		cout << endl;
	}
	while (option != 9);
	return 0;
}
