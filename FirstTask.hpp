#pragma once
#include <omp.h>
#include <iostream>

/**
 *Изучите OpenMP - директиву параллельного выполнения цикла for. Напишите программу, в которой k нитей параллельно вычисляют сумму чисел от 1 до N. Распределите работу по нитям с помощью OpenMP - директивы for.
 * Входные данные: целое число k – количество нитей, целое число N – количество чисел.
 * Выходные данные: каждая нить выводит свою частичную сумму в формате
 * «[Номер_нити]: Sum = <частичная_сумма>», один раз выводится общая сумма в формате «Sum = <сумма>».
 */
 void FirstTask(){
    std::cout<<"Задание 1\n";
    int countOfThreads = 0;
     int nums = 0;
     std::cout<<"Введите количество потоков: ";
     std::cin>>countOfThreads;
     if (countOfThreads>omp_get_max_threads()){
         countOfThreads = omp_get_max_threads();
         std::cout<<"Максимальное допустимое число потоков: "<<omp_get_max_threads()<<"\nКол-во потов выставлено на максимальное допустимое значение\n";
     }
     std::cout<<"Введите количество чисел: ";
     std::cin>>nums;
    omp_set_num_threads(countOfThreads);
    int sum = 0;
    #pragma omp parallel reduction(+:sum)
    {
        #pragma omp for
        for (int i = 0; i <= nums; i++)
            sum += i;
        #pragma omp critical
        {
        std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }
    std::cout << "Sum = " << sum;
}

