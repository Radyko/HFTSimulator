#ifndef ORDER_H
#define ORDER_H 

#include <cstdint>

enum class OrderType { LIMIT, MARKET };
enum class Side { BUY, SELL };

struct Order{
    uint64_t id;
    OrderType type;
    Side side;
    double price;
    int quantity;
    uint64_t timestamp;
};

#endif