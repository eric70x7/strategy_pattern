// Copyright 2022 Eric Jones

#ifndef CONCRETESTRATEGYB_H_
#define CONCRETESTRATEGYB_H_

#include "./strategy.h"
#include <string>
#pragma once

class concreteStrategyB : public strategy {
 public:
    concreteStrategyB();
    ~concreteStrategyB();

    std::string AlgorithmInterface();

 private:
};

#endif  // CONCRETESTRATEGYB_H_
