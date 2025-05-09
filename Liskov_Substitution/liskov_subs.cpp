#include<bits/stdc++.h>
using namespace std;

// Interfaces should be such that client should not implement unnecessary functions they do not need.

class RestaurantEmployee {
    public:
        virtual void washDishes() = 0;
        virtual void serveCustomers() = 0;
        virtual void cookFood() = 0;
    };
    
    class Waiter : public RestaurantEmployee {
    public:
        void washDishes() override {
            // Not waiter's job
        }
    
        void serveCustomers() override {
            // It is waiter's job so implement it
            std::cout << "Serving Customers" << std::endl;
        }
    
        void cookFood() override {
            // Not waiter's job
        }
    };
    
// Now, in the above scenario, there was no need of waiter to wash dishes so that became an unnecessary function.     

//We may define separate interfaces for separate clients as given below.
class WaiterInterface {
    public:
        virtual void serveCustomers() = 0;
        virtual void takeOrder() = 0;
    };
    
    class ChefInterface {
    public:
        virtual void cookFood() = 0;
        virtual void decideMenu() = 0;
    };
    
    class Waiter : public WaiterInterface {
    public:
        void serveCustomers() override {
            std::cout << "Serving Customers" << std::endl;
        }
    
        void takeOrder() override {
            std::cout << "Take Orders" << std::endl;
        }
    };
    