#pragma once
#include <omp.h>
#include <iostream>

/**
 *Изучите  параметр  schedule  директивы  for.  Модифицируйте  программу «Сумма чисел» из задания выше таким образом,
 * чтобы дополнительно выводилось на экран сообщение о том, какая нить, какую итерацию цикла выполняет:
 * [<Номер нити>]: calculation of the iteration number <Номер итерации>.
 * Задайте k =  4, N =  10. Выведите результаты для schedule (static;  static,1; static,2; dynamic; dynamic,2).
 */
void SecondTaskStatic(){
    std::cout<<"Задание 2.0\n";
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
    #pragma omp for schedule(static)
        for (int i = 0; i <= nums; i++){
            sum += i;
            #pragma omp critical
            {
                std::cout << omp_get_thread_num() << ": calculation of the iteration number " << i << std::endl;
            }
        }
        #pragma omp critical
        {
            std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }
    std::cout << "Sum = " << sum;
}
void SecondTaskStatic1(){
    std::cout<<"Задание 2.1\n";
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
    #pragma omp for schedule(static,1)
        for (int i = 0; i <= nums; i++){
            sum += i;
            #pragma omp critical
            {
                std::cout << omp_get_thread_num() << ": calculation of the iteration number " << i << std::endl;
            }
        }
        #pragma omp critical
        {
            std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }
    std::cout << "Sum = " << sum;
}
void SecondTaskStatic2(){
    std::cout<<"Задание 2.2\n";
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
        #pragma omp for schedule(static,2)
        for (int i = 0; i <= nums; i++){
            sum += i;
            #pragma omp critical
            {
                std::cout << omp_get_thread_num() << ": calculation of the iteration number " << i << std::endl;
            }
        }
        #pragma omp critical
        {
            std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }
    std::cout << "Sum = " << sum;
}
void SecondTaskDynamic1(){
    std::cout<<"Задание 2.3\n";
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
        #pragma omp for schedule(dynamic,1)
        for (int i = 0; i <= nums; i++){
            sum += i;
            #pragma omp critical
            {
                std::cout << omp_get_thread_num() << ": calculation of the iteration number " << i << std::endl;
            }
        }
        #pragma omp critical
        {
            std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }
    std::cout << "Sum = " << sum;
}

void SecondTaskDynamic2(){
    std::cout<<"Задание 2.4\n";
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
        #pragma omp for schedule(static)
        for (int i = 0; i <= nums; i++){
            sum += i;
            #pragma omp critical
            {
                std::cout << omp_get_thread_num() << ": calculation of the iteration number " << i << std::endl;
            }
        }
        #pragma omp critical
        {
            std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }
    std::cout << "Sum = " << sum;
}