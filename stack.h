#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

namespace Stack
{ 
   struct stack
   {
      int elem;
      stack *next;
   };

   bool isEmpty(stack &S);      // Проверка стека на пустоту

   void del(stack &S);           // Очистка стека

   int pop(stack &S);            // Взятие элемента из стека

   void push(stack &S);          // Добавление элемента в стек
}
#endif