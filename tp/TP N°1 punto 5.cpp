#include <iostream>
using namespace std;

int main() {
    int totalPreguntas, respuestasCorrectas;
    float porcentaje;

    cout << "ingrese la cantidad total de preguntas: ";
    cin >> totalPreguntas;

    cout << "ingrese la cantidad de respuestas correctas: ";
    cin >> respuestasCorrectas;

    if (totalPreguntas <= 0 || respuestasCorrectas < 0 || respuestasCorrectas > totalPreguntas) {
        cout << "error los datos son incorrectos" << endl;
        return 1;
    }

    porcentaje = (respuestasCorrectas * 100.0) / totalPreguntas;

    if (porcentaje >= 90) {
        cout << "Nivel máximo." << endl;
    } else if (porcentaje >= 75) {
        cout << "Nivel medio." << endl;
    } else if (porcentaje >= 50) {
        cout << "Nivel regular." << endl;
    } else {
        cout << "Fuera de nivel." << endl;
    }

    return 0;
}

