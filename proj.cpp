#include <iostream>
#include <string.h>

using namespace std;

// PARA CALCULOS
char calorias (int calo, int edad, char sexo[1]);
char proteinas (int prote, int edad, char sexo[1]);
char calcio (int calci, int edad, char sexo[1]);
char VA (int A, int edad, char sexo[1]);
char VC (int C, int edad, char sexo[1]);
char ps (float peso, float estatura, char sexo[1]);

// INFORMACION
void recomendaciones ();
void reco_calorias ();
void reco_proteinas ();
void reco_calcio ();
void reco_VA ();
void reco_VC ();

char persona [10], sexo[1];
int edad=0, dia=1, calo=0, prote=0, calci=0, A=0, C=0;
float estatura=0, peso=0;

int main(){
    char reco[1]; int reco2 = 0;
    cout << "Bienvenido" << "\n";
    cout << "Programa nutricional de un mes" << endl;
    cout << "Ingrese su nombre: "; cin >> persona;
    cout << "Ingrese su edad " << persona << ": "; cin >> edad;
    cout << "Ingrese su estatura (en metros) " << persona << ": "; cin >> estatura;
    //sex:
    cout << "Sexo (F/M): "; cin >> sexo;
    cout << endl;

    // NO FURULA ESTO :(
    /*if (strcmp(sexo,"F") == 1 || strcmp(sexo,"f") == 1 || strcmp(sexo,"M") == 1 || strcmp(sexo,"m") == 1){
        cout << "Valor ingresado es incorrecto" << endl; goto sex;
    }*/
    
    // NUTRICION DE 4 A 6 AÑOS
    if (edad >= 4 && edad <= 6){
        while (dia <= 30){
            cout << "DIA " << dia; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> peso;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; // FALTA ESPECIFICAR AQUI
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prote;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calci;
            cout << "Vitamina A: "; cin >> A; // FALTA ESPECIFICAR AQUI
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;

            cout << "RESULTADOS DEL DIA "<<dia<< endl;
            cout << ps (peso, estatura, sexo) << endl;
            cout << calorias (calo,edad, sexo) << endl;
            cout << proteinas (prote, edad, sexo) << endl;
            cout << calcio (calci, edad, sexo) << endl;
            cout << VA (A, edad, sexo) << endl;
            cout << VC (C, edad, sexo) << endl;

            // MUESTRA INFORMACION DE LOS ALIMENTOS
            opcion:
            cout << endl;
            cout << "¿Desea ver recomendaciones sobre los alimentos que contienen los distintos nutrientes evaluados en el progroma de nutricion? (S/N)" << endl;
            cout << "Respuesta: "; cin >> reco; cout << endl;

            if (strcmp(reco,"S") == 0 || strcmp(reco,"s") == 0){ // PARA VALIDAR SI ES CORRECTO EL VALOR DE ENTRADA
                opcion11:
                recomendaciones ();
                cin >> reco2; cout << endl;

                if (reco2 < 1 || reco2 > 6){
                    cout << "Valor ingresado es incorrecto" << endl; goto opcion11;
                }

                switch (reco2){
                    case 1:
                    reco_calorias ();
                    break;

                    case 2:
                    reco_proteinas ();
                    break;

                    case 3:
                    reco_calcio ();
                    break;

                    case 4:
                    reco_VA ();
                    break;

                    case 5:
                    reco_VC ();
                    break;

                    case 6:
                    reco_calorias (); cout << endl;
                    reco_proteinas (); cout << endl;
                    reco_calcio (); cout << endl;
                    reco_VA (); cout << endl;
                    reco_VC (); cout << endl;
                    break;
                }
                goto opcion;
            }// PROBLEMA VALIDANDO AQUI CON "n"
            else if (strcmp(reco,"S") == 1 || strcmp(reco,"s") == 1 || strcmp(reco,"N") == 1 || strcmp(reco,"n") == 1){ // SI EL VALOR INGRESADO ES DISTINTO, SE IGUALA A 1
                cout << "Valor ingresado es incorrecto";
                goto opcion;
            }

            dia++;
        }
    }

    // NUTRICION DE 7 A 10 AÑOS
    if (edad >= 7 and edad <= 10){
        while (dia <= 30){
            cout << "DIA " << dia; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> peso;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; // FALTA ESPECIFICAR AQUI
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prote;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calci;
            cout << "Vitamina A: "; cin >> A; // FALTA ESPECIFICAR AQUI
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;

            cout << "RESULTADOS DEL DIA "<< dia << endl;
            cout << ps (peso, estatura, sexo) << endl;
            cout << calorias (calo, edad, sexo) << endl;
            cout << proteinas (prote, edad, sexo) << endl;
            cout << calcio (calci, edad, sexo) << endl;
            cout << VA (A, edad, sexo) << endl;
            cout << VC (C, edad, sexo) << endl << endl;

            opcion2:
            cout << endl;
            cout << "¿Desea ver recomendaciones sobre los alimentos que contienen los distintos nutrientes evaluados en el progroma de nutricion? (S/N)" << endl;
            cout << "Respuesta: "; cin >> reco; cout << endl;

            if (strcmp(reco,"S") == 0 || strcmp(reco,"s") == 0){
                opcion22:
                recomendaciones ();
                cin >> reco2; cout << endl;

                if (reco2 < 1 || reco2 > 6){
                    cout << "Valor ingresado es incorrecto" << endl; goto opcion22;
                }

                switch (reco2){
                    case 1:
                    reco_calorias ();
                    break;

                    case 2:
                    reco_proteinas ();
                    break;

                    case 3:
                    reco_calcio ();
                    break;

                    case 4:
                    reco_VA ();
                    break;

                    case 5:
                    reco_VC ();
                    break;

                    case 6:
                    reco_calorias (); cout << endl;
                    reco_proteinas (); cout << endl;
                    reco_calcio (); cout << endl;
                    reco_VA (); cout << endl;
                    reco_VC (); cout << endl;
                    break;
                }
                goto opcion2;
            }
            else if (strcmp(reco,"S") == 1 || strcmp(reco,"s") == 1 ||strcmp(reco,"N") == 1 || strcmp(reco,"n") == 1){
                cout << "Valor ingresado es incorrecto";
                goto opcion2;
            }

            dia++;
        }
    }

    // NUTRICION 11 A 14 AÑOS
    if (edad >= 11 and edad <= 14){
        while (dia <= 30){
            cout << "DIA " << dia; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> peso;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; // FALTA ESPECIFICAR AQUI
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prote;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calci;
            cout << "Vitamina A: "; cin >> A; // FALTA ESPECIFICAR AQUI
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;

            cout << "RESULTADOS DEL DIA "<< dia << endl;
            cout << ps (peso, estatura, sexo) << endl;
            cout << calorias (calo,edad, sexo) << endl;
            cout << proteinas (prote, edad, sexo) << endl;
            cout << calcio (calci, edad, sexo) << endl;
            cout << VA (A, edad, sexo) << endl;
            cout << VC (C, edad, sexo) << endl << endl;

            opcion3:
            cout << endl;
            cout << "¿Desea ver recomendaciones sobre los alimentos que contienen los distintos nutrientes evaluados en el progroma de nutricion? (S/N)" << endl;
            cout << "Respuesta: "; cin >> reco; cout << endl;

            if (strcmp(reco,"S") == 0 || strcmp(reco,"s") == 0){
                opcion33:
                recomendaciones ();
                cin >> reco2; cout << endl;

                if (reco2 < 1 || reco2 > 6){
                    cout << "Valor ingresado es incorrecto" << endl; goto opcion33;
                }

                switch (reco2){
                    case 1:
                    reco_calorias ();
                    break;

                    case 2:
                    reco_proteinas ();
                    break;

                    case 3:
                    reco_calcio ();
                    break;

                    case 4:
                    reco_VA ();
                    break;

                    case 5:
                    reco_VC ();
                    break;

                    case 6:
                    reco_calorias (); cout << endl;
                    reco_proteinas (); cout << endl;
                    reco_calcio (); cout << endl;
                    reco_VA (); cout << endl;
                    reco_VC (); cout << endl;
                    break;
                }
                goto opcion3;
            }
            else if (strcmp(reco,"S") == 1 || strcmp(reco,"s") == 1 ||strcmp(reco,"N") == 1 || strcmp(reco,"n") == 1){
                cout << "Valor ingresado es incorrecto";
                goto opcion3;
            }

            dia++;
        }
    }

    // NUTRICION 15 A 18 AÑOS
    if (edad >= 15 and edad <= 18){
        while (dia <= 30){
            cout << "DIA " << dia; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> peso;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; // FALTA ESPECIFICAR AQUI
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prote;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calci;
            cout << "Vitamina A: "; cin >> A; // FALTA ESPECIFICAR AQUI
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;

            cout << "RESULTADOS DEL DIA "<< dia << endl;
            cout << ps (peso, estatura, sexo) << endl;
            cout << calorias (calo,edad, sexo) << endl;
            cout << proteinas (prote, edad, sexo) << endl;
            cout << calcio (calci, edad, sexo) << endl;
            cout << VA (A, edad, sexo) << endl;
            cout << VC (C, edad, sexo) << endl << endl;

            opcion4:
            cout << endl;
            cout << "¿Desea ver recomendaciones sobre los alimentos que contienen los distintos nutrientes evaluados en el progroma de nutricion? (S/N)" << endl;
            cout << "Respuesta: "; cin >> reco; cout << endl;

            if (strcmp(reco,"S") == 0 || strcmp(reco,"s") == 0){
                opcion44:
                recomendaciones ();
                cin >> reco2; cout << endl;

                if (reco2 < 1 || reco2 > 6){
                    cout << "Valor ingresado es incorrecto" << endl; goto opcion44;
                }

                switch (reco2){
                    case 1:
                    reco_calorias ();
                    break;

                    case 2:
                    reco_proteinas ();
                    break;

                    case 3:
                    reco_calcio ();
                    break;

                    case 4:
                    reco_VA ();
                    break;

                    case 5:
                    reco_VC ();
                    break;

                    case 6:
                    reco_calorias (); cout << endl;
                    reco_proteinas (); cout << endl;
                    reco_calcio (); cout << endl;
                    reco_VA (); cout << endl;
                    reco_VC (); cout << endl;
                    break;
                }
                goto opcion4;
            }
            else if (strcmp(reco,"S") == 1 || strcmp(reco,"s") == 1 ||strcmp(reco,"N") == 1 || strcmp(reco,"n") == 1){
                cout << "Valor ingresado es incorrecto";
                goto opcion4;
            }

            dia++;
        }
    }

    // NUTRICION 19 A 24 AÑOS
    if (edad >= 19 and edad <= 24){
        while (dia <= 30){
            cout << "DIA " << dia; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> peso;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; // FALTA ESPECIFICAR AQUI
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prote;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calci;
            cout << "Vitamina A: "; cin >> A; // FALTA ESPECIFICAR AQUI
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;

            cout << "RESULTADOS DEL DIA "<< dia << endl;
            cout << ps (peso, estatura, sexo) << endl;
            cout << calorias (calo,edad, sexo) << endl;
            cout << proteinas (prote, edad, sexo) << endl;
            cout << calcio (calci, edad, sexo) << endl;
            cout << VA (A, edad, sexo) << endl;
            cout << VC (C, edad, sexo) << endl << endl;

            opcion5:
            cout << endl;
            cout << "¿Desea ver recomendaciones sobre los alimentos que contienen los distintos nutrientes evaluados en el progroma de nutricion? (S/N)" << endl;
            cout << "Respuesta: "; cin >> reco; cout << endl;

            if (strcmp(reco,"S") == 0 || strcmp(reco,"s") == 0){
                opcion55:
                recomendaciones ();
                cin >> reco2; cout << endl;

                if (reco2 < 1 || reco2 > 6){
                    cout << "Valor ingresado es incorrecto" << endl; goto opcion55;
                }

                switch (reco2){
                    case 1:
                    reco_calorias ();
                    break;

                    case 2:
                    reco_proteinas ();
                    break;

                    case 3:
                    reco_calcio ();
                    break;

                    case 4:
                    reco_VA ();
                    break;

                    case 5:
                    reco_VC ();
                    break;

                    case 6:
                    reco_calorias (); cout << endl;
                    reco_proteinas (); cout << endl;
                    reco_calcio (); cout << endl;
                    reco_VA (); cout << endl;
                    reco_VC (); cout << endl;
                    break;
                }
                goto opcion5;
            }
            else if (strcmp(reco,"S") == 1 || strcmp(reco,"s") == 1 ||strcmp(reco,"N") == 1 || strcmp(reco,"n") == 1){
                cout << "Valor ingresado es incorrecto";
                goto opcion5;
            }

            dia++;
        }
    }

    // NUTRICION 25 A 50 AÑOS
    if (edad >= 25 and edad <= 50){
        while (dia <= 30){
            cout << "DIA " << dia; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> peso;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; // FALTA ESPECIFICAR AQUI
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prote;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calci;
            cout << "Vitamina A: "; cin >> A; // FALTA ESPECIFICAR AQUI
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;

            cout << "RESULTADOS DEL DIA "<< dia << endl;
            cout << ps (peso, estatura, sexo) << endl;
            cout << calorias (calo,edad, sexo) << endl;
            cout << proteinas (prote, edad, sexo) << endl;
            cout << calcio (calci, edad, sexo) << endl;
            cout << VA (A, edad, sexo) << endl;
            cout << VC (C, edad, sexo) << endl << endl;

            opcion6:
            cout << endl;
            cout << "¿Desea ver recomendaciones sobre los alimentos que contienen los distintos nutrientes evaluados en el progroma de nutricion? (S/N)" << endl;
            cout << "Respuesta: "; cin >> reco; cout << endl;

            if (strcmp(reco,"S") == 0 || strcmp(reco,"s") == 0){
                opcion66:
                recomendaciones ();
                cin >> reco2; cout << endl;

                if (reco2 < 1 || reco2 > 6){
                    cout << "Valor ingresado es incorrecto" << endl; goto opcion66;
                }

                switch (reco2){
                    case 1:
                    reco_calorias ();
                    break;

                    case 2:
                    reco_proteinas ();
                    break;

                    case 3:
                    reco_calcio ();
                    break;

                    case 4:
                    reco_VA ();
                    break;

                    case 5:
                    reco_VC ();
                    break;

                    case 6:
                    reco_calorias (); cout << endl;
                    reco_proteinas (); cout << endl;
                    reco_calcio (); cout << endl;
                    reco_VA (); cout << endl;
                    reco_VC (); cout << endl;
                    break;
                }
                goto opcion6;
            }
            else if (strcmp(reco,"S") == 1 || strcmp(reco,"s") == 1 ||strcmp(reco,"N") == 1 || strcmp(reco,"n") == 1){
                cout << "Valor ingresado es incorrecto";
                goto opcion6;
            }

            dia++;
        }
    }

    return 0;
}

