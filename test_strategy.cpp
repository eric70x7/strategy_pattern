// Copyright 2022 Eric Jones

#include "./test_strategy.h"

#include <gtest/gtest.h>
#include <iostream>

test_strategy::test_strategy() {
}

test_strategy::~test_strategy() {
}

TEST(StrategyTestSuite, TestBehavior) {
    context contextA;
    std::shared_ptr<strategy> a(new concreteStrategyA);

    contextA.setStrategy(a);

    context contextB;
    std::shared_ptr<strategy> b(new concreteStrategyB);

    contextB.setStrategy(b);

    ASSERT_EQ("A", contextA.executeAlgorithm());
    ASSERT_EQ("B", contextB.executeAlgorithm());
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
