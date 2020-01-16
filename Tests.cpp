#include "Fraction.h"
#include <gtest/gtest.h>
#include <stdexcept>

TEST(FractionTests, add){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(2, 4);
    Fraction f3 = f1 + f2;
    ASSERT_EQ(f3.getN(), Fraction(3, 4).getN());
    ASSERT_EQ(f3.getD(), Fraction(3, 4).getD());

}
TEST(FractionTests, subtract){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(2, 4);
    Fraction f3 = f1 - f2;
    ASSERT_EQ(f3.getN(), Fraction(-1, 4).getN());
    ASSERT_EQ(f3.getD(), Fraction(-1, 4).getD());
}

TEST(FractionTests, multiply){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(2, 4);
    Fraction f3 = f1 * f2;
    ASSERT_EQ(f3.getN(), Fraction(1, 8).getN());
    ASSERT_EQ(f3.getD(), Fraction(1, 8).getD());
}

TEST(FractionTests, divide){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(2, 4);
    Fraction f3 = f1 / f2;
    ASSERT_EQ(f3.getN(), Fraction(1, 2).getN());
    ASSERT_EQ(f3.getD(), Fraction(1, 2).getD());
}

TEST(FractionTests, equal){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(-2, -8);
    ASSERT_TRUE(f1 == f2);
}
TEST(FractionTests, lt){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(2, 4);
    ASSERT_TRUE(f1 < f2);
}
TEST(FractionTests, gt){

    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(1, 8);
    ASSERT_TRUE(f1 > f2);
}

TEST(FractionTests, div_by_zero){

    ASSERT_THROW(Fraction(1, 0), std::overflow_error);
}
