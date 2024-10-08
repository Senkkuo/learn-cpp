#include <iostream>
#include <string>

using namespace std;



class CLift {
    int mCurrentLevel;
    int mWishLevel;

public:

    void MaxLevel(int maxLevel) { mCurrentLevel = maxLevel; }
    void MinLevel(int minLevel) { mWishLevel = minLevel; }
    int MaxLevel() { return mCurrentLevel; }
    int MinLevel() { return mWishLevel; }

    CLift(int wish, int cur) : mCurrentLevel(cur), mWishLevel (wish) {}
    ~CLift() {}

    string GetString() {
        return ;
    }

    void Print() {
        cout << GetString();
    }

   


};

void qestionLevel() {
    cout << "На каком вы этаже?" << endl;
    cin >> currentLevel;
    cout << "На какой этаж нужно?" << endl;
    cin >> wishLevel;
}

void actLift(int currentLevel, int wishLevel) {
    if (currentLevel < wishLevel) {
        for (int i = 0; i < wishLevel; i++) {
            cout << "Этаж: " + to_string(currentLevel + i) << endl;
        }
    }
    else if (currentLevel > wishLevel) {
        for (int i = 0; i < currentLevel - wishLevel; i++) {
            cout << "Этаж: " + to_string((currentLevel - i) - 1) << endl;
        }
    }
    cout << "Вы приехали" << endl;
}



int main()
{
    setlocale(LC_ALL, "");


    while (true) {
        qestionLevel();
        actLift(currentLevel, wishLevel);
    }

    
    
}
