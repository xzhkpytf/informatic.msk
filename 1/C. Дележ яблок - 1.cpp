#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Считываем входные данные
    int N, K;
    cin >> N >> K;

    // Вычисляем количество яблок, которое достанется каждому школьнику
    int apples_per_student = K / N;

    // Выводим результат
    cout << apples_per_student;

    return 0;
}
