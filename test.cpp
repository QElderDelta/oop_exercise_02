#include <gtest/gtest.h>
#include "modulo.cpp"

TEST(ModuloTest, ConstructorTest) {
    Modulo a{-8, 5};
    ASSERT_EQ(a.GetMod(), 5);
    ASSERT_EQ(a.GetNumber(), 2);
    Modulo b{2, 5};
    ASSERT_EQ(b.GetMod(), 5);
    ASSERT_EQ(b.GetNumber(), 2);
    Modulo c{8, 5};
    ASSERT_EQ(c.GetMod(), 5);
    ASSERT_EQ(c.GetNumber(), 3);
}

TEST(ModuloTest, AdditionTest) {
    Modulo a{-8, 5};
    Modulo b{7, 5};
    Modulo c = a + b;
    ASSERT_EQ(c.GetNumber(), 4);
    a += b;
    ASSERT_EQ(a.GetNumber(), 4);
    a.SetNumber(3);
    a.SetMod(3);
    b.SetNumber(1);
    b.SetMod(3);
    a += b;
    ASSERT_EQ(a.GetNumber(), 1);
}

TEST(ModuloTest, SubtractionTest) {
    Modulo a{-8, 5};
    Modulo b{7, 5};
    Modulo c = a - b;
    ASSERT_EQ(c.GetNumber(), 0);
    a -= b;
    ASSERT_EQ(a.GetNumber(), 0);
    a.SetNumber(3);
    a.SetMod(3);
    b.SetNumber(1);
    b.SetMod(3);
    a -= b;
    ASSERT_EQ(a.GetNumber(), 2);
}

TEST(ModuloTest, MultiplicationTest) {
    Modulo a{-8, 5};
    Modulo b{7, 5};
    Modulo c = a * b;
    ASSERT_EQ(c.GetNumber(), 4);
    a *= b;
    ASSERT_EQ(a.GetNumber(), 4);
    a.SetNumber(3);
    a.SetMod(3);
    b.SetNumber(1);
    b.SetMod(3);
    a *= b;
    ASSERT_EQ(a.GetNumber(), 0);
}

TEST(ModuloTest, DivisionTest) {
    Modulo a{-8, 5};
    Modulo b{7, 5};
    Modulo c = a / b;
    ASSERT_EQ(c.GetNumber(), 1);
    a /= b;
    ASSERT_EQ(a.GetNumber(), 1);
    a.SetNumber(3);
    a.SetMod(3);
    b.SetNumber(1);
    b.SetMod(3);
    a /= b;
    ASSERT_EQ(a.GetNumber(), 0);
}

TEST(ModuloTest, ComparisionTest) {
    Modulo a{-8, 5};
    Modulo b{7, 5};
    ASSERT_TRUE(a == b);
    ASSERT_FALSE(a < b);
    ASSERT_FALSE(a > b);
    a.SetNumber(3);
    a.SetMod(3);
    b.SetNumber(1);
    b.SetMod(3);
    ASSERT_FALSE(a == b);
    ASSERT_TRUE(a < b);
    ASSERT_FALSE(a > b);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
