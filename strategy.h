// Copyright 2022 Eric Jones

#ifndef STRATEGY_H_
#define STRATEGY_H_

#include <string>

#pragma once

class strategy {
 public:
    strategy();
    ~strategy();

    virtual std::string AlgorithmInterface() = 0;

 private:
};

#endif  // STRATEGY_H_
