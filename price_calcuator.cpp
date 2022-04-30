// Calculating Price after discount of different items.
#include <iostream>
using namespace std;
class Item
{
    public:
        int Item_no;
        char Item_name[50];
        float price;
    
};
class DiscountedItem:public Item
{
    public:
        int Discount_percent;
        int Discounted_price;
        void accept_details()
        {
            cout<<"\nEnter item name: ";
            cin>>Item_name;
            cout<<"\nEnter item number: ";
            cin>>Item_no;
            cout<<"\nEnter item price: ";
            cin>>price;
            cout<<"\nEnter discount percent: ";
            cin>>Discount_percent;
            cout<<"\n------------------\n";
            Discounted_price = price - price* Discount_percent/100; 
        
        }
        void display_details()
        {
            cout<<"\nItem Name: "<<Item_name;
            cout<<"\nItem Number: "<<Item_no;
            cout<<"\nItem Price: "<<price;
            cout<<"\nDiscount Percent: "<<Discount_percent;
            cout<<"\nDiscounted Price: "<<Discounted_price;
            cout<<"\n----------\n";
        }
    
};
int main()
{
    int i,ctn,t_discount=0,t_price=0,paying;
    DiscountedItem dt[100];
    cout<<"\nHow many items have you purchased? ";
    cin>>ctn;
    for(i=1;i<=ctn;i++)
    {
        dt[i].accept_details();
    }
    for(i=1;i<=ctn;i++)
    {
        dt[i].display_details();
    }
    for(i=1;i<=ctn;i++)
    {
        t_price = t_price + dt[i].price;
    }
    for(i=1;i<=ctn;i++)
    {
        t_discount = t_discount + dt[i].price-
        dt[i].Discounted_price;
    }
    cout<<"\nTotal Price : "<<t_price;
    cout<<"\nTotal Discount : "<<t_discount;
    paying = t_price - t_discount;
    cout<<"\nPaying Amount: "<<paying;
    return 0;

}

