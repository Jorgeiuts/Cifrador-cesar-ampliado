#include <iostream>
#include <string>
#include "Cifrador.h"
#include "Archivo.h"

class Run {
    public:
        void ejecutar();
    private:
        std::string cipherString;
        int llaveDeCifrado, sizeOfText;
};