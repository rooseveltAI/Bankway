#include <string>
// not calling namespace in header files

class Transaction
{
private:
    int amount;
    std::string type; // a better way exists

public:
    Transaction(int amt, std::string kind);
    std::string Report();
};