#ifndef FSM_QUOTE_PARSER_STATE_IN_INCLUDED
#define FSM_QUOTE_PARSER_STATE_IN_INCLUDED

#include <string>

#include "quote-parser-state.h"

class QuoteParserStateIn : public QuoteParserState {
public:
    virtual QuoteParserState* aChar(std::string& s, char input);
    virtual QuoteParserState* aQuote(std::string& s);
};


#endif /* FSM_QUOTE_PARSER_STATE_IN_INCLUDED */