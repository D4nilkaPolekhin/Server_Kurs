#pragma once
#include <vector>
#include <iostream>
#include <vector>
#include <limits>
#include <stdlib.h>
#include <boost/numeric/conversion/cast.hpp>
/** @file
 * @author Полехин Д.А.
 * @version 1.0
 * @brief Заголовочный файл для модуля вычислений
 */
/** @brief Класс для операции умножение вектора
 * @details Вектор указывается в параметрах конструктора.
 * Для получения результат вычислений используется метод send_res.
 */
class Calculator
{
int16_t results;
public:
/**
 * @brief Вычисление
 * @param [in] input_data Вектор данных. Не должен быть пустой.
 * Тип данных int16_t
 * Исключения не возбуждаются
 * @warning При переполнении будет возвращено максимальное значение int16_t или минимальное значение int16_t
 */
    Calculator(std::vector<int16_t>input_data);
/**
 * @brief Получение результата вычислений
 */
   	int16_t send_res();
};
