#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    
    std::string linha;
    std::string token;
    vector<string> tokensNaLinha{};
    char delimitador = ' ';
    
    while (std::getline(std::cin, linha)){
        
        istringstream sstream(linha);
        
        while(std::getline(sstream, token, delimitador)) {
            tokensNaLinha.push_back(token);
        }
    }
    
    for(const auto &str : tokensNaLinha) {
        cout << str << endl;
    }

    return EXIT_SUCCESS;
}