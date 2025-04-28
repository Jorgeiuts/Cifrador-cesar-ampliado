#include "Cifrador.h"

Cifrador::Cifrador() : cipherString("") {}

Cifrador::Cifrador(std::string cipherString) : cipherString(cipherString) {}

Cifrador::~Cifrador() {}

std::string Cifrador::getCipherString() {
    return cipherString;
}

void Cifrador::setCipherString(std::string cipherStringValue) {
    cipherString = cipherStringValue;
}

std::string Cifrador::cipher(std::string plainText, int key) {
    std::string result = "";
    int n = 126 - 32 + 1; // Rango de caracteres imprimibles en ASCII

    for (char c : plainText) {
        if (c >= 32 && c <= 126) { // Solo cifrar caracteres imprimibles
            char encryptedChar = (c - 32 + key) % n + 32;
            result += encryptedChar;
        } else {
            result += c; // Dejar caracteres fuera del rango sin cambios
        }
    }

    return result;
}

