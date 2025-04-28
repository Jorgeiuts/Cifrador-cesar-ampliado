#include <iostream>
#include <string>

class Cifrador {
    public:
        std::string getCipherString();
        void setCipherString(std::string cipherStringValue);

        std::string cipher(std::string plainText, int key);

        Cifrador();
        Cifrador(std::string cipherString);
        ~Cifrador();
        
    private:
        std::string cipherString;
};