#pragma once

#include <memory>
#include "cube.h"

constexpr uint16_t N = 28; // To replicate a character 'N' times

void uniquePointers();
void sharedPointers();
void weakPointers();

// Pass by value
void uniquePointers(std::unique_ptr<Cube>);
void sharedPointers(std::shared_ptr<Cube>);

// Pass by reference
void _sharedPointers(std::shared_ptr<Cube> &);

// Pass by const reference
void _uniquePointers(const std::unique_ptr<Cube> &);
void _sharedPointersConst(const std::shared_ptr<Cube> &);