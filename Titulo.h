//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_TITULO_H
#define ACTIVIDADCOLABORATIVA3PEL_TITULO_H
#include <string>


class Titulo {
private:
    std::string titulo;
    std::string genero;
    std::string calidad;
    bool tarifaEstandar;
    float precioAlquiler;
    bool disponible;

protected:
    void mostrarBase() const;   // imprime los datos comunes

public:
    Titulo(std::string& titulo,std::string& genero,std::string& calidad, bool estandar, float precio);
    ~Titulo();

    bool coincideTitulo(const std::string& t);
    bool coincideGenero(const std::string& g);
    bool coincideCalidad(const std::string& c);
    bool alquilar();                    // true si se ha alquilado ahora
    virtual void mostrar() const = 0;   // virtual puro: clase abstracta
};

#endif //ACTIVIDADCOLABORATIVA3PEL_TITULO_H
