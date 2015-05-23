#include <iostream>
#include<list>

int main()
{
    std::list<int> l;
    long n = 600851475143;
    int i = 2;
    while(n>1) {
        while(n%i == 0) {
            l.push_back(i);
            n /= i;
        }
        i++;
    }
    l.sort();
    std::cout << l.back() << std::endl;
    return 0;
}
