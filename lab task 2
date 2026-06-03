#include <iostream>
#include <string>
using namespace std;

struct TripLog {
    float distance;
    float fuelUsed;
    float fuelLeft;
};

class Vehicle {
private:
    string clr;
    string regNo;
    float tankFuel;
    float kmPerLitre;
    TripLog history[50];
    int tripCount;

public:
    Vehicle() {
        clr = "White";
        regNo = "MONZ1L4-21";
        tankFuel = 50;
        kmPerLitre = 60;
        tripCount = 0;
    }

    Vehicle(string c, string rn, float f, float m) {
        clr = c;
        regNo = rn;
        tankFuel = f;
        kmPerLitre = m;
        tripCount = 0;
    }

    void assignColor(string c)  { clr = c; }
    void assignRegNo(string rn) { regNo = rn; }
    void assignFuel(float f)    { tankFuel = f; }
    void assignMileage(float m) { kmPerLitre = m; }

    string fetchColor()  { return clr; }
    string fetchRegNo()  { return regNo; }
    float fetchFuel()    { return tankFuel; }
    float fetchMileage() { return kmPerLitre; }

    void drive(float dist) {
        float used = dist / kmPerLitre;
        if (used > tankFuel) {
            cout << "Not enough fuel!" << endl;
            return;
        }
        tankFuel -= used;
        history[tripCount++] = {dist, used, tankFuel};
        cout << "Travelled : " << dist << " KM | Fuel Left : " << tankFuel << " L" << endl;
    }

    void showInfo() {
        cout << "Color    : " << clr << endl;
        cout << "Reg No   : " << regNo << endl;
        cout << "Fuel     : " << tankFuel << " L" << endl;
        cout << "Mileage  : " << kmPerLitre << " KM/L" << endl;
    }

    void showHistory() {
        if (tripCount == 0) {
            cout << "No trips yet." << endl;
            return;
        }
        float totalDist = 0, totalFuel = 0;
        cout << "------------------------------------------" << endl;
        cout << " Trip   Distance   Fuel Used   Fuel Left" << endl;
        cout << "------------------------------------------" << endl;
        for (int i = 0; i < tripCount; i++) {
            totalDist += history[i].distance;
            totalFuel += history[i].fuelUsed;
            cout << "  " << i+1
                 << "      " << history[i].distance << " KM"
                 << "      " << history[i].fuelUsed << " L"
                 << "      " << history[i].fuelLeft << " L" << endl;
        }
        cout << "------------------------------------------" << endl;
        cout << "Total : " << totalDist << " KM | " << totalFuel << " L used" << endl;
    }
};

int main() {
    Vehicle v1;
    cout << "===== Default Car =====" << endl;
    v1.showInfo();

    string c, rn;
    float f, m;
    cout << "\n===== Enter Car Info =====" << endl;
    cout << "Color   : "; cin >> c;
    cout << "Reg No  : "; cin >> rn;
    cout << "Fuel    : "; cin >> f;
    cout << "Mileage : "; cin >> m;

    Vehicle v2(c, rn, f, m);

    cout << "\n===== Car Info =====" << endl;
    v2.showInfo();

    char again;
    cout << "\n===== Start Driving =====" << endl;
    do {
        float dist;
        cout << "Distance (KM) : "; cin >> dist;
        v2.drive(dist);
        cout << "Drive again? (y/n) : "; cin >> again;
    } while (again == 'y');

    cout << "\n===== Trip History =====" << endl;
    v2.showHistory();

    return 0;
}
