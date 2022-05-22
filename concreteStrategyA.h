// Copyright 2022 Eric Jones

#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_

#include "./strategy.h"
#include <string>
#pragma once

class concreteStrategyA : public strategy {
 public:
    concreteStrategyA();
    ~concreteStrategyA();

    std::string AlgorithmInterface();

 private:
};

#endif  // CONCRETESTRATEGYA_H_
