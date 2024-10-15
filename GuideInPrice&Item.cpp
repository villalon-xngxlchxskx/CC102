#include <iostream>

using namespace std;

int main()
 {
    double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    double usdToPhp, poundToPhp;
    int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
    double sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP, totalCostPHP;

    // Enter prices of products
    cout << "Enter sugar price in USD: ";
    cin >> sugarPriceUSD;
    cout << "Enter rice price in Pound: ";
    cin >> ricePricePound;
    cout << "Enter sardines price in Pound: ";
    cin >> sardinesPricePound;
    cout << "Enter coffee price in USD: ";
    cin >> coffeePriceUSD;
    cout << "Enter milk price in USD: ";
    cin >> milkPriceUSD;

    //  Enter conversion rates
    cout << "Enter USD to PHP conversion rate: ";
    cin >> usdToPhp;
    cout << "Enter Pound to PHP conversion rate: ";
    cin >> poundToPhp;

    // Enter quantities purchased
    cout << "Enter quantity of sugar: ";
    cin >> sugarQty;
    cout << "Enter quantity of rice: ";
    cin >> riceQty;
    cout << "Enter quantity of sardines: ";
    cin >> sardinesQty;
    cout << "Enter quantity of coffee: ";
    cin >> coffeeQty;
    cout << "Enter quantity of milk: ";
    cin >> milkQty;

    // Calculate costs in PHP
    sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQty;
    riceCostPHP = ricePricePound * poundToPhp * riceQty;
    sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQty;
    coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty;
    milkCostPHP = milkPriceUSD * usdToPhp * milkQty;
    totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;

    // Display purchase details
    cout << "\nPurchase Details:" << endl;
    cout << "Item\tQuantity\tPrice per item in PHP\tTotal cost per item in PHP" << endl;
    cout << "Sugar\t" << sugarQty << "\t" << sugarPriceUSD * usdToPhp << "\t" << sugarCostPHP << endl;
    cout << "Rice\t" << riceQty << "\t" << ricePricePound * poundToPhp << "\t" << riceCostPHP << endl;
    cout << "Sardines\t" << sardinesQty << "\t" << sardinesPricePound * poundToPhp << "\t" << sardinesCostPHP << endl;
    cout << "Coffee\t" << coffeeQty << "\t" << coffeePriceUSD * usdToPhp << "\t" << coffeeCostPHP << endl;
    cout << "Milk\t" << milkQty << "\t" << milkPriceUSD * usdToPhp << "\t" << milkCostPHP << endl;

    // Display total amount to be paid in PHP
    cout << "\nTotal amount to be paid in PHP: " << totalCostPHP << endl;

    return 0;
}