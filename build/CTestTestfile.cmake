# CMake generated Testfile for 
# Source directory: /home/qelderdelta/Study/oop_exercise_02
# Build directory: /home/qelderdelta/Study/oop_exercise_02/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ModuloTest.ConstructorTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.ConstructorTest")
add_test(ModuloTest.AdditionTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.AdditionTest")
add_test(ModuloTest.SubtractionTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.SubtractionTest")
add_test(ModuloTest.MultiplicationTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.MultiplicationTest")
add_test(ModuloTest.DivisionTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.DivisionTest")
add_test(ModuloTest.ComparisionTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.ComparisionTest")
add_test(ModuloTest.LiteralTest "/home/qelderdelta/Study/oop_exercise_02/build/ModuloTest" "--gtest_filter=ModuloTest.LiteralTest")
subdirs("googletest")
