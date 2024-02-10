#include<iostream>
#include<string>
using namespace std;

class FoodItem {
public:
    string name;
    int price;

    FoodItem(string n1, int p1){
        name=n1;
        price=p1;
    }
};

void displayMenu(){
    cout<< "-----------------Menu-------------"<<endl;
    cout<< "1) Pizza" <<endl;
    cout<< "2) Burger" <<endl;
    cout<< "3) Sandwich" <<endl;
    cout<< "4) Biryani" <<endl;
}

void displayPizzaMenu(){
    cout<<"1) Paneer pizza rs. 180"<<endl;
    cout<<"2) Cheese pizza rs. 300"<<endl;
    cout<<"3) Corn pizza rs. 280"<<endl;
}

void displayBurgerMenu(){
    cout<<"1) Classic burger rs. 150"<<endl;
    cout<<"2) Veggie burger rs. 180"<<endl;
    cout<<"3) Spicy chicken burger rs. 200"<<endl;
}

void displaySandwichMenu() {
    cout<<"1) Club sandwich rs. 200"<<endl;
    cout<<"2) Veg. crispy sandwich rs. 160"<<endl;
    cout<<"3) Extreme veg. sandwich rs. 100"<<endl;
}

void displayBiryaniMenu() {
    cout<<"1) Veg biryani rs. 220"<<endl;
    cout<<"2) Chicken biryani rs. 250"<<endl;
    cout<<"3) Mutton biryani rs. 300"<<endl;
}

void takeOrder(string customerName) {
    int choice;
    int subChoice;
    int quantity;
    int total = 0;

    do{
        displayMenu();
        cout<<"Please enter your choice: ";
        cin>>choice;

        switch (choice){
            case 1: 
                displayPizzaMenu();
                cout<<"Please enter which pizza you would like to have: ";
                cin>>subChoice;
                cout<<"Please enter the quantity: ";
                cin>>quantity;

                switch(subChoice){
                    case 1:
                        total += 180 * quantity;
                        break;
                    case 2:
                        total += 300 * quantity;
                        break;
                    case 3:
                        total += 280 * quantity;
                        break;
                    default:
                        cout <<"Invalid choice!"<<endl;
                }
                break;

            case 2: 
                displayBurgerMenu();
                cout<<"Please enter which burger you would like to have: ";
                cin>>subChoice;
                cout<<"Please enter the quantity: ";
                cin>>quantity;
 
                switch(subChoice){
                    case 1:
                        total += 150 * quantity;
                        break;
                    case 2:
                        total += 180 * quantity;
                        break;
                    case 3:
                        total += 200 * quantity;
                        break;
                    default:
                        cout<<"Invalid choice!"<<endl;
                }
                break;

            case 3: 
                displaySandwichMenu();
                cout<<"Please enter which sandwich you would like to have: ";
                cin>>subChoice;
                cout<<"Please enter the quantity: ";
                cin>>quantity;

                switch (subChoice) {
                    case 1:
                        total += 200 * quantity;
                        break;
                    case 2:
                        total += 160 * quantity;
                        break;
                    case 3:
                        total += 100 * quantity;
                        break;
                    default:
                        cout<<"Invalid choice!"<<endl;
                }
                break;

            case 4: 
                displayBiryaniMenu();
                cout<<"Please enter which biryani you would like to have: ";
                cin>>subChoice;
                cout<<"Please enter the quantity: ";
                cin>>quantity;

                switch(subChoice){
                    case 1:
                        total += 220 * quantity;
                        break;
                    case 2:
                        total += 250 * quantity;
                        break;
                    case 3:
                        total += 300 * quantity;
                        break;
                    default:
                        cout<<"Invalid choice!"<<endl;
                }
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }

        cout<<"Do you want to continue? (1 for Yes / 0 for No): ";
        cin>>choice;

    } while(choice == 1);

    cout<<"Bill for " << customerName << ":"<<endl;
    cout<<"Total Amount: Rs. "<<total<<endl;
}

int main() {
    cout<<"----------Top tech.fast food----------"<<endl;
    string customerName;
    cout<<"Please enter your name: ";
    cin>>customerName;

    cout<<"Hello "<<customerName<<endl;
    takeOrder(customerName);

    cout<<"Thanks for ordering at Top Tech Fast Food!"<<endl;

    return 0;
}