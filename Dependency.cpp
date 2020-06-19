
class ITokenizer {
public:
    virtual ~ITokenizer() {};
    virtual bool hasNextToken() = 0;
    virtual int nextToken() = 0;
};

class Tokenizer : public ITokenizer {
public:
    bool hasNextToken() override;
    int nextToken() override;
};

// template<class Tok = Tokenizer>
// class Parser {
//     static_assert( );
// public:
//     Parser(Tok);
//     int parseNumber();
//     int parseOperator();
// private:
//     Tok tokenizer;
// };

class Parser {
public:
    Parser(std::unique_ptr<ITokenizer>);
    int parseNumber();
    int parseOperator();
private:
    std::unique_ptr<ITokenizer> tokenizer;
};

class Calculator {
public:
    Calculator(Parser);
    int eval(std::string);
private:
    Parser parser;
};


class Calculator {
public:
    int eval(std::string);
private:
    int parseNumber();
    int parseOperator();
    bool hasNextToken();
    int nextToken();
};
