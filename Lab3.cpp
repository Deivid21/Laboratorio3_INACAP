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
	cout << "1. Sumar +               || A. Area Circulo cm^2 \n";
	cout << "2. Restar -              || B. Area Triangulo cm^2 \n";
	cout << "3. Multiplicar *         || C. Volumen Cilindro cm^3 \n";
	cout << "4. Dividir /             || D. Binomio Cuadrado (a + b)^2 \n";
	cout << "5. Porcentaje %          || E. De 0 a 10 / While \n";
	cout << "6. Potenciar ^           || F. De 10 a 0 / While \n";
	cout << "7. Raiz Cuadrada         || G. De 0 a 10 / For \n";
	cout << "8. Area Cuadrado cm^2    || H. De 10 a 0 / For \n";
	cout << "9. Area Rectangulo cm^2  || \n";
	cout << endl;
	cout << "0. SALIR\n";
	cout << endl;
	cout << "Elige una opcion:" << endl;
}

int main(){
	char option;
	double num1, num2, value;
	int i;

	do {
		menu();
		cin >> option;
		option = toupper(option);
		cout << endl;

		switch (option) {
			case '1':
				cout << " || Sumar + || \n";
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
				cout << " || Restar - || \n";
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
				cout << " || Multiplicar * || \n";
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
				cout << " || Dividir / || \n";
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
				cout << " || Porcentaje % || \n";
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
				cout << " || Potenciar ^ || \n";
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
				cout << " || Area Cuadrado cm^2 || \n";
				cout << "Ingrese el Lado (cm):" << endl;
				cin >> num1;
				cout << endl;
				value = pow(num1, 2);
				cout << "El Area es = " << value << " cm2" << endl;
				cout << "==================================" << endl;
			break;
			case '9':
				cout << " || Area Rectangulo cm^2 || \n";
				cout << "Ingrese el Primer Lado (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Lado (cm)" << endl;
				cin >> num2;
				cout << endl;
				value = num1 * num2;
				cout << "El Area es = " << value << " cm2" << endl;
				cout << "==================================" << endl;
			break;
			case 'A':
				cout << " || Area Circulo cm^2 || \n";
				cout << "Ingrese el Radio (cm):" << endl;
				cin >> num1;
				cout << endl;
				value = M_PI * pow(num1, 2);
				cout << "El Area es = " << value << " cm2" << endl;
				cout << "==================================" << endl;
			break;
			case 'B':
				cout << " || Area Triangulo cm^2 || \n";
				cout << "Ingrese la Base (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese la Altura (cm)" << endl;
				cin >> num2;
				cout << endl;
				value = 0.5 * num1 * num2;
				cout << "El Area es = " << value << " cm2" << endl;
				cout << "==================================" << endl;
			break;
			case 'C':
				cout << " || Volumen Cilindro cm^3 || \n";
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
			case 'D':
				cout << " || Binomio Cuadrado (a + b)^2 || \n";
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
			case 'E':
				cout << " || De 0 a 10 / While || \n";
				i=0;
				while (i<=10){
					cout << i << endl;
					i++;
				}
				cout << "==================================" << endl;
			break;
			case 'F':
				cout << " || De 10 a 0 / While || \n";
				i=10;
				while (i>=0){
					cout << i << endl;
					i--;
				}
				cout << "==================================" << endl;
			break;
			case 'G':
				cout << " || De 0 a 10 / For || \n";
				for (i=0; i <=10;i++){
					cout << i << endl;
				}
				cout << "==================================" << endl;
			break;
			case 'H':
				cout << " || De 10 a 0 / For || \n";
				for (i=10; i >=0;i--){
					cout << i << endl;
				}
				cout << "==================================" << endl;
			break;
			case '0':
				cout << "Saliendo..." << endl;
				cout << "==================================" << endl;
			break;
			default:
				cout << "Ingrese una opcion correcta" << endl;
				cout << "==================================" << endl;
			break;
		}
		cout << endl;
	}
	while (option != '0');
	return 0;
}
