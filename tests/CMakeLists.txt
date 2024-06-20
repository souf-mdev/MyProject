add_executable(test_factorial test_factorial.cpp)
target_link_libraries(test_factorial factorial)
add_test(NAME FactorialTest COMMAND test_factorial)

add_executable(test_fibonacci test_fibonacci.cpp)
target_link_libraries(test_fibonacci fibonacci)
add_test(NAME FibonacciTest COMMAND test_fibonacci)
