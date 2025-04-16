// Simple Tech Store using Array
// You Can Select Items 
// Select Payment Methods
// Pay The Price as mentioned

#include<iostream>
using namespace std;

class costumer {
private:
    string name, email;
public:
    void custinfo() {
        cout << "-----Enter Your Detail----" << endl;
        cout << "Enter Name: ";
        getline(cin, name);
        cout << endl << "Enter Email: ";
        getline(cin, email);
    }
};
class selectedItems{
	public:
		void selectProduct(int choice);
};

class products {
public:
    string pname;
    int price, id;

    static products prod[5];  
    void prodinfo();
      
};
class payment{
	public:
		int bill;
		int payopt;
		void processPayment() {
		a:
        cout << endl << "Your total bill is: Rs " << bill << "/-" << endl;
        cout << "Choose payment option: \n1) Jazz-Cash \n2) Credit/Debit Card\n";
        cin >> payopt;
        if (payopt == 1) {
            cout << "Payment via Jazz-cash confirmed!" << endl;
        } else if (payopt == 2) {
            cout << "Payment via Credit/Debit Card confirmed!" << endl;
        } else {
            cout << "Invalid payment option!" << endl;
            goto a;
        }
    }
};

int main() {
    int choice;

    cout << "====================== Welcome To Tech-Store ======================" << endl << endl;
    costumer cost1;
    cost1.custinfo();
	payment pay;
    products prod;
    selectedItems item;

    while (true) {  
        prod.prodinfo();

        cout << endl << "Choose Product (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            item.selectProduct(choice);
            int p = products::prod[choice-1].price;
            pay.bill = p;
            pay.processPayment();
            
            break;  
        } else {
            cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}
products products::prod[5] = {
    {"Ram", 600, 1},
    {"Camera", 10000, 2},
    {"i5 Processor 7th Gen", 15000, 3},
    {"SSD", 4000, 4},
    {"Mouse", 1500, 5}
};

void products::prodinfo() {
    cout << "-----Available Products-----" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ") " << prod[i].pname << " = Rs " << prod[i].price << "/-" << endl;
    }
}

void selectedItems::selectProduct(int choice) {
    if (choice < 1 || choice > 5) {
        cout << endl << "----Invalid Input!----" << endl;
    } 
}

