
#include "includes/quote-parser.h"

#include <iostream>


int main()
{
    char input;
    QuoteParser fsm;

    while(std::cin.get(input))
        fsm.event(input);
}