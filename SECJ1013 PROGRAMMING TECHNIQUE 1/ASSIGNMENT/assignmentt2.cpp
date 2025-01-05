//MICHELLE HO CHIA XIN
//A24CS0110

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

double ativa();
double aruz();
double bezza();
double myvi();
double alza();
double axia();

int main () {
    int years;
    double carPrice, down, rate, monthlyInst;
    char choice, model;

    do {

    do {

    do {

    cout << "Perodua Car Loan Calculator\n\n";
    cout << "Model [1-Ativa, 2-Aruz, 3-Bezza, 4-Myvi, 5-Alza, 6-Axia]: ";
    cin >> model;

    if (!isdigit(model)) {
        cout << "\nPlease enter a valid model NUMBER.\n\n";
    }

    } while (!isdigit(model));

    if (model<'1'||model>'6') {
        cout << "\nPlease enter a valid model.\n\n";
    }

    } while (model<'1'||model>'6');


    switch (model) {
        case '1': 
        carPrice=ativa();
        break;

        case '2': 
        carPrice=aruz();
        break;

        case '3': 
        carPrice=bezza();
        break;

        case '4': 
        carPrice=myvi();
        break;

        case '5': 
        carPrice=alza();
        break;

        case '6': 
        carPrice=axia();
        break;  
    }

    cout << "Down Payment (MYR): ";
    cin >> down;
    cout << "Interest Rate (%): ";
    cin >> rate;
    cout << "Repayment period (in years): ";
    cin >> years;

    monthlyInst=((carPrice-down)+((carPrice-down)*(rate/100)*(years)))/(years*12);

    cout << "\nMONTHLY INSTALLMENT (MYR): " << fixed << setprecision(2) << monthlyInst;

    do {
    cout << "\n\nDo you want to enter other data? [Y @ N]: ";
    cin >> choice;

    if (choice !='Y' && choice !='y' && choice !='N' && choice !='n') {
        cout << "Please enter a valid choice.\n";
    }
    } while (choice !='Y' && choice !='y' && choice !='N' && choice !='n');

    } while (choice=='Y' || choice=='y');

    cout << "\nThank you :)\n";

    system ("pause");
    return 0;

}

double ativa() {
    char carColour, variant, region;
    string colour, location, carVariant;
    double price;

    do {

    do {

    cout << "Variants [1-1.0L X TURBO (CVT), 2-1.0L H TURBO (CVT), 3-1.0L AV TURBO (CVT)]: ";
    cin >> variant;

    if (!isdigit(variant)) {
        cout << "\nPlease enter a valid variant NUMBER.\n\n";
    }

    } while (!isdigit(variant));

    if (variant<'1'||variant>'3') {
        cout << "\nPlease enter a valid variant.\n";
    } 

    } while (variant<'1'||variant>'3');

    do {

    do { 

    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia, 3-Labuan, 4-Langkawi]: ";
    cin >> region;

    if (!isdigit(region)) {
        cout << "\nPlease enter a valid region NUMBER.\n\n";
    }

    } while (!isdigit(region));

    if (region<'1'||region>'4') {
        cout << "\nPlease enter a valid region.\n";
    } 

    } while (region<'1'||region>'4');


    if (variant=='1') {
        carVariant="1.0L X TURBO (CVT)";
        colour="Metallic";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=62500;
        } else if (region=='2') {
            location="East Malaysia";
            price=64500;
        } else if (region=='3') {
            location="Labuan";
            price=59980;
        } else {
            location="Langkawi";
            price=58650;
        }

    } else if (variant=='2') {
        carVariant="1.0L H TURBO (CVT)";

        do {

        do {
        cout << "Car colour [1-Metallic, 2-Special metallic]: ";
        cin >> carColour;

        if (!isdigit(carColour)) {
            cout << "\nPlease enter a valid car colour NUMBER.\n\n";
        }

        } while (!isdigit(carColour));

        if (carColour<'1'||carColour>'2') {
            cout << "\nPlease enter a valid car colour.\n";
        }
        } while (carColour<'1'||carColour>'2');

        if (carColour=='1') {
            colour="Metallic";

            if (region=='1') {
                location="Peninsular Malaysia";
                price=67300;
            } else if (region=='2') {
                location="East Malaysia";
                price=69300;
            } else if (region=='3') {
                location="Labuan";
                price=64410;
            } else {
                location="Langkawi";
                price=63080;
            }

        } else {
            colour="Special Metallic";

            if (region=='1') {
                location="Peninsular Malaysia";
                price=67800;
            } else if (region=='2') {
                location="East Malaysia";
                price=69800;
            } else if (region=='3') {
                location="Labuan";
                price=64900;
            } else {
                location="Langkawi";
                price=63570;
            }

        }

    } else {
        carVariant="1.0L AV TURBO (CVT)";

        do {
        cout << "Car colour [1-Metallic, 2-Special metallic, 3-2-Tone Special Metallic (Black Roof)]: ";
        cin >> carColour;

        if (carColour<'1'||carColour>'3') {
            cout << "\nPlease enter a valid car colour.\n";
        }
        } while (carColour<'1'||carColour>'3');

        if (carColour=='1') {
            colour="Metallic";

            if (region=='1') {
                location="Peninsular Malaysia";
                price=72600;
            } else if (region=='2') {
                location="East Malaysia";
                price=74600;
            } else if (region=='3') {
                location="Labuan";
                price=69360;
            } else {
                location="Langkawi";
                price=68030;
            }

        } else if (carColour=='2') {
            colour="Special Metallic";

            if (region=='1') {
                location="Peninsular Malaysia";
                price=73100;
            } else if (region=='2') {
                location="East Malaysia";
                price=75100;
            } else if (region=='3') {
                location="Labuan";
                price=69850;
            } else {
                location="Langkawi";
                price=68520;
            }

        } else {
            colour="2-Tone Special Metallic (Black Roof)";

            if (region=='1') {
                location="Peninsular Malaysia";
                price=73400;
            } else if (region=='2') {
                location="East Malaysia";
                price=75400;
            } else if (region=='3') {
                location="Labuan";
                price=70130;
            } else {
                location="Langkawi";
                price=68800;
            }

        }

    }

    cout << "\nCar Info\n";
    cout << "Model: Ativa\n";
    cout << "Variant: " << carVariant << "\n";
    cout << "Region: " << location << "\n";
    cout << "Car Colour: " << colour << "\n";
    cout << "Price (MYR): " << fixed << setprecision(2) << price << "\n\n";

    return price;
    
}



