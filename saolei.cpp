#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    random_device rd;
    default_random_engine engine(rd());
    uniform_int_distribution<int> distribution(0, 1);
    int level, char1, char2, all, mine, clear = 0, state = 1;
    cout << "Enter the number of level: ";
    cin >> level;
    all = level * level;
    cout << "Enter the number of mines: ";
    cin >> mine;
    if (mine < 0 || mine > all) {
        cout << "Invalid number of mines! Must be between 0 and " << all << endl;
        return 1;
    }
    vector<vector<int>> a(level, vector<int>(level, 0));
    vector<vector<char>> b(level, vector<char>(level, '#'));
    vector<pair<int, int>> positions;
    for(int i = 0; i < level; i++) {
        for(int j = 0; j < level; j++) {
            positions.emplace_back(i, j);
        }
    }
    shuffle(positions.begin(), positions.end(), engine);
    for(int i = 0; i < mine; i++) {
        int x = positions[i].first;
        int y = positions[i].second;
        a[x][y] = 1;
    }
    while (true) {
        cout << endl << endl;
        for(int i = 0; i < level; i++) {
            cout << "+";
            for(int j = 0; j < level; j++) {
                cout << "-" << "+";
            }
            cout << endl;
            cout << "|";
            for(int j = 0; j < level; j++) {
                cout << b[i][j] << "|";
            }
            cout << endl;
        }
        cout << "+";
        for(int j = 0; j < level; j++) {
            cout << "-" << "+";
        }
        cout << endl;
        if(state == 0) {
            cout << "Game over! You hit a mine!" << endl;
            cout << endl << endl;
            for(int i = 0; i < level; i++) {
                cout << "+";
                for(int j = 0; j < level; j++) {
                    cout << "-" << "+";
                }
                cout << endl;
                cout << "|";
                for(int j = 0; j < level; j++) {
                    cout << a[i][j] << "|";
                }
                cout << endl;
            }
            cout << "+";
            for(int j = 0; j < level; j++) {
                cout << "-" << "+";
            }
            break;
        }
        if(clear == all - mine) {
            cout << "Congratulations! You won the game!" << endl;
            break;
        }
        cout << "Enter the coordinates of the cell to open (e.g., 1 2): ";
        if(!(cin >> char1 >> char2)) {
            cout << "Invalid input! Please enter two integers." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        char1--;
        char2--;
        if(char1 >= level || char2 >= level || char1 < 0 || char2 < 0) {
            cout << "Input coordinates out of range!" << endl;
            continue;
        }
        if(a[char1][char2] == 1) {
            b[char1][char2] = '*';
            state = 0;
        } else {
            int num = 0;
            for(int dx = -1; dx <= 1; dx++) {
                for(int dy = -1; dy <= 1; dy++) {
                    int checkX = char1 + dx;
                    int checkY = char2 + dy;
                    if(checkX >= 0 && checkX < level &&
                       checkY >= 0 && checkY < level) {
                        if(a[checkX][checkY] == 1) {
                            num++;
                        }
                        if(num == 0) {
                            if (b[checkX][checkY] == '#')
                                b[checkX][checkY] = '.';
                        }
                    }
                }
            }
            b[char1][char2] = '0' + num;
            clear++;
        }
    }
    return 0;
}
