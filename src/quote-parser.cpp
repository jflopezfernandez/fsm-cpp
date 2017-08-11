
#include "includes/quote-parser.h"
#include "includes/quote-parser-state.h"

#include <string>


void QuoteParser::event(char input)
{
    if (c == '""')
        state = state->aQuote(*buffer);
    else
        state = state->aChar(*buffer,input);
}

QuoteParser::QuoteParser()
{
    state = QuoteParserState::reset();
    buffer = new std::string();
}