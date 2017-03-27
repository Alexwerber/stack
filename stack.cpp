#include "stack.h"
#include "stdio.h"

namespace Stack
{ 
   bool isEmpty(stack* &S)                  // Проверка стека на пустоту
   {
      return S == NULL;
   }

   void del(stack* &S)                        
   {
      while(S)         
      {
         stack *k = S;
         S = S->next;
         delete k;
      }
      printf("Стек очищен\n");
   }

   int pop(stack* &S)                 
   {
      int date;
      if(isEmpty(S))               // Проверка стека на пустоту
         printf("Стек пуст\n");
      else
      {  
         date = S->elem;    // Вывод значения, содержащегося в
         stack *q = S;     // вершине стека. Удаление и смещение 
         S = S->next;   // вершины стека 
         delete q;
         printf("Элемент, взятый из стека: %d \n", date);
      }
      return date;
   }

   void push(stack* &S)               
   {
      int date;
      printf("Введите число\n");
      scanf("%d", &date);
      if(isEmpty(S))         // Проверка стека на пустоту
      {
         S = new stack;     // Выделение памяти, запись в поле elem
         S->elem = date;    // введенного значения. 
         S->next = NULL;
      }   
      else
      {
         stack *m = new stack; // Выделение памяти, запись в elem
         m->elem = date;     // введенного значения. Добавление звена
         m->next = S;       // с введенным значением в начало стека
         S = m;    
      }
   }
}