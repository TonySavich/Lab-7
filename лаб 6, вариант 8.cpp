#include <iostream>
#include <Function.hpp>


int main()
{
    int a, b;
    std::cin >> a >> b;
    int matrix[N][M];
    for (int i =0; i < a; i++) {
        for (int j=0; j < b; j++) {
            std::cin >>matrix[i][j];
        }
    }

    std::cout << "\n";

    int p = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (p < matrix[i][j]) {
                p = matrix[i][j];
            }
        }
    }

    int c = matrix[0][0];
    for (int i=0; i < a; i++) {
        for (int j=0; j < b; j++) {
            if (c > matrix[i][j]) {
                c = matrix[i][j];
            }
        }
    }


    int mas[N], joe;
    joe = 0;
    for (int i=0; i < a; i++) {
        for (int j=0; j < b; j++) {
            joe = matrix[i][j] + joe;
             }
        mas[i] = joe;
        joe = 0;
    }
 



    int ci, pi;
    ci = iosi(c);
    pi = iosi(p);
    int tmp;
    tmp = 0;
    if (ci == pi) {

        for (int i = 0; i < a; i++) {
            for (int k = i+1; k < a; k++) {
                    if (mas[i] > mas[k]) {
                        for (int j = 0; j < b; j++) {
                            std::swap(matrix[i][j], matrix[k][j]);
                        }
                        std::swap(mas[i], mas[k]);
                }
            }
            }
        }
   


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }


}
