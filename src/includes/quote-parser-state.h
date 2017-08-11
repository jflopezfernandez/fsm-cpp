#ifndef FSM_QUOTE_PARSER_STATE_INCLUDED
#define FSM_QUOTE_PARSER_STATE_INCLUDED

#include <string>

class QuoteParserState {
protected:
    static QuoteParserState* in;
    static QuoteParserState* out;
public:
    virtual ~QuoteParserState();

    virtual QuoteParserState* aChar(std::string& s, char input);
    virtual QuoteParserState* aQuote(std::string& s) { return (*this); }

    static QuoteParserState* reset() { return (out); }
};


#endif /* FSM_QUOTE_PARSER_STATE_INCLUDED */