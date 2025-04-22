#include "OrderBook.h"
#include "Order.h"

int main() {
    OrderBook ob;

    // Create simple buy order
    Order bidOrder;
    bidOrder.id = 1;
    bidOrder.type = OrderType::LIMIT;
    bidOrder.side = Side::BUY;
    bidOrder.price = 100.5;
    bidOrder.quantity = 10;
    bidOrder.timestamp = 1;

    // Create simple sell order
    Order askOrder;
    askOrder.id = 2;
    askOrder.type = OrderType::LIMIT;
    askOrder.side = Side::SELL;
    askOrder.price = 101.0;
    askOrder.quantity = 15;
    askOrder.timestamp = 2;

    // Add orders to book
    ob.add_order(bidOrder);
    ob.add_order(askOrder);

    // Print orders
    ob.print_top_of_book();

    return 0;
}