double aruz() {
    char variant, region;
    string location, carVariant;
    double price;

    do {
    
    do {

    cout << "Variants [1-Aruz 1.5 AV (Auto), 2-Aruz 1.5 X (Auto)]: ";
    cin >> variant;

    if (!isdigit(variant)) {
        cout << "\nPlease enter a valid car variant NUMBER.\n\n";
    }

    } while (!isdigit(variant));

    if (variant<'1'||variant>'2') {
        cout << "\nPlease enter a valid variant.\n";
    } 

    } while (variant<1||variant>2);

    do {

    do {
    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia, 3-Labuan, 4-Langkawi]: ";
    cin >> region;

    if (!isdigit(region)) {
        cout << "\nPlease enter a valid region NUMBER.\n\n";
    }

    } while (!isdigit(region));

    if (region<'1'||region>'4') {
        cout << "\nPlease enter a valid region.\n";
    } 

    } while (region<'1'||region>'4');

    if (variant=='1') {
        carVariant="Aruz 1.5 AV (Auto)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=77900;
        } else if (region=='2') {
            location="East Malaysia";
            price=79900;
        } else if (region=='3') {
            location="Labuan";
            price=71800;
        } else {
            location="Langkawi";
            price=70900;
        }

    } else {
        carVariant="Aruz 1.5 X (Auto)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=72900;
        } else if (region=='2') {
            location="East Malaysia";
            price=74900;
        } else if (region=='3') {
            location="Labuan";
            price=67400;
        } else {
            location="Langkawi";
            price=66500;
        }

    }

    cout << "\nCar Info\n";
    cout << "Model: Aruz\n";
    cout << "Variant: " << carVariant << "\n";
    cout << "Region: " << location << "\n";
    cout << "Price (MYR): " << fixed << setprecision(2) << price << "\n\n";

    return price;
}



