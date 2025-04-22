#ifndef ORDERBOOK_H
#define ORDERBOOK_H


#include "Order.h"
#include "Trade.h"
#include <map>
#include <deque>
#include <unordered_map>
#include <optional>

class OrderBook{
    public:
    void add_order(const Order& order);
    std::optional<Trade> match_order(const Order& order);
    void cancel_order(uint64_t order_id);
    void print_top_of_book() const; 

    private:
    std::map<double, std::deque<Order>, std::greater<>> bids;
    std::map<double, std::deque<Order>> asks; 
    std::unordered_map<uint64_t, std::pair<double,Side>> order_lookup;
    uint64_t next_trade_id = 1;
};

#endif 