#ifndef TRADE_H 
#define TRADE_H 

#include <cstdint>

struct Trade {
    uint64_t trade_id;
    uint64_t buy_order_id;
    uint64_t sell_order_id;
    double price;
    int quantitiy;
    uint64_t timestamp;
};

#endif