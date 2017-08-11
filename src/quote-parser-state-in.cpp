
#include "quote-parser-state-in.h"

#include <iostream>


QuoteParserState* QuoteParserStateIn::aChar(std::string& s, char input)
{
    s += c;

    return (*this);
}

QuoteParserState* QuoteParserStateIn::aQuote(std::string& s)
{
    std::cout << s << '\n';

    return (out);
}