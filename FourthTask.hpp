//
// Created by Антон Гломадов on 9/16/21.
//
void FourthTask() {
    std::cout<<"Задание 4\n";
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
    #pragma omp parallel for
    for (int i = 1; i <= nums; ++i) {
      #pragma omp atomic
        sum += i;
    #pragma omp critical
        {
            std::cout << omp_get_thread_num() << " Sum = " << sum << std::endl;
        }
    }

    std::cout << "Sum = " << sum;
}