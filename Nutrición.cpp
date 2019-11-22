#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <chrono>
#include <ctime>
#include <sstream>
#include <cstring>
using namespace std;

//DATOS SE CALCULO
    float calo=0,calc=0,A=0,C=0,ht=0,wt=0,prot=0;
    int ag=0,buffer=10;
    string name,arcname=name+".txt";
    char sx[1];
    string auxt[4];
//HORA DE REGISTRO:
    time_t now = time(0);
    char* dt = ctime(&now);
//FUNCIONES DE CREACION DE ARCHIVOS:
    void p_registros(){
        ofstream usuarios("sign_in.txt");
        if(usuarios.is_open()){
            usuarios<<"REGISTRO DE CLIENTES:"<<endl;
            usuarios<<endl;
            usuarios.close();
        }
        
        usuarios.open("sign_in.txt",ios::app);
        usuarios<<"Nombre: "<<" Fecha de registro: "<<endl;
        usuarios<<name<<"   "<<dt<<endl;
        usuarios.close();
    }
//FUNCIONES DE MODIFICACION DE ARCHIVOS
//DATOS DE INICIO
    void menu_ingresos(){
        cout<<"Nombre: ";cin>>name;cout<<endl;
        cout<<"Edad: ";cin>>ag;cout<<endl;
        cout<<"Peso: ";cin>>wt;cout<<endl;
        cout<<"Estatura: ";cin>>ht;cout<<endl;
        cout<<"Sexo: ";cin>>sx;cout<<endl;
    
//ARCHIVOS DE LECTURA
    ofstream a_log(name+".txt");
    if(a_log.is_open()){
        a_log<<"Archivo de "<<name<<endl;
        a_log<<"Fecha de registro: "<<dt<<endl;
        a_log<<"Edad: "<<ag<<endl;
        a_log<<"Peso: "<<wt<<endl;
        a_log<<"Estatura: "<<ht<<endl;
        a_log<<"Sexo: "<<sx<<endl;
        a_log<<endl;
    a_log.close();
    }
//ARCHIVOS AUXILIARES (PARA CALCULOS)
    ofstream auxlog("aux"+name+".txt");
        auxlog<<ag<<endl;
        auxlog<<sx<<endl;
        auxlog<<wt<<endl;
        auxlog<<ht<<endl;
    auxlog.close();
    }
//DATOS NORMALES
    void menu_sesion_s(){
        cout<<"usuario:"<<endl;
        cin>>name;
        int i=0;
        string line;
        
        cout<<"Bienvenido/a a la sesion de "<<name<<endl;
        
        ifstream auxlog("aux"+name+".txt");
        if(auxlog.is_open()){
            while(getline(auxlog,line)){
                auxt[i]=line;
                i++;
            }
            if(auxlog.eof()){
                cout<<"Success data"<<endl;
            }
            auxlog.close();
        }
    }
    void menu_sesion(){
        cout<<"usuario:"<<endl;
        cin>>name;
        int i=0;
        string line;
        
        cout<<"Bienvenido/a a la sesion de "<<name<<endl;
        cout<<"Registro de consumo de nutrientes de el dia: "<<endl;
        cout<<"Calorias: ";cin>>calo;cout<<endl;
        cout<<"Proteinas: ";cin>>prot;cout<<endl;
        cout<<"Calcio: ";cin>>calc;cout<<endl;
        cout<<"Vitamina A: ";cin>>A;cout<<endl;
        cout<<"Vitamina C: ";cin>>C;cout<<endl;
        ifstream auxlog("aux"+name+".txt");
        if(auxlog.is_open()){
            while(getline(auxlog,line)){
                auxt[i]=line;
                i++;
            }
            if(auxlog.eof()){
                cout<<"Inicio de sesion exitosa"<<endl;
            }
            auxlog.close();
        }
        ofstream a_log;
        a_log.open(name+".txt",ios::app);
            a_log<<endl;
            a_log<<"Record de consumo de nutrientes, sesion "<<dt<<endl;
            a_log<<endl;
            a_log<<"Calorias: "<<calo<<endl;
            a_log<<"Proteinas: "<<prot<<endl;
            a_log<<"Calcio: "<<calc<<endl;
            a_log<<"Vitamina A: "<<A<<endl;
            a_log<<"Vitamina C: "<<C<<endl;
            a_log<<endl;
        a_log.close();
            
}
//Lectura de archivos
    void arc_read(){
        string line;
        ifstream a_log(name+".txt");
        if(a_log.is_open()){
            while(getline(a_log,line)){
                cout<<line<<endl;
            }
        a_log.close();
        }
    }

