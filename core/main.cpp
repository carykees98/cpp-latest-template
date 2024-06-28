/**
 * @file main.cpp
 * @author Cary Keesler
 * @brief Example main file
 * @version 0.1.0
 * @date 2024-06-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <format>
#include <iostream>

#include <template.hpp>

/**
 * @brief Entry point for program
 *
 * @return Status code of the program
 */
auto main() -> int
{
    std::cout << std::format("Hello {}!", "World") << std::endl;
    return example_func();
}