double bezza() {
    char variant, region;
    string location, carVariant;
    double price;

    do {
    
    do {

    cout << "Variants [1-Bezza 1.3 AV (Auto), 2-Bezza 1.3 X (Auto), 3-Bezza 1.0 G (Auto), 4-Bezza 1.0 G (Manual)]: ";
    cin >> variant;

    if (!isdigit(variant)) {
        cout << "\nPlease enter a valid car variant NUMBER.\n\n";
    }

    } while (!isdigit(variant));

    if (variant<'1'||variant>'4') {
        cout << "\nPlease enter a valid variant.\n";
    } 

    } while (variant<'1'||variant>'4');

    do {

    do {

    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia, 3-Labuan, 4-Langkawi]: ";
    cin >> region;

    if (!isdigit(region)) {
        cout << "\nPlease enter a valid region NUMBER.\n\n";
    }

    } while (!isdigit(region));

    if (region<'1'||region>'4') {
        cout << "\nPlease enter a valid region.\n";
    } 

    } while (region<'1'||region>'4');

    if (variant=='1') {
        carVariant="Bezza 1.3 AV (Auto)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=49980;
        } else if (region=='2') {
            location="East Malaysia";
            price=51980;
        } else if (region=='3') {
            location="Labuan";
            price=49580;
        } else {
            location="Langkawi";
            price=48280;
        }

    } else if (variant=='2') {
        carVariant="Bezza 1.3 X (Auto)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=43980;
        } else if (region=='2') {
            location="East Malaysia";
            price=45980;
        } else if (region=='3') {
            location="Labuan";
            price=44180;
        } else {
            location="Langkawi";
            price=42980;
        }

    } else if (variant=='3') {
        carVariant="Bezza 1.0 G (Auto)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=36580;
        } else if (region=='2') {
            location="East Malaysia";
            price=38580;
        } else if (region=='3') {
            location="Labuan";
            price=36780;
        } else {
            location="Langkawi";
            price=35580;
        }

    } else {
        carVariant="Bezza 1.0 G (Manual)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=34580;
        } else if (region=='2') {
            location="East Malaysia";
            price=36580;
        } else if (region=='3') {
            location="Labuan";
            price=34580;
        } else {
            location="Langkawi";
            price=33380;
        }

    }

    cout << "\nCar Info\n";
    cout << "Model: Bezza\n";
    cout << "Variant: " << carVariant << "\n";
    cout << "Region: " << location << "\n";
    cout << "Price (MYR): " << fixed << setprecision(2) << price << "\n\n";

    return price;
}



double myvi() {
    char variant, region;
    string location, carVariant;
    double price;

    do {

    do {

    cout << "Variants [1-Myvi 1.5L AV (CVT), 2-Myvi 1.5L H (CVT), 3-Myvi 1.5L X (CVT), 4-Myvi 1.3L G (CVT), 5-Myvi 1.3L G (CVT) (Without PSDA)]: ";
    cin >> variant;

    if (!isdigit(variant)) {
        cout << "\nPlease enter a valid car variant NUMBER.\n\n";
    }

    } while (!isdigit(variant));

    if (variant<'1'||variant>'5') {
        cout << "\nPlease enter a valid variant.\n";
    } 

    } while (variant<'1'||variant>'5');

    do {
    
    do {

    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia, 3-Labuan, 4-Langkawi]: ";
    cin >> region;

    if (!isdigit(region)) {
        cout << "\nPlease enter a valid region NUMBER.\n\n";
    }

    } while (!isdigit(region));

    if (region<'1'||region>'4') {
        cout << "\nPlease enter a valid region.\n";
    } 

    } while (region<'1'||region>'4');

    if (variant=='1') {
        carVariant="Myvi 1.5L AV (CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=59900;
        } else if (region=='2') {
            location="East Malaysia";
            price=61900;
        } else if (region=='3') {
            location="Labuan";
            price=58810;
        } else {
            location="Langkawi";
            price=58010;
        }

    } else if (variant=='2') {
        carVariant="Myvi 1.5L H (CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=54900;
        } else if (region=='2') {
            location="East Malaysia";
            price=56900;
        } else if (region=='3') {
            location="Labuan";
            price=53980;
        } else {
            location="Langkawi";
            price=53180;
        }

    } else if (variant=='3') {
        carVariant="Myvi 1.5L X (CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=50900;
        } else if (region=='2') {
            location="East Malaysia";
            price=52900;
        } else if (region=='3') {
            location="Labuan";
            price=50050;
        } else {
            location="Langkawi";
            price=49250;
        }

    } else if (variant=='4') {
        carVariant="Myvi 1.3L G (CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=48500;
        } else if (region=='2') {
            location="East Malaysia";
            price=50500;
        } else if (region=='3') {
            location="Labuan";
            price=47860;
        } else {
            location="Langkawi";
            price=47060;
        }

    } else {
        carVariant="Myvi 1.3L G (CVT) (Without PSDA)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=46500;
        } else if (region=='2') {
            location="East Malaysia";
            price=48500;
        } else if (region=='3') {
            location="Labuan";
            price=45860;
        } else {
            location="Langkawi";
            price=45060;
        }
    }

    cout << "\nCar Info\n";
    cout << "Model: Myvi\n";
    cout << "Variant: " << carVariant << "\n";
    cout << "Region: " << location << "\n";
    cout << "Price (MYR): " << fixed << setprecision(2) << price << "\n\n";

    return price;
}



