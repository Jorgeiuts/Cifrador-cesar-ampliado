#include <string>

class Archivo {
    public:
        static std::string leerArchivo(const std::string& rutaArchivo);
        static void escribirArchivo(const std::string& rutaArchivo, const std::string& contenido);
};