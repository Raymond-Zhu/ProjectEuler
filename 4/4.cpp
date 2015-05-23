#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 100;
    int b = 100;
    int maxPali = 0;
    bool isPali= true;
    while(a < 1000) {
        while(b < 1000){
            int product = a * b;
            std::string s = std::to_string(product);
            for(size_t i = 0; i < s.size(); i++) {
                if(s[i] != s[s.size()-(i+1)]) {
                    isPali = false;
                    break;
                }
            }
            if(isPali) {
                if(a*b >= maxPali)
                    maxPali = a*b;
            }
            isPali = true;
            b++;
        }
        b = 100;
        a++;
    }
    std::cout << maxPali << std::endl;
    return 0;
}
