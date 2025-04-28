#include "Archivo.h"
#include <fstream>
#include <sstream>
#include <stdexcept>

std::string Archivo::leerArchivo(const std::string& rutaArchivo) {
    std::ifstream archivo(rutaArchivo);
    if (!archivo.is_open()) {
        throw std::runtime_error("No se pudo abrir el archivo para lectura.");
    }

    std::stringstream buffer;
    buffer << archivo.rdbuf();
    archivo.close();
    return buffer.str();
}

void Archivo::escribirArchivo(const std::string& rutaArchivo, const std::string& contenido) {
    std::ofstream archivo(rutaArchivo);
    if (!archivo.is_open()) {
        throw std::runtime_error("No se pudo abrir el archivo para escritura.");
    }

    archivo << contenido;
    archivo.close();
}