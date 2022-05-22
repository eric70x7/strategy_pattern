// Copyright 2022 Eric Jones

#include "./context.h"

context::context() {
}

context::~context() {
}

void context::setStrategy(strategy* strategy) {
    myStrategy = strategy;
}

std::string context::executeAlgorithm() {
    return myStrategy->AlgorithmInterface();
}

