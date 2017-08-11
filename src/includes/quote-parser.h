#ifndef FSM_QUOTE_PARSER_INCLUDED
#define FSM_QUOTE_PARSER_INCLUDED

#include <string>

class QuoteParser {
    class QuoteParserState;
protected:
    QuoteParserState* state;
    std::string* buffer;
public:
    QuoteParser();
    virtual ~QuoteParser() { delete buffer; }

    virtual void event(char input);
};


#endif /* FSM_QUOTE_PARSER_INCLUDED */