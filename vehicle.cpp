include <iostream>
using namespace std;
int main ()
{
    //declaration

    int profit, sellingPrice, buyingPrice;

    //initilization

    cout<< "Enter sellingPrice";
    cin>> sellingPrice;
    cout<<"Enter buyingPrice";
    cin>> buyingPrice;
    profit = sellingPrice-buyingPrice;

    //output
    cout<<"The profit of a motor vehicle whose buying price is " <<buyingPrice<< "  selling price is " <<sellingPrice<< "profit is = " <<profit<<endl;
    return 0;


}
