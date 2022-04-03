cmake_minimum_required(VERSION 3.20)
project(C__Lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(main Task2/main.cpp)
add_executable(Complex Task2/Complex.cpp)

add_executable(Test Task1/Test.cpp)



add_executable(Rational Section4/Rational.cpp Section4/Rational.h Section4/Term.cpp Section4/Term.h Section4/main.cpp Section4/Polynomial.cpp Section4/Polynomial.h Section4/Number.cpp Section4/Number.cpp Section4/Number.h Section4/Decimal.cpp Section4/Decimal.h Section4/Integer.cpp Section4/Integer.h)
#include_directories(Rational Section4/Rational.h)

