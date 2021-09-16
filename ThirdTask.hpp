#pragma once
#include <omp.h>
#include <iostream>
#include <vector>

/**
 *Напишите OpenMP-программу, которая вычисляет произведение двух квадратных матриц размера N x N.
 */



void ThirdTask() {
    srand(time(0));
    int matrixSize;
    double startParallel;
    double endParallel;
    double startNormal;
    double endNormal;
    std::cout << "Введите размер матрицы: ";

    std::cin >> matrixSize;
    static int a[10000][10000];
    static int b[10000][10000];
    static int c[10000][10000];
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            a[i][j] = rand() % 100000;;
            b[i][j] = rand() % 100000;;
            c[i][j] = 0;
        }
    }
    startParallel = omp_get_wtime();
    omp_set_num_threads(omp_get_max_threads());
#pragma omp parallel for schedule(static)
    {
        for (int i = 0; i < matrixSize; ++i)
            for (int m = 0; m < matrixSize; ++m)
                for (int j = 0; j < matrixSize; ++j)
                    c[i][m] += a[i][j] * b[j][m];
    }
    endParallel = omp_get_wtime();
    std::cout << "Паралельное время : " << endParallel - startParallel << std::endl;
    startNormal = omp_get_wtime();
    for (int i = 0; i < matrixSize; ++i) {
        for (int m = 0; m < matrixSize; ++m)
            for (int j = 0; j < matrixSize; ++j)
                c[i][m] += a[i][j] * b[j][m];
    }
    endNormal = omp_get_wtime();
    std::cout << "Стандартное время: " << endNormal - startNormal << std::endl;
    std::cout << "Паралельные вычесления быстрия в " << (endNormal - startNormal)/(endParallel - startParallel);
};