//FUNCIONES DE RANGO

    
    //FUNCION DE PESO IDEAL
        void peso_MF(){
    // PESO FEMENINO
    if (strcmp(sx,"F") == 0 || strcmp(sx,"f") == 0){ // PARA VALIDAR SI EL VALOR INGRESADO ES CORRECTO
        if (ht >= 1.01 && ht < 1.20){
            cout << "Valor de peso ideal esta entre 15-20 Kg";
        }
        else if (ht >= 1.20 && ht < 1.32){
            cout << "Valor de peso ideal esta entre 23-30 Kg";
        }
        else if (ht >= 1.32 && ht < 1.47){
            cout << "Valor de peso ideal esta entre 32-40 Kg";
        }
        else if (ht >= 1.47 && ht < 1.50){
            cout << "Valor de peso ideal esta entre 44-49 Kg";
        }
        else if (ht >= 1.50 && ht < 1.52){
            cout << "Valor de peso ideal esta entre 45-50 Kg";
        }
        else if (ht >= 1.52 && ht < 1.55){
            cout << "Valor de peso ideal esta entre 46-51 Kg";
        }
        else if (ht >= 1.55 && ht < 1.57){
            cout << "Valor de peso ideal esta entre 47-53 Kg";
        }
        else if (ht >= 1.57 && ht < 1.60){
            cout << "Valor de peso ideal esta entre 49-54 Kg";
        }
        else if (ht >= 1.60 && ht < 1.62){
            cout << "Valor de peso ideal esta entre 50-56 Kg";
        }
        else if ((ht >= 1.62) && (ht <= 1.64)){
            cout << "Valor de peso ideal esta entre 51-57 Kg";
        }
        else if ((ht >= 1.65) && (ht <= 1.67)){
            cout << "Valor de peso ideal esta entre 53-59 Kg";
        }
        else if (ht >= 1.68 && ht < 1.70){
            cout << "Valor de peso ideal esta entre 55-61 Kg";
        }
        else if (ht >= 1.70 && ht < 1.73){
            cout << "Valor de peso ideal esta entre 56-63 Kg";
        }
        else if (ht >= 1.73 && ht < 1.75){
            cout << "Valor de peso ideal esta entre 58-65 Kg";
        }
        else if (ht >= 1.75 && ht < 1.78){
            cout << "Valor de peso ideal esta entre 60-67 Kg";
        }
        else if (ht >= 1.78 && ht < 1.80){
            cout << "Valor de peso ideal esta entre 62-69 Kg";
        }
        else if (ht >= 1.80 && ht < 1.83){
            cout << "Valor de peso ideal esta entre 64-71 Kg";
        }
        else if (ht >= 1.83){
            cout << "Valor de peso ideal esta entre 66-73 Kg";
        }
    }
        }
    // PESO MASCULINO
    void peso_MM(){
    if (strcmp(sx,"M") == 0 || strcmp(sx,"m") == 0){ // PARA VALIDAR SI EL VALOR INGRESADO ES CORRECTO
        if (ht >= 1.02 && ht < 1.20){
            cout << "Valor de peso ideal esta entre 16-21 Kg";
        }
        else if (ht >= 1.20 && ht < 1.31){
            cout << "Valor de peso ideal esta entre 23-28 Kg";
        }
        else if (ht >= 1.31 && ht < 1.41){
            cout << "Valor de peso ideal esta entre 28-36 Kg";
        }
        else if (ht >= 1.41 && ht < 1.57){
            cout << "Valor de peso ideal esta entre 36-46 Kg";
        }
        else if (ht >= 1.57 && ht < 1.60){
            cout << "Valor de peso ideal esta entre 54-59 Kg";
        }
        else if (ht >= 1.60 && ht < 1.62){
            cout << "Valor de peso ideal esta entre 55-60 Kg";
        }
        else if (ht >= 1.62 && ht < 1.65){
            cout << "Valor de peso ideal esta entre 56-62 Kg";
        }
        else if (ht >= 1.65 && ht < 1.68){
            cout << "Valor de peso ideal esta entre 58-63 Kg";
        }
        else if (ht >= 1.68 && ht < 1.70){
            cout << "Valor de peso ideal esta entre 59-65 Kg";
        }
        else if (ht >= 1.70 && ht < 1.73){
            cout << "Valor de peso ideal esta entre 61-67 Kg";
        }
        else if (ht >= 1.73 && ht < 1.75){
            cout << "Valor de peso ideal esta entre 63-69 Kg";
        }
        else if (ht >= 1.75 && ht < 1.78){
            cout << "Valor de peso ideal esta entre 65-71 Kg";
        }
        else if (ht >= 1.78 && ht < 1.80){
            cout << "Valor de peso ideal esta entre 66-73 Kg";
        }
        else if (ht >= 1.80 && ht < 1.83){
            cout << "Valor de peso ideal esta entre 68-75 Kg";
        }
        else if (ht >= 1.83 && ht < 1.85){
            cout << "Valor de peso ideal esta entre 70-77 Kg";
        }
        else if (ht >= 1.85 && ht < 1.88){
            cout << "Valor de peso ideal esta entre 72-80 Kg";
        }
        else if (ht >= 1.88 && ht < 1.90){
            cout << "Valor de peso ideal esta entre 74-82 Kg";
        }
        else if (ht >= 1.90 && ht < 1.93){
            cout << "Valor de peso ideal esta entre 76-84 Kg";
        }
        else if (ht >= 1.93){
            cout << "Valor de peso ideal esta entre 78-86 Kg";
        }
    }

        }

//FUNCIONES DE OPCION MACULINO:
    //FUNCION CALORIA DE M
        
       void mas_calo(){
            if(ag>=2 && ag<=3){
                if(calo>=800 && calo<=1200){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<800){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calo>1200){
                cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=8){
                if(calo>=1200 && calo<=1400){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<1200){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calo>1400){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>8 && ag<=13){
                if(calo>=1600 && calo<=2000){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<1600){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calo>2000){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>13 && ag<=18){
                if(calo>=2000 && calo<2400){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<2000){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calo>2400){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=30){
                if(calo>=2400 && calo<=2600){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<2400){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calo>2600){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>30 && ag<=50){
                if(calo>=2200 && calo<=2400){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<2200){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calo>2400){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }

    //FUNCION PROTEINA DE M
        void mas_prot(){
            if(ag>=1 && ag<=3){
                if(prot>=400 && prot<=500){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<400){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(prot>500){
                cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(prot>=750 && prot<=850){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(prot>=750 && prot<=850){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(prot>=590 && prot<690){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(prot>=590 && prot<=690){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=50){
                if(prot>=500 && prot<=600){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<500){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(prot>600){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION CALCIO DE M
        void mas_calc(){
            if(ag>=1 && ag<=3){
                if(calc>=400 && calc<=500){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<400){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calc>500){
                cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(calc>=750 && calc<=850){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(calc>=750 && calc<=850){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(calc>=1100 && calc<1200){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(calc>=1100 && calc<=1200){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(calc>=950 && calc<=1050){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<950){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calc>1050){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION VIT. A DE M
        void mas_A(){
            if(ag>=1 && ag<=3){
                if(A>=200 && A<=300){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<200){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(A>300){
                cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(A>=250 && A<=350){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<250){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(A>350){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(A>=350 && A<=450){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<350){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(A>450){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(A>=550 && A<650){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<550){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(A>650){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(A>=700 && A<=800){
                    cout<<"Esta en el rango optimo de vitamina A."<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<700){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(A>800){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(A>=600 && A<=700){
                    cout<<"Esta en el rango optimo de vitamina A "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A "<<endl;
                    a_log.close();
                }else
                if(A<600){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(A>700){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }


    //FUNCION VIT. C DE M
        void mas_c(){
            if(ag>=1 && ag<=3){
                if(C>=17 && C<=23){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<17){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(C>23){
                cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(C>=27 && C<=33){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<27){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(C>33){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(C>=42 && C<=47){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<42){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(C>47){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(C>=67 && C<73){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<67){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(C>73){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(C>=87 && C<=93){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<87){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(C>93){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(C>=107 && C<=113){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<107){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(C>113){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }

//FUNCIONES DE OPCION FEMENINO:
    //FUNCION CALORIA DE F
        
       void fem_calo(){
            if(ag>=1 && ag<=3){
                if(calo>=800 && calo<=1200){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<800){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calo>1200){
                cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=8){
                if(calo>=1200 && calo<=1400){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<1200){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calo>1400){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>8 && ag<=13){
                if(calo>=1400 && calo<=1600){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<1400){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calo>1600){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>13 && ag<=18){
                if(calo>=1600 && calo<2000){
                    cout<<"Esta en el rango optimo de calorias."<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<1600){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calo>2000){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>18 && ag<=30){
                if(calo>=2000 && calo<=2200){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<2000){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calo>2200){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>30 && ag<=50){
                if(calo>=1800 && calo<=2000){
                    cout<<"Esta en el rango optimo de calorias. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calorias. "<<endl;
                    a_log.close();
                }else
                if(calo<1800){
                    cout<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calorias de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calo>2000){
                    cout<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calorias de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }

    //FUNCION PROTEINA DE F
        void fem_prot(){
            if(ag>=1 && ag<=3){
                if(prot>=400 && prot<=500){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<400){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(prot>500){
                cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(prot>=750 && prot<=850){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(prot>=750 && prot<=850){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<750){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(prot>850){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(prot>=590 && prot<690){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(prot>=590 && prot<=690){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<590){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(prot>690){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(prot>=500 && prot<=600){
                    cout<<"Esta en el rango optimo de proteinas. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de proteinas. "<<endl;
                    a_log.close();
                }else
                if(prot<500){
                    cout<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos proteinas de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(prot>600){
                    cout<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas proteinas de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION CALCIO DE F
        void fem_calc(){
            if(ag>=1 && ag<=3){
                if(calc>=400 && calc<=500){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<400){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calc>500){
                cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(calc>=750 && calc<=850){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(calc>=750 && calc<=850){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<750){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calc>850){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(calc>=1100 && calc<1200){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(calc>=1100 && calc<=1200){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<1100){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(calc>1200){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(calc>=950 && calc<=1050){
                    cout<<"Esta en el rango optimo de calcio. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de calcio. "<<endl;
                    a_log.close();
                }else
                if(calc<950){
                    cout<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos calcio de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(calc>1050){
                    cout<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas calcio de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }
    //FUNCION VIT. A DE F
        void fem_A(){
            if(ag>=1 && ag<=3){
                if(A>=200 && A<=300){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<200){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(A>300){
                cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(A>=250 && A<=350){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<250){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(A>350){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(A>=350 && A<=450){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<350){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(A>450){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(A>=550 && A<650){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<550){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(A>650){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(A>=600 && A<=700){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<600){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(A>700){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(A>=600 && A<=700){
                    cout<<"Esta en el rango optimo de vitamina A. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina A. "<<endl;
                    a_log.close();
                }else
                if(A<600){
                    cout<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(A>700){
                    cout<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina A de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }


    //FUNCION VIT. C DE F 
        void fem_c(){
            if(ag>=1 && ag<=3){
                if(C>=17 && C<=23){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<17){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(C>23){
                cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else 
            if(ag>3 && ag<=6){
                if(C>=27 && C<=33){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<27){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(C>33){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>6 && ag<=10){
                if(C>=42 && C<=47){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<42){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(C>47){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>10 && ag<=14){
                if(C>=67 && C<73){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<67){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(C>73){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>14 && ag<=17){
                if(C>=97 && C<=103){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<97){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia."<<endl;
                    a_log.close();
                }else
                if(C>103){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }
            }else
            if(ag>17 && ag<=50){
                if(C>=90 && C<=95){
                    cout<<"Esta en el rango optimo de vitamina C. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta en el rango optimo de vitamina C. "<<endl;
                    a_log.close();
                }else
                if(C<90){
                    cout<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo menos vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                }else
                if(C>95){
                    cout<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    ofstream a_log;
                    a_log.open(name+".txt",ios::app);
                    a_log<<"Esta consumiendo mas vitamina C de lo que deberia. "<<endl;
                    a_log.close();
                    }
                }
            }

void NMoF(){
        stringstream age(auxt[0]);//SE USA CON PARAMETROS DE EDAD DE RANGOS DE NUTRIENTES
        age>>ag;
        stringstream hei(auxt[3]);
        hei>>ht;
        stringstream wei(auxt[2]);
        wei>>wt;
        strcpy(sx,auxt[1].c_str());
        switch (sx[0]){
            case 'M':
                mas_calo();
                mas_prot();
                mas_calc();
                mas_A();
                mas_c();
                break;
            case 'F':
                fem_calo();
                fem_prot();
                fem_calc();
                fem_A();
                fem_c();
                break;
        }
    }

void NMoFID(){
        stringstream age(auxt[0]);//SE USA CON PARAMETROS DE EDAD DE RANGOS DE NUTRIENTES
        age>>ag;
        stringstream hei(auxt[3]);
        hei>>ht;
        stringstream wei(auxt[2]);
        wei>>wt;
        

        strcpy(sx,auxt[1].c_str());
        switch (sx[0]){
            case 'M':
                peso_MM();
                break;
            case 'F':
                peso_MF();
                break;
        }
    }
int main(){
    inicio:
    int ans=0;

    cout<<"Bienvenido a programa de nitricion de un mes: "<<endl;
    cout<<"Ingrese opcion"<<endl;
    cout<<"1. Registrar cliente."<<endl;
    cout<<"2. Modificar Registro existente"<<endl;
    cout<<"3. Lectura de registro"<<endl;
    cout<<"4. Conocer peso ideal"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>ans; cout<<endl;

    if (ans==5){
        return 0;
    }

    switch(ans){
        case 1:
            menu_ingresos();
            menu_sesion();
            NMoF();
            p_registros();
            
            
            
            break;
        case 2:
            menu_sesion();
            NMoF();
        break;
        case 3:
            menu_sesion_s();
            arc_read();
        break;
        case 4:
            menu_sesion_s();
            NMoFID();
        break;
    }
    
    char res[1];
    opcion:
    cout<<endl;
    cout<<"Desea cerrar el programa? (S)i (N)o "<< endl;
    cout << "Opcion: "; cin >> res;cout<<endl;
    if(strcmp(res,"S")==0 ||strcmp(res,"s")==0){
        return 0;
    } else
    if (strcmp(res,"N")==0 ||strcmp(res,"n")==0){
        goto inicio;
    }
    else
    if (res!=0){
        cout<<"Valor ingresado es incorrecto";
        goto opcion;
    }
    
    }
