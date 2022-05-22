// Copyright 2022 Eric Jones

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "./strategy.h"
#include <string>

#pragma once

class context {
 public:
    context();
    ~context();

    void setStrategy(strategy* strategy);

    std::string executeAlgorithm();

 private:
    strategy * myStrategy;
};

#endif  // CONTEXT_H_
