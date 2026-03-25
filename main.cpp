#include <iostream>

using namespace std;

double addVAT(double item) {
    double tax = 0.15*item;
    const double result = item + tax;
    return result;
}

int main()
{
    double price = 50000;
    int code;
    cout<<"Welcome to THE FASHION Leather!\n\n"<< "To find out about the price of our limited edition bag, enter the code 2332: ";
    cin>>code;

    double finalprice;
    finalprice = addVAT(price);

    cout<<endl;

    if (code == 2332) {
        cout << "Access Granted. \nTotal Price (including 15% VAT): " << finalprice << " ETB" << endl;
    } else {
        cout << "Error: INVALID CODE. Access Denied." << endl;
    }

    cout<<endl;
    cout<<endl;

    return 0;
}
