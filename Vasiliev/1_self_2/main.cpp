/* Задача 2
 * Отображает пять первых нечётных чисел
 * */

#include <iostream>
#include <cstdlib>

int main () {
    const int n=100;
    const int topLine=5;

    int k = 34;
    int count = 1;

    while (k<=n && count<=topLine) {
        if (k%2 != 0) {
            std::cout<<count<<" - "<<k<<std::endl;
            count++;
        }
        k++;
    }

    system("pause>nul");
    return 0;
}
