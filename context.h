// Copyright 2022 Eric Jones

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <string>
#include <memory>

#include "./strategy.h"

#pragma once

class context {
 public:
    context();
    ~context();

    void setStrategy(std::shared_ptr<strategy> strategy);

    std::string executeAlgorithm();

 private:
    std::shared_ptr<strategy> myStrategy;
};

#endif  // CONTEXT_H_
