#include <stdio.h>
/*
    Студент: Белов Михаил Александрович
    Группа: ПИ 1-1
    Назнаение: "Конвертер величин"
*/
int main(void)
{
    double value, result;
    int command;
    
    printf("Введите два числа:\n");
    scanf("%lf", &value);
    printf("1 - м в см\n2 кг в гр\n");
    printf("3 - гр.ц. в гр.ф.\n4 - часы в мин\n");
    printf("Выберите операцию: ");
    scanf("%xd", &command);
    
    switch(command)
    {
    case 1:
       result = value * 100;
        printf("Результат: %.2f\n", result);
        break;
    case 2:
        result = value * 1000;
        printf("Результат: %.2f\n", result);
        break;
    case 3:
        result = value * 9 / 5 + 32;
        printf("Результат: %.2f\n", result);
        break;
    case 4:
        result = value * 60;
        printf("Результат: %.2f\n", result);
        break;
    }
    
    return 0;
}
