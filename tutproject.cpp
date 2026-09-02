#include<iostream>
#include<fstream>
using namespace std;

class temp {
    string itemID, itemName;
    int itemQuantity, ItemPrice;
    fstream file, file1;
    int totalamount = 0, quantity, itemRate;
    string search;
    char _choice;

public:
    void addProduct(void);
    void viewProduct(void);
    void deleteProduct(void);
    void buyProduct(void);
} obj;

int main() {
    char choice;

    cout << "Press 1 --> Start shopping\n";
    cout << "Press 0 --> Exit\n";
    cin >> choice;
    
    switch (choice) {
    case 'A':
        char adminChoice;
        cout << "Press 1 to Add Product\n";
        cout << "Press 2 to Delete Product\n";  // Admin-specific option
        cin >> adminChoice;

        if (adminChoice == '1') {
            obj.addProduct();
        } else if (adminChoice == '2') {
            obj.deleteProduct();
        } else {
            cout << "Invalid admin selection..!" << endl;
        }
        break;
    case '1':  // corrected to '1' since choice is char
        obj.viewProduct();
        obj.buyProduct();
        break;
    case '0':  // corrected to '0' since choice is char
        cout << "Exiting...\n";
        exit(0);  // system("exit") is incorrect; use exit(0)
        break;
    default:
        cout << "Invalid selection..!" << endl;
        break;
    }
    return 0;
}

void temp::addProduct() {
    cout << "Enter Product ID: "; 
    cin >> itemID;

    cout << "Enter Product Name: "; 
    cin.ignore();  // Ignore newline character from previous input
    getline(cin, itemName);  // Use getline to accept multi-word input

    cout << "Enter Product Quantity: "; 
    cin >> itemQuantity;

    cout << "Enter Product Price: "; 
    cin >> ItemPrice;

    file.open("data.txt", ios::out | ios::app);
    file << itemID << "\t" << itemName << "\t" << itemQuantity << "\t" << ItemPrice << endl;
    file.close();
}

void temp::viewProduct() {
    file.open("data.txt", ios::in);
    if (!file) {
        cout << "No products found!" << endl;
        return;
    }

    cout << "--------------" << endl;
    cout << "ProductID\tProduct Name\tQuantity\tProduct Price" << endl;
    cout << "--------------" << endl;

    while (file >> itemID >> itemName >> itemQuantity >> ItemPrice) {
        cout << itemID << "\t\t" << itemName << "\t\t" << itemQuantity << "\t\t" << ItemPrice << endl;
    }

    file.close();
}

void temp::deleteProduct() {
    cout << "Enter Product ID to delete: ";
    cin >> search;

    file.open("data.txt", ios::in);
    file1.open("temp.txt", ios::out | ios::app);

    bool productFound = false;

    if (!file) {
        cout << "No products found!" << endl;
        return;
    }

    while (file >> itemID >> itemName >> itemQuantity >> ItemPrice) {
        if (itemID == search) {
            productFound = true;
            cout << "Product " << itemName << " deleted successfully!" << endl;
        } else {
            // Copy all other products to temp file
            file1 << itemID << "\t" << itemName << "\t" << itemQuantity << "\t" << ItemPrice << endl;
        }
    }

    if (!productFound) {
        cout << "Product not found!" << endl;
    }

    file.close();
    file1.close();

    // Replace original file with the updated file (without the deleted product)
    remove("data.txt");
    rename("temp.txt", "data.txt");
}

void temp::buyProduct() {
    _choice = 'Y';
    while (_choice == 'Y' || _choice == 'y') {

        file.open("data.txt", ios::in);
        file1.open("temp.txt", ios::out | ios::app);

        if (!file) {
            cout << "No products found!" << endl;
            return;
        }

        cout << "Enter Product ID: ";
        cin >> search;

        cout << "Enter Quantity: ";
        cin >> quantity;

        bool productFound = false;

        while (file >> itemID >> itemName >> itemQuantity >> ItemPrice) {
            if (itemID == search) {
                if (itemQuantity >= quantity) {
                    itemQuantity -= quantity;
                    file1 << itemID << "\t" << itemName << "\t" << itemQuantity << "\t" << ItemPrice << endl;

                    itemRate = quantity * ItemPrice;
                    totalamount += itemRate;  // corrected to add itemRate
                    cout << "----- Payment Bill -----" << endl;
                    cout << "Total purchase amount: " << totalamount << endl;
                    cout << "------------------------" << endl;

                    productFound = true;
                } else {
                    cout << "Insufficient stock!" << endl;
                    file1 << itemID << "\t" << itemName << "\t" << itemQuantity << "\t" << ItemPrice << endl;
                }
            } else {
                file1 << itemID << "\t" << itemName << "\t" << itemQuantity << "\t" << ItemPrice << endl;
            }
        }

        if (!productFound) {
            cout << "Product not found!" << endl;
        }

        file.close();
        file1.close();

        remove("data.txt");
        rename("temp.txt", "data.txt");

        cout << "\nContinue shopping? (Y / N): ";
        cin >> _choice;
    }
}