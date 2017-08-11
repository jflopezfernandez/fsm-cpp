#ifndef FSM_QUOTE_PARSER_STATE_OUT_H
#define FSM_QUOTE_PARSER_STATE_OUT_H

#include <string>

#include "quote-parser-state.h"

class QuoteParserStateOut : public QuoteParserState {
public:
    virtual QuoteParserState* aQuote(std::string& s);
};


#endif /* FSM_QUOTE_PARSER_STATE_OUT_H */