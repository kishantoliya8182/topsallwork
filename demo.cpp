#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Cricketer's Age: ";
        cin >> age;
    }

    void displayCricketerData() {
        cout << "Cricketer's Name: " << name << endl;
        cout << "Cricketer's Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputCricketerData(); // Reusing base class method to input name and age
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns() {
        // Some logic to calculate average runs, for simplicity, let's assume it's totalRuns divided by 10
        averageRuns = totalRuns / 10.0;
    }

    void displayBatsmanData() {
        displayCricketerData(); // Reusing base class method to display name and age
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman player;
    cout << "Enter Batsman's Data: " << endl;
    player.inputBatsmanData();
    cout << "\nBatsman's Details: " << endl;
    player.displayBatsmanData();

    return 0;
}

