#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    int i=1; //current
    int j=0; //previous
    while(i < 4000000){
        int temp = i;
        temp = i;
        i = i+j;
        j = temp;
        l.push_back(i);
    }
    int sum = 0;
    for (list<int>::iterator i = l.begin(); i != l.end(); ++i) {
        if(*i%2==0){
            sum += *i;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}
