To compile the Fraction test program use cd to change director to the folder containing this file and then run the following command.

./compile.sh 

To run the program that tests the Fraction class execute the ./run.sh command.

The test program uses the Google test C++ framework to run 8 unit tests. The output of the test suite is copied below. The tests can be found in the Tests.cpp file.

[==========] Running 8 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 8 tests from FractionTests
[ RUN      ] FractionTests.add
[       OK ] FractionTests.add (0 ms)
[ RUN      ] FractionTests.subtract
[       OK ] FractionTests.subtract (0 ms)
[ RUN      ] FractionTests.multiply
[       OK ] FractionTests.multiply (0 ms)
[ RUN      ] FractionTests.divide
[       OK ] FractionTests.divide (0 ms)
[ RUN      ] FractionTests.equal
[       OK ] FractionTests.equal (0 ms)
[ RUN      ] FractionTests.lt
[       OK ] FractionTests.lt (0 ms)
[ RUN      ] FractionTests.gt
[       OK ] FractionTests.gt (0 ms)
[ RUN      ] FractionTests.div_by_zero
[       OK ] FractionTests.div_by_zero (0 ms)
[----------] 8 tests from FractionTests (0 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 8 tests.
