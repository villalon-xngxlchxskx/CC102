#include <iostream>

using namespace std;

int main()
 {
    double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    double usdToPhp, poundToPhp;
    int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
    double sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP, totalCostPHP;

    // enter prices of products
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

    //  enter conversion rates
    cout << "Enter USD to PHP conversion rate: ";
    cin >> usdToPhp;
    cout << "Enter Pound to PHP conversion rate: ";
    cin >> poundToPhp;

    // to enter quantities purchased
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
    cout << "Item\t\tQuantity\tPrice per item in PHP\tTotal cost per item in PHP" << endl;
    cout << "Sugar\t\t" << sugarQty << "\t\t\t" << sugarPriceUSD * usdToPhp << "\t\t\t" << sugarCostPHP << endl;
    cout << "Rice\t\t" << riceQty << "\t\t\t" << ricePricePound * poundToPhp << "\t\t\t" << riceCostPHP << endl;
    cout << "Sardines\t" << sardinesQty << "\t\t\t" << sardinesPricePound * poundToPhp << "\t\t\t" << sardinesCostPHP << endl;
    cout << "Coffee\t\t" << coffeeQty << "\t\t\t" << coffeePriceUSD * usdToPhp << "\t\t\t" << coffeeCostPHP << endl;
    cout << "Milk\t\t" << milkQty << "\t\t\t" << milkPriceUSD * usdToPhp << "\t\t\t" << milkCostPHP << endl;

    // Display total amount to be paid in PHP
    cout << "\nTotal amount to be paid in PHP: " << totalCostPHP << endl;

    return 0;
}	
	
	

	
	
	