double alza() {
    char variant, region;
    string location, carVariant;
    double price;

    do {

    do {

    cout << "Variants [1-Alza 1.5L AV (D-CVT), 2-Alza 1.5L H (D-CVT), 3-Alza 1.5L X (D-CVT)]: ";
    cin >> variant;

    if (!isdigit(variant)) {
        cout << "\nPlease enter a valid car variant NUMBER.\n\n";
    }

    } while (!isdigit(variant));

    if (variant<'1'||variant>'3') {
        cout << "\nPlease enter a valid variant.\n";
    } 

    } while (variant<'1'||variant>'3');

    do {

    do {

    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia, 3-Labuan, 4-Langkawi]: ";
    cin >> region;

    if (!isdigit(region)) {
        cout << "\nPlease enter a valid region NUMBER.\n\n";
    }

    } while (!isdigit(region));

    if (region<'1'||region>'4') {
        cout << "\nPlease enter a valid region.\n";
    } 

    } while (region<'1'||region>'4');

    if (variant=='1') {
        carVariant="Alza 1.5L AV (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=75500;
        } else if (region=='2') {
            location="East Malaysia";
            price=78000;
        } else if (region=='3') {
            location="Labuan";
            price=73930;
        } else {
            location="Langkawi";
            price=72600;
        }

    } else if (variant=='2') {
        carVariant="Alza 1.5L H (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=68000;
        } else if (region=='2') {
            location="East Malaysia";
            price=70500;
        } else if (region=='3') {
            location="Labuan";
            price=66980;
        } else {
            location="Langkawi";
            price=65650;
        }

    } else {
        carVariant="Alza 1.5L X (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=62500;
        } else if (region=='2') {
            location="East Malaysia";
            price=65000;
        } else if (region=='3') {
            location="Labuan";
            price=61610;
        } else {
            location="Langkawi";
            price=60280;
        }

    } 

    cout << "\nCar Info\n";
    cout << "Model: Alza\n";
    cout << "Variant: " << carVariant << "\n";
    cout << "Region: " << location << "\n";
    cout << "Price (MYR): " << fixed << setprecision(2) << price << "\n\n";

    return price;
}



double axia() {
    char variant, region;
    string location, carVariant;
    double price;

    do {

    do {

    cout << "Variants [1-Axia 1.0L AV (D-CVT), 2-Axia 1.0L SE (D-CVT), 3-Axia 1.0L X (D-CVT), 4-Axia 1.0L G (D-CVT), 5-Axia 1.0L E (5MT)]: ";
    cin >> variant;

    if (!isdigit(variant)) {
        cout << "\nPlease enter a valid car variant NUMBER.\n\n";
    }

    } while (!isdigit(variant));

    if (variant<'1'||variant>'5') {
        cout << "\nPlease enter a valid variant.\n";
    } 

    } while (variant<'1'||variant>'5');

    do {

    do {
    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia, 3-Labuan, 4-Langkawi]: ";
    cin >> region;

    if (!isdigit(region)) {
        cout << "\nPlease enter a valid region NUMBER.\n\n";
    }

    } while (!isdigit(region));

    if (region<'1'||region>'4') {
        cout << "\nPlease enter a valid region.\n";
    } 

    } while (region<'1'||region>'4');

    if (variant=='1') {
        carVariant="Axia 1.0L AV (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=49500;
        } else if (region=='2') {
            location="East Malaysia";
            price=51500;
        } else if (region=='3') {
            location="Labuan";
            price=50090;
        } else {
            location="Langkawi";
            price=48490;
        }

    } else if (variant=='2') {
        carVariant="Axia 1.0L SE (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=44000;
        } else if (region=='2') {
            location="East Malaysia";
            price=46000;
        } else if (region=='3') {
            location="Labuan";
            price=44590;
        } else {
            location="Langkawi";
            price=42990;
        }

    } else if (variant=='3') {
        carVariant="Axia 1.0L X (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=40000;
        } else if (region=='2') {
            location="East Malaysia";
            price=42000;
        } else if (region=='3') {
            location="Labuan";
            price=40590;
        } else {
            location="Langkawi";
            price=38990;
        }

    } else if (variant=='4') {
        carVariant="Axia 1.0L G (D-CVT)";

        if (region=='1') {
            location="Peninsular Malaysia";
            price=38600;
        } else if (region=='2') {
            location="East Malaysia";
            price=40600;
        } else if (region=='3') {
            location="Labuan";
            price=39190;
        } else {
            location="Langkawi";
            price=37590;
        }

    } else {
        carVariant="Axia 1.0L E (5MT)";
        price=22000;
    }

    cout << "\nCar Info\n";
    cout << "Model: Axia\n";
    cout << "Variant: " << carVariant << "\n";
    cout << "Region: " << location << "\n";
    cout << "Price (MYR): " << fixed << setprecision(2) << price << "\n\n";

    return price;
}





