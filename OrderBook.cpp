#include "OrderBook.h"
#include <iostream>

void OrderBook::add_order(const Order& order){
    if(order.side == Side::BUY){
        bids[order.price].push_back(order);
    } else {
        asks[order.price].push_back(order);
    }
    order_lookup[order.id] = std::make_pair(order.price, order.side);
}

// std::optional<Trade> OrderBook::match_order(const Order& order){
//     // Implement order matching
//     return std::nullopt;
// }

// void OrderBook::cancel_order(uint64_t order_id){
//     // Use order_lookup to find and remove the order
// }

void OrderBook::print_top_of_book() const {
    std::cout << "Top of Book: " << std::endl; 

    if(!bids.empty()){
        const auto& [price, orders] = *bids.begin();
        std::cout << "Best Bid: " << price << " (" << orders.size() << " orders)" << std::endl;
    } else {
        std::cout << "No bids." << std::endl;
    }

    if(!asks.empty()){
        const auto& [price, orders] = *asks.begin();
        std::cout << "Best Ask: " << price << " (" << orders.size() << " orders)" << std::endl;
    } else {
        std::cout << "No asks." << std::endl;
    } 
}