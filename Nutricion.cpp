#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <ctime>
#include <fstream>
using namespace std;
            
            //fecha y hora de equipo
            time_t now = time(0);
   
            //fecha y hora a char
            char* dt = ctime(&now);

// PARA CALCULOS
int edad=0;
float est=0;
string per,sex;
char data[4];
string line;
string date(dt);
float wt=0,calo=0,prot=0,calc=0,A=0,C=0;
string arc = date + ".txt";

void menu1(){
    cout << "Bienvenido" << endl;
    cout << "Programa nutricional de un mes" << endl;
    cout << "Ingrese su nombre: "; cin >> per;
    cout << "Ingrese su edad : "; cin >> edad;
    cout << "Ingrese su estatura (en metros): "; cin >> est;
    cout << "Sexo (F/M): "; cin >> sex;
    cout << endl;
    
    ofstream plog("p_log.txt");
    if(plog.is_open()){
        plog<<"Nombre: "<<per<<endl;
        plog<<"Edad: "<<edad<<endl;
        plog<<"Estatura: "<<est<<endl;
        plog<<"Sexo: "<<sex<<endl;
        plog.close();
    }
}

void menu2(){
     cout << "DIA " << date; cout << endl;
            cout << "Ingrese su peso (en kg): "; cin >> wt;
            cout << "Ingrese la cantidad de calorias consumidas: "; cin >> calo; 
            cout << "Ingrese la cantidad de proteinas (mg) consumidas: "; cin >> prot;
            cout << "Ingrese la cantidad de calcio (mg) consumido: "; cin >> calc;
            cout << "Vitamina A: "; cin >> A; 
            cout << "Vitamina C (mg): "; cin >> C;
            cout << endl;
}
/*
void entrada(){
            ofstream login("logs.txt");
            login.​open​​("logs.txt​",​​ios​::​app​);
            
            login.​close​();
}
*/



int main(){
    
    //dteccion de p_log.txt
    ifstream plog("p_log.txt");
    if(plog.is_open()){
        while (getline(plog,line)){
            cout<<line<<endl;
        }
    
        if(plog.eof()){
        cout<<"Sesión iniciada correctamente"<<endl;
        menu2();
        }
        plog.close();
    }
    else menu1();
    
    ofstream login;
    login.open("logs.txt", ios::app);
    login<<wt<<endl;
    login<<calo<<endl;
    login<<prot<<endl;
    login<<calc<<endl;
            login<<A<<endl;
            login<<C<<endl;
            login.close();





return 0;    
}