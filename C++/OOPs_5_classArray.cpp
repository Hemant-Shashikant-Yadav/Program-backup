#include<iostream>
using namespace std;

class Shop
{
    int product_id [100];
    int product_price [100];
    int n;

public:
    void product_qty(void);
    void info_in(void);
    void info_out(void);

};

void Shop::product_qty(void)
{
    cout<<"Enter the number of Products = ";
    cin>>n;
}

void Shop::info_in(void)
{
    for (int  i = 0; i < n; i++)
    {
        cout<<"Enter the product id of prodct no "<<i+1<<endl;
        cin>>product_id[i];
        cout<<"Enter the product price of product no "<<i+1<<endl;
        cin>>product_price[i];
    }
    
}

void Shop::info_out(void)
{
    for (int  i = 0; i < n; i++)
    {
        cout<<"The product id of product "<<i+1<<" is "<<product_id[i]<<" and product price is = "<<product_price[i]<<endl;
    }
    
}


int main()
{
    Shop Store;
    Store.product_qty();
    Store.info_in();
    Store.info_out();
    return 0;

}