#ifndef FRACTION_H

   #define FRACTION_H

      struct Fraction {

       int num; // числитель

       int den; // знаменатель

   };

      // Объявляем наши функции
/**
 * @brief Складывает две дроби
 * @param a Первая дробь для сложения
 * @param b Вторая дробь для сложения  
 * @return Новая дробь, являющаяся результатом сложения
 */
   Fraction add(Fraction a, Fraction b);
/**
 * @brief Умножает две дроби
 * @param a Первый множитель
 * @param b Второй множитель
 * @return Произведение дробей
 */
   Fraction multiply(Fraction a, Fraction b);

   void simplify(Fraction &f); // упрощаем переданную дробь

      #endif