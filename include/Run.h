#include <iostream>
#include <string>
#include "CIfrador.h"
#include "Archivo.h"

class Run {
    public:
        void ejecutar();
    private:
        std::string cipherString;
        int llaveDeCifrado, sizeOfText;
};