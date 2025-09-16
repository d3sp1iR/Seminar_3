#ifndef FRACTION_H

   #define FRACTION_H

      struct Fraction {

       int num; // числитель

       int den; // знаменатель

   };

      // Объявляем наши функции

   Fraction add(Fraction a, Fraction b);

   Fraction multiply(Fraction a, Fraction b);

   void simplify(Fraction &f); // упрощаем переданную дробь

      #endif