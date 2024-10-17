#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    string apellido;
    string curso;
    string materia;
    float notas[3];
};
void Inicializar(Alumno &alumno) {
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, alumno.nombre);
    cout << "Ingrese el apellido del alumno: ";
    getline(cin, alumno.apellido);
    cout << "Ingrese el curso: ";
    getline(cin, alumno.curso);
    cout << "Ingrese la materia: ";
    getline(cin, alumno.materia);
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese la nota del trimestre " << i + 1 << ": ";
        cin >> alumno.notas[i];
    }
}
float calcularPromedio(Alumno &alumno) {
    float suma = 0;
    for (int i = 0; i < 3; i++) {
        suma += alumno.notas[i];
    }
    return suma / 3;
}
string calcularCondicion(Alumno &alumno) {
    bool promociona = true;
    bool puedeRecuperar = false;

    for (int i = 0; i < 3; i++) {
        if (alumno.notas[i] < 5) {
            return "Reprobado: Debe recursar la materia";
        }
        if (alumno.notas[i] < 7) {
            promociona = false;
            puedeRecuperar = true;
        }
    }

    if (promociona) {
        return "Promocionado";
    }
    if (puedeRecuperar) {
        return "Aprobado: Puede recuperar trimestres";
    }

    return "Error en la condición";
}

int main() {
    Alumno alumno;

    Inicializar(alumno);

    float promedio = calcularPromedio(alumno);
    cout << "El promedio final es: " << promedio << endl;

    string condicion = calcularCondicion(alumno);
    cout << "Condición final: " << condicion << endl;

    return 0;
}
