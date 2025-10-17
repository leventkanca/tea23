#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
    void changeValueByParameter(int value) {
        value = 99;
        fmt::print("{}\n", value);
    }

    void changeValueByPointer(int* ptr){
        *ptr = 99;
        fmt::print("{}\n", *ptr);
    }

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    int x = 10;
    int* p = &x;
    double* y = new double;
    *y = 3.14;
    int w = 5;

    fmt::print("Hello, {} in version {}!\n", tea::PROJECT_NAME, tea::PROJECT_VER);
    fmt::print("{}\n",argc);
    for (int i = 0; i < argc; i++){
        fmt::print("{}\n",argv[i]);
    }
    fmt::print("{}, {}\n", x, fmt::ptr(&x));
    fmt::print("{}, {}\n", *p, fmt::ptr(p));

    *p = 42;
    
    fmt::print("{}, {}\n", x, fmt::ptr(&x));
    fmt::print("{}, {}\n", *p, fmt::ptr(p));

    fmt::print("{}, {}\n", *y, fmt::ptr(y));
    delete y;
    fmt::print("{}\n",y);

    fmt::print("{}", w);
    changeValueByParameter(w);
    fmt::print("{}\n", w);
    changeValueByPointer(&w);
    fmt::print("{}\n", w);
    /* INSERT YOUR CODE HERE */
    /*int foo = 10;
    int* ptr = &foo;
    *ptr = 42;
    int bar = 4711;
    ptr = &bar;
    *ptr = foo;
    fmt::print("{}", *ptr);*/
    return 0; /* exit gracefully*/
}
