#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double H = 1000;
    double Vc = 200;
    double S = 5000;
    double Vp = 500;
    double T;

    double distance = sqrt(S * S + H * H);
    
    T = distance / (Vp - Vc);
    printf("Исходные параметры\n");
    printf("\tВысота H: %f метров\n", H);
    printf("\tСкорость самолета Vc: %f метров в секунду\n", Vc);
    printf("\tРасстояние S: %f метров\n", S);
    printf("\tСкорость ракеты Vp: %f метров в секунду\n", Vp);
    printf("Решение:\n");
    printf("\tВычислим расстояние до цели (по теореме Пифагора: √(S² + H²)): √(%f + %f) = %f\n",S * S,H * H, distance);
    printf("\tВычислим время до поражения цели (по формуле: Время = расстояние / относительную скорость),\n если относительная скорость = (Vp - Vc): \n\t %f / (%f - %f)) = %f\n",distance,Vp,Vc,T);
    printf("Ответ: время до поражения цели: %f секунд\n", T);
    printf("\nПрограмма завершена. Нажмите Enter для выхода...");
    getchar();
    getchar();
    return 0;
}