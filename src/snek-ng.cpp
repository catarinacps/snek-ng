#include <iostream>

#define PROJECT_NAME "snek-ng"

#include <cxxcurses/cxxcurses.hpp>

int main(int argc, char** argv)
{
    if (argc != 1) {
        std::cout << argv[0] << "takes no arguments.\n";
        return 1;
    }

    namespace cc = cxxcurses;

    // std::cout << "This is project " << PROJECT_NAME << ".\n";

    const auto&  main_win = cc::terminal::main_win;
    cc::terminal init;

    const auto hello_string { "Hello, world" };

    main_win << cc::format(4)("C++ curses centered example");
    main_win << cc::format(5, 6)("Here comes {rR} {gB} {bB}!!!", "multi",
        "colored", hello_string);

    auto some_window {
        cc::widget::window { { 10, 5, 5, 30 }, cc::terminal::main_win }
    };

    some_window << cc::format(2)("Hello from sub-window!");
    some_window.get_char();

    return 0;
}
