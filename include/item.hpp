#ifndef ITEM_H
#define ITEM_H

#include <string>

class USD;
class Item
{
    private:
        std::string name;
        double price;
        unsigned int inventory;
        std::string unit; // Using string is better than enum because it is easier to maintain and avoids additional conversions (because we don't need special processing)
        unsigned int soldCount = 0;
        unsigned int discount = 0;
        
    public:
        Item(const std::string& , double , int , const std::string &);
        virtual std::ostream &utilityPrint(std::ostream&) const noexcept;

        void setName(const std::string &);
        void setPrice(double);
        void setInventory(int);
        void setUnit(const std::string &);

        [[nodiscard]] const std::string& getName() const noexcept;
        [[nodiscard]] unsigned int getSoldCount() const noexcept;
        [[nodiscard]] double getPrice() const noexcept;
        [[nodiscard]] unsigned int getInventory() const noexcept;
        [[nodiscard]] const std::string& getUnit() const noexcept;
        [[nodiscard]] unsigned int getDiscount() const noexcept;

        Item& operator++();

        virtual ~Item() noexcept = default;
};

#endif