// FUNCION PARA EL PESO (EN GENERAL)
char ps (float peso, float estatura, char sexo[1]){
    // PESO FEMENINO
    if (strcmp(sexo,"F") == 0 || strcmp(sexo,"f") == 0){ // PARA VALIDAR SI EL VALOR INGRESADO ES CORRECTO
        if (estatura >= 1.01 and estatura < 1.20){
            if (peso >= 15 and peso <= 20){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 15){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 20){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.20 and estatura < 1.32){
            if (peso >= 23 and peso <= 30){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 23){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 30){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.32 and estatura < 1.47){
            if (peso >= 32 and peso <= 40){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 32){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 40){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.47 and estatura < 1.50){
            if (peso >= 44 and peso <= 49){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 44){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 49){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.50 and estatura < 1.52){
            if (peso >= 45 and peso <= 50){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 45){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 50){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.52 and estatura < 1.55){
            if (peso >= 46 and peso <= 51){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 46){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 51){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.55 and estatura < 1.57){
            if (peso >= 47 and peso <= 53){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 47){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 53){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.57 and estatura < 1.60){
            if (peso >= 49 and peso <= 54){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 49){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 54){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.60 and estatura < 1.62){
            if (peso >= 50 and peso <= 56){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 50){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 56){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.62 and estatura < 1.65){
            if (peso >= 51 and peso <= 57){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 51){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 57){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.65 and estatura < 1.68){
            if (peso >= 53 and peso <= 59){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 53){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 59){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.68 and estatura < 1.70){
            if (peso >= 55 and peso <= 61){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 55){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 61){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.70 and estatura < 1.73){
            if (peso >= 56 and peso <= 63){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 56){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 63){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.73 and estatura < 1.75){
            if (peso >= 58 and peso <= 65){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 58){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 65){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.75 and estatura < 1.78){
            if (peso >= 60 and peso <= 67){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 60){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 67){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.78 and estatura < 1.80){
            if (peso >= 62 and peso <= 69){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 62){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 69){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.80 and estatura < 1.83){
            if (peso >= 64 and peso <= 71){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 64){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 71){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.83){
            if (peso >= 66 and peso <= 73){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 66){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 73){
                cout << "Su peso excede el rango recomendado";
            }
        }
    }
    // PESO MASCULINO
    if (strcmp(sexo,"M") == 0 || strcmp(sexo,"m") == 0){ // PARA VALIDAR SI EL VALOR INGRESADO ES CORRECTO
        if (estatura >= 1.02 and estatura < 1.20){
            if (peso >= 16 and peso <= 21){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 16){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 21){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.20 and estatura < 1.31){
            if (peso >= 23 and peso <= 28){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 23){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 28){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.31 and estatura < 1.41){
            if (peso >= 28 and peso <= 36){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 28){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 36){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.41 and estatura < 1.57){
            if (peso >= 36 and peso <= 46){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 36){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 46){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.57 and estatura < 1.60){
            if (peso >= 54 and peso <= 59){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 54){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 59){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.60 and estatura < 1.62){ // AQUI
            if (peso >= 55 and peso <= 60){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 55){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 60){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.62 and estatura < 1.65){
            if (peso >= 56 and peso <= 62){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 56){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 62){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.65 and estatura < 1.68){
            if (peso >= 58 and peso <= 63){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 58){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 63){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.68 and estatura < 1.70){
            if (peso >= 59 and peso <= 65){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 59){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 65){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.70 and estatura < 1.73){
            if (peso >= 61 and peso <= 67){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 61){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 67){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.73 and estatura < 1.75){
            if (peso >= 63 and peso <= 69){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 63){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 69){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.75 and estatura < 1.78){
            if (peso >= 65 and peso <= 71){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 65){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 71){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.78 and estatura < 1.80){
            if (peso >= 66 and peso <= 73){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 66){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 73){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.80 and estatura < 1.83){
            if (peso >= 68 and peso <= 75){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 68){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 75){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.83 and estatura < 1.85){
            if (peso >= 70 and peso <= 77){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 70){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 77){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.85 and estatura < 1.88){
            if (peso >= 72 and peso <= 80){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 72){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 80){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.88 and estatura < 1.90){
            if (peso >= 74 and peso <= 82){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 74){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 82){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.90 and estatura < 1.93){
            if (peso >= 76 and peso <= 84){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 76){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 84){
                cout << "Su peso excede el rango recomendado";
            }
        }
        else if (estatura >= 1.93){
            if (peso >= 78 and peso <= 86){
                cout << "Su peso esta en el rango recomendado";
            }
            else if (peso < 78){
                cout << "Su peso es menor al rango recomendado";
            }
            else if (peso > 86){
                cout << "Su peso excede el rango recomendado";
            }
        }
    }
}

// FUNCION PARA LAS CALORIAS (EN GENERAL)
char calorias (int calo, int edad, char sexo[1]){
    // AMBOS SEXOS DE 4 A 6
    if (edad >= 4 and edad <= 6){
        if (calo >= 1200 and calo <= 1400){
            cout << "El consumo de calorias esta en el rango recomendado";
        }
        else if (calo < 1200){
            cout << "El consumo de calorias es menor al rango recomendado";
        }
        else if (calo > 1400){
            cout << "El consumo de calorias excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 7 A 10
    if (edad >= 7 and edad <= 10){
        if (calo >= 1400 and calo <= 1600){
            cout << "El consumo de calorias esta en el rango recomendado";
        }
        else if (calo < 1400){
            cout << "El consumo de calorias es menor al rango recomendado";
        }
        else if (calo > 1600){
            cout << "El consumo de calorias excede el rango recomendado";
        }
    }

    // DE 11 A 14
    if (edad >= 11 and edad <= 14){
        if (strcmp (sexo,"M") == 0){
            if (calo >= 1600 and calo <= 2000){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 1600){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2000){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (calo >= 1600 and calo <= 1800){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 1600){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 1800){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
        
    }

    // DE 15 A 18
    if (edad >= 15 and edad <= 18){
        if (strcmp (sexo,"M") == 0){
            if (calo >= 2000 and calo <= 2400){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 2000){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2400){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (calo >= 1600 and calo <= 1800){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 1600){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 1800){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
    }

    // DE 19 A 24
    if (edad >= 19 and edad <= 24){
        if (strcmp (sexo,"M") == 0){
            if (calo >= 2400 and calo <= 2600){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 2400){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2600){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (calo >= 1800 and calo <= 2000){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 1800){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2000){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
    }

    // DE 25 A 35
    if (edad >= 25 and edad <= 35){
        if (strcmp (sexo,"M") == 0){
            if (calo >= 2400 and calo <= 2600){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 2400){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2600){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (calo >= 1800 and calo <= 2000){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 1800){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2000){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
    }

    // DE 35 A 50
    if (edad >= 35 and edad <= 50){
        if (strcmp (sexo,"M") == 0){
            if (calo >= 2200 and calo <= 2400){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 2200){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 2400){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (calo >= 1700 and calo <= 1800){
                cout << "El consumo de calorias esta en el rango recomendado";
            }
            else if (calo < 1700){
                cout << "El consumo de calorias es menor al rango recomendado";
            }
            else if (calo > 1800){
                cout << "El consumo de calorias excede el rango recomendado";
            }
        }
    }
}

// FUNCION PARA LAS PROTEINAS (EN GENERAL)
char proteinas (int prote, int edad, char sexo[1]){
    // AMBOS SEXOS DE 4 A 6
    if (edad >= 4 and edad <= 6){
        if (prote >= 420 and prote <= 440){
            cout << "El consumo de proteinas esta en el rango recomendado";
        }
        else if (prote < 420){
            cout << "El consumo de proteinas es menor al rango recomendado"; 
        }
        else if (prote > 440){
            cout << "El consumo de proteinas excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 7 A 10
    if (edad >= 7 and edad <= 10){
        if (prote >= 420 and prote <= 440){
            cout << "El consumo de proteinas esta en el rango recomendado";
        }
        else if (prote < 420){
            cout << "El consumo de proteinas es menor al rango recomendado";
        }
        else if (prote > 440){
            cout << "El consumo de proteinas excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 11 A 14
    if (edad >= 11 and edad <= 14){
        if (prote >= 600 and prote <= 640){
            cout << "El consumo de proteinas esta en el rango recomendado";
        }
        else if (prote < 600){
            cout << "El consumo de proteinas es menor al rango recomendado";
        }
        else if (prote > 640){
            cout << "El consumo de proteinas excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 15 A 18
    if (edad >= 15 and edad <= 18){
        if (prote >= 600 and prote <= 640){
            cout << "El consumo de proteinas esta en el rango recomendado";
        }
        else if (prote < 600){
            cout << "El consumo de proteinas es menor al rango recomendado";
        }
        else if (prote > 640){
            cout << "El consumo de proteinas excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 19 A 24
    if (edad >= 19 and edad <= 24){
        if (prote >= 500 and prote <= 550){
            cout << "El consumo de proteinas esta en el rango recomendado";
        }
        else if (prote < 500){
            cout << "El consumo de proteinas es menor al rango recomendado";
        }
        else if (prote > 550){
            cout << "El consumo de proteinas excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 25 A 50
    if (edad >= 25 and edad <= 50){
        if (prote >= 500 and prote <= 550){
            cout << "El consumo de proteinas esta en el rango recomendado";
        }
         else if (prote < 500){
            cout << "El consumo de proteinas es menor al rango recomendado";
        }
        else if (prote > 550){
            cout << "El consumo de proteinas excede el rango recomendado";
        }
    }
}

// FUNCION PARA EL CALCIO (EN GENERAL)
char calcio (int calci, int edad, char sexo[1]){
    // AMBOS SEXOS DE 4 A 6
    if (edad >= 4 and edad <= 6){
        if (calci >= 750 and calci <= 800){
            cout << "El consumo de calcio esta en el rango recomendado";
        }
        else if (calci < 750){
            cout << "El consumo de calcio es menor al rango recomendado";
        }
        else if (calci > 800){
            cout << "El consumo de calcio excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 7 A 10
    if (edad >= 7 and edad <= 10){
        if (calci >= 750 and calci <= 800){
            cout << "El consumo de calcio esta en el rango recomendado";
        }
        else if (calci < 750){
            cout << "El consumo de calcio es menor al rango recomendado";
        }
        else if (calci > 800){
            cout << "El consumo de calcio excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 11 A 14
    if (edad >= 11 and edad <= 14){
        if (calci >= 1100 and calci <= 1150){
            cout << "El consumo de calcio esta en el rango recomendado";
        }
        else if (calci < 1100){
            cout << "El consumo de calcio es menor al rango recomendado";
        }
        else if (calci > 1150){
            cout << "El consumo de calcio excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 15 A 18
    if (edad >= 15 and edad <= 18){
        if (calci >= 1100 and calci <= 1150){
            cout << "El consumo de calcio esta en el rango recomendado";
        }
        else if (calci < 1100){
            cout << "El consumo de calcio es menor al rango recomendado";
        }
        else if (calci > 1150){
            cout << "El consumo de calcio excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 19 A 25
    if (edad >= 19 and edad <= 25){
        if (calci >= 900 and calci <= 1000){
            cout << "El consumo de calcio esta en el rango recomendado";
        }
        else if (calci < 900){
            cout << "El consumo de calcio es menor al rango recomendado";
        }
        else if (calci > 1000){
            cout << "El consumo de calcio excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 25 A 50
    if (edad >= 25 and edad <= 50){
        if (calci >= 900 and calci <= 950){
            cout << "El consumo de calcio esta en el rango recomendado";
        }
        else if (calci < 900){
            cout << "El consumo de calcio es menor al rango recomendado";
        }
        else if (calci > 950){
            cout << "El consumo de calcio excede el rango recomendado";
        }
    }
}

// FUNCION PARA VITAMINA A (EN GENERAL)
char VA (int A, int edad, char sexo[1]){
    // AMBOS SEXOS DE 4 A 6
    if (edad >= 4 and edad <= 6){
        if (A >= 250 and A <= 300){
            cout << "El consumo de vitamina A esta en el rango recomendado";
        }
        else if (A < 250){
            cout << "El consumo de vitamina A es menor al rango recomendado";
        }
        else if (A > 300){
            cout << "El consumo de vitamina A excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 7 A 10
    if (edad >= 7 and edad <= 10){
        if (A >= 350 and A <= 400){
            cout << "El consumo de vitamina A esta en el rango recomendado";
        }
        else if (A < 350){
            cout << "El consumo de vitamina A es menor al rango recomendado";
        }
        else if (A > 400){
            cout << "El consumo de vitamina A excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 11 A 14
    if (edad >= 11 and edad <= 14){
        if (A >= 550 and A <= 600){
            cout << "El consumo de vitamina A esta en el rango recomendado";
        }
        else if (A < 550){
            cout << "El consumo de vitamina A es menor al rango recomendado";
        }
        else if (A > 600){
            cout << "El consumo de vitamina A excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 15 A 18
    if (edad >= 15 and edad <= 18){
        if (strcmp (sexo,"M") == 0){
            if (A >= 700 and A <= 750){
                cout << "El consumo de vitamina A esta en el rango recomendado";
            }
            else if (A < 700){
                cout << "El consumo de vitamina A es menor al rango recomendado";
            }
            else if (A > 750){
                cout << "El consumo de vitamina A excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (A >= 600 and A <= 650){
                cout << "El consumo de vitamina A esta en el rango recomendado";
            }
            else if (A < 600){
                cout << "El consumo de vitamina A es menor al rango recomendado";
            }
            else if (A > 650){
                cout << "El consumo de vitamina A excede el rango recomendado";
            }
        }
    }

    // DE 19 A 50
    if (edad >= 19 and edad <= 50){
        if (strcmp (sexo,"M") == 0){
            if (A >= 700 and A <= 750){
                cout << "El consumo de vitamina A esta en el rango recomendado";
            }
            else if (A < 700){
                cout << "El consumo de vitamina A es menor al rango recomendado";
            }
            else if (A > 750){
                cout << "El consumo de vitamina A excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (A >= 600 and A <= 650){
                cout << "El consumo de vitamina A esta en el rango recomendado";
            }
            else if (A < 600){
                cout << "El consumo de vitamina A es menor al rango recomendado";
            }
            else if (A > 650){
                cout << "El consumo de vitamina A excede el rango recomendado";
            }
        }
    }
}


// FUNCION PARA VITAMINA C (EN GENERAL)
char VC (int C, int edad, char sexo[1]){
    // AMBOS SEXOS DE 4 A 6
    if (edad >= 4 and edad <= 6){
        if (C >= 25 and C <= 30){
            cout << "El consumo de vitamina C esta en el rango recomendado";
        }
        else if (C < 25){
            cout << "El consumo de vitamina C es menor al rango recomendado";
        }
        else if (C > 30){
            cout << "El consumo de vitamina C excede el rango recomendado";
        }
    }

    // AMBOS SEXOS DE 7 A 10
    if (edad >= 7 and edad <= 10){
        if (C >= 40 and C <= 45){
            cout << "El consumo de vitamina C esta en el rango recomendado";
        }
        else if (C < 40){
            cout << "El consumo de vitamina C es menor al rango recomendado";
        }
        else if (C > 45){
            cout << "El consumo de vitamina C excede el rango recomendado";
        }
    }

     // AMBOS SEXOS DE 11 A 14
    if (edad >= 11 and edad <= 14){
        if (C >= 65 and C <= 70){
            cout << "El consumo de vitamina C esta en el rango recomendado";
        }
        else if (C < 65){
            cout << "El consumo de vitamina C es menor al rango recomendado";
        }
        else if (C > 70){
            cout << "El consumo de vitamina C excede el rango recomendado";
        }
    }

    // DE 15 A 18
    if (edad >= 15 and edad <= 18){
        if (strcmp (sexo,"M") == 0){
            if (C >= 95 and C <= 100){
                cout << "El consumo de vitamina C esta en el rango recomendado";
            }
            else if (C < 95){
                cout << "El consumo de vitamina C es menor al rango recomendado";
            }
            else if (C > 100){
                cout << "El consumo de vitamina C excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (C >= 85 and C <= 90){
                cout << "El consumo de vitamina C esta en el rango recomendado";
            }
            else if (C < 85){
                cout << "El consumo de vitamina C es menor al rango recomendado";
            }
            else if (C > 90){
                cout << "El consumo de vitamina C excede el rango recomendado";
            }
        }
    }

    // DE 19 A 50
    if (edad >= 19 and edad <= 50){
        if (strcmp (sexo,"M") == 0){
            if (C >= 105 and C <= 110){
                cout << "El consumo de vitamina C esta en el rango recomendado";
            }
            else if (C < 105){
                cout << "El consumo de vitamina C es menor al rango recomendado";
            }
            else if (C > 110){
                cout << "El consumo de vitamina C excede el rango recomendado";
            }
        }
        else if (strcmp (sexo,"F") == 0){
            if (C >= 80 and C <= 95){
                cout << "El consumo de vitamina C esta en el rango recomendado";
            }
            else if (C < 80){
                cout << "El consumo de vitamina C es menor al rango recomendado";
            }
            else if (C > 95){
                cout << "El consumo de vitamina C excede el rango recomendado";
            }
        }
    }
}

// RECOMENDACIONES
void recomendaciones (){
    cout << "Ingrese el numero de la derecha acorde a la opcion que sea de su preferencia" << endl;
    cout << "1. Calorias" << endl << "2. Proteinas" << endl << "3. Calcio" << endl << "4. Vitamina A" << endl << "5. Vitamina C" << endl << "6. Todos" << endl;
    cout << "Opcion: ";
}

// RECOMENDACIONES CALORIAS
void reco_calorias (){
    cout << "Los alimentos ricos en calorias saludables son:" << endl;
    cout << "- Aguacate" << endl << "- Chocolate negro" << endl << "- Aceitunas negras" << endl << "- Nueces" << endl << "- Platano" << endl << "- Pasas" << endl << "- Garbanzos" << endl;
}

// RECOMENDACIONES PROTEINAS
void reco_proteinas (){
    cout << "Los alimentos ricos en proteinas son:" << endl;
    cout << "- Cacahuates" << endl << "- Leche" << endl << "- Soja" << endl << "- Salmon" << endl << "- Pechuga de pavo y de pollo" << endl << "- Huevos" << endl << "- Yogur griego" << endl;
}

// RECOMENDACIONES CALCIO
void reco_calcio (){
    cout << "Los alimentos ricos en calcio son:" << endl;
    cout << "- Quesos" << endl << "- Leche" << endl << "- Yogures" << endl << "- Sardina" << endl << "- Brocoli" << endl << "- Higo seco" << endl << "- Almendras" << endl; 
}

// RECOMENDACIONES VITAMINA A
void reco_VA (){
    cout << "Los alimentos ricos en vitamina A son:" << endl;
    cout << "- Tomates" << endl << "- Zanahorias" << endl << "- Espinacas" << endl << "- Higado de cerdo, ternera o vaca" << endl << "- Leche" << endl << "- Melon" << endl << "- Albaricoque" << endl;
}

// RECOMENDACIONES VITAMINA C
void reco_VC (){
    cout << "Los alimentos ricos en vitamina C son:" << endl;
    cout << "- Pimientos rojos y verdes" << endl << "- Jugos de citricos, como las naranjas" << endl << "- Frutas: kiwi, mango, papaya" << endl << "- Verduras: brocoli, coles de Bruselas y coliflor" << endl << "- Perejil" << endl << "- Bulbo de hinojo" << endl;
}