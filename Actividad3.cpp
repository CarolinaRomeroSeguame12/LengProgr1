/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>

class Empleado {
    
private:
      std::string nombre;
      std::string apellidopaterno;
      std::string apellidomaterno;
      std::string Fechanacimiento;

public:
    void capturarDatos() {
        std::cout << "Ingrese Nombre: ";
        std::getline(std::cin >> std::ws, nombre);
        
        std::cout << "Ingrese Apellido Paterno: ";
        std::getline(std::cin >> std::ws, apellidopaterno);
     
        std::cout << "Ingrese Apellido Materno: ";
        std::getline(std::cin >> std::ws, apellidomaterno);
        
        std::cout << "Ingrese Fecha de Nacimiento: (DD/MM/AAAA)";
        std::getline(std::cin >> std::ws, Fechanacimiento);
  
    }
std::string generarRFC(){
    std::string rfc;
    
     rfc += (apellidopaterno[0]);
     for (char c: apellidopaterno) {
       if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
       {
           rfc+= c;
           break;
       }
         
     }

if (apellidomaterno.empty()){ rfc += 'X';
} else {
    rfc += apellidomaterno[0];
}
    rfc += nombre[0];
    
    rfc += Fechanacimiento.substr(8,2);
    rfc += Fechanacimiento.substr(3,2);
    rfc += Fechanacimiento.substr(0,2);
return rfc;
  }
};

int main() {
   Empleado empleado;
    empleado.capturarDatos();
    std::string rfc = empleado.generarRFC();
    
    std::cout << "su RFC generado es: "<< rfc <<
    std::endl;
    
return 0;
}


