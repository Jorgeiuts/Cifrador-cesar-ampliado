#include "Run.h"

void Run::ejecutar() {
    try {
        // Leer archivo de entrada
        std::string rutaEntrada = "entrada.txt";
        std::string textoOriginal = Archivo::leerArchivo(rutaEntrada);

        // Cifrar el texto
        llaveDeCifrado = 5; // Clave de desplazamiento
        Cifrador cifrador;
        cipherString = cifrador.cipher(textoOriginal, llaveDeCifrado);

        // Guardar el texto cifrado en un archivo de salida
        std::string rutaSalida = "salida.txt";
        Archivo::escribirArchivo(rutaSalida, cipherString);

        std::cout << "Texto cifrado guardado en: " << rutaSalida << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}