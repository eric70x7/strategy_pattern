// Copyright 2022 Eric Jones

#include "./concreteStrategyA.h"
#include <iostream>

concreteStrategyA::concreteStrategyA() {
}

concreteStrategyA::~concreteStrategyA() {
}

std::string concreteStrategyA::AlgorithmInterface() {
    return "A";
}

