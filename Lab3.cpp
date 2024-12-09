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
	cout << "      Calculadora Geometrica      \n";
	cout << "==================================\n";
	cout << "1. Area Rombo       || A. Perimetro Rombo \n";
	cout << "2. Area Rectangulo  || B. Perimetro Rectangulo \n";
	cout << "3. Area Trapecio    || C. Perimetro Trapecio \n";
	cout << endl;
	cout << "0. SALIR\n";
	cout << endl;
	cout << "Elige una opcion:" << endl;
}

int main(){
	char option;
	double num1, num2, num3, num4, value;
	int i;

	do {
		menu();
		cin >> option;
		option = toupper(option);
		cout << endl;

		switch (option) {
			case '1':
				cout << " || Area Rombo || \n";
				cout << "Ingrese el Primera Diagonal (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese la Segunda Diagonal (cm)" << endl;
				cin >> num2;
				cout << endl;
				value = (num1 * num2) / 2;
				cout << "El Area es = " << value << " cm2" << endl;
				cout << "==================================" << endl;
			break;
			case 'A':
				cout << " || Perimetro Rombo || \n";
				cout << "Ingrese el Primer Lado (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Lado (cm):" << endl;
				cin >> num2;
				cout << endl;
				cout << "Ingrese el Tercer Lado (cm):" << endl;
				cin >> num3;
				cout << endl;
				cout << "Ingrese el Cuarto Lado (cm):" << endl;
				cin >> num4;
				cout << endl;
				value = num1 + num2 + num3 + num4;
				cout << "El Perimetro es = " << value << " cm" << endl;
				cout << "==================================" << endl;
			break;
			case '2':
				cout << " || Area Rectangulo || \n";
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
			case 'B':
				cout << " || Perimetro Rectangulo || \n";
				cout << "Ingrese el Primer Lado (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Lado (cm):" << endl;
				cin >> num2;
				cout << endl;
				value = (2 * num1) + (2 * num2);
				cout << "El Perimetro es = " << value << " cm" << endl;
				cout << "==================================" << endl;
			break;
			case '3':
				cout << " || Area Trapecio || \n";
				cout << "Ingrese el Primer Lado (Base) (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Lado (cm)" << endl;
				cin >> num2;
				cout << endl;
				cout << "Ingrese la Altura (cm):" << endl;
				cin >> num3;
				cout << endl;
				value = ((num1 + num2) * num3) / 2;
				cout << "El Area es = " << value << " cm2" << endl;
				cout << "==================================" << endl;
			break;
			case 'C':
				cout << " || Perimetro Trapecio || \n";
				cout << "Ingrese el Primer Lado (cm):" << endl;
				cin >> num1;
				cout << endl;
				cout << "Ingrese el Segundo Lado (cm):" << endl;
				cin >> num2;
				cout << endl;
				cout << "Ingrese el Tercer Lado (cm):" << endl;
				cin >> num3;
				cout << endl;
				cout << "Ingrese el Cuarto Lado (cm):" << endl;
				cin >> num4;
				cout << endl;
				value = num1 + num2 + num3 + num4;
				cout << "El Perimetro es = " << value << " cm" << endl;
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
