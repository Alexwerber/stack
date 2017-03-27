#include <stdio.h>
#include "stack.h"

int main()
{   
   int n;
   char c;
   bool exitFlag = 0;      // Флаг на команду выхода
   Stack::stack *S;

   do
   {
      printf("<1> - создать пустой стек (очистить стек)\n");
      printf("<2> - проверить, является ли стек пустым\n");
      printf("<3> - добавить элемент в стек\n");
      printf("<4> - взять элемент из стека\n");
      printf("<5> - выход\n");
      bool repFlag = false;        // Флаг на повторение программы
      do
      {
         printf("Введите нормер команды (от 1 до 5): ");
         if(!scanf("%d",&n))  // Проверка введенного значения
         {
            scanf("%c", &c);
            printf("Ошибка ввода \n");
         }
         switch(n)
         {
            case 1 : Stack::del(*S); break;
            case 2 : Stack::isEmpty(*S) == true ? printf("Стек пуст\n") : printf("Стек не пуст\n"); break;
            case 3 : Stack::push(*S); break;
            case 4 : Stack::pop(*S); break;
            case 5 : exitFlag = true; break;
            default : printf("ОШИБКА : неверный номер команды\n");
                      repFlag = true;
         }
      } while(!repFlag && !exitFlag);
   } while(!exitFlag);
}