#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValidID(const string& id) {
	const int weights[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	const char checkCodes[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	for (int i = 0; i < 17; ++i) {
		if (!isdigit(id[i])) {
			return false;
		}
	}
	int sum = 0;
	for (int i = 0; i < 17; ++i) {
		sum += (id[i] - '0') * weights[i];
	}
	int Z = sum % 11;
	return id[17] == checkCodes[Z];
}

int main() {
	int N;
	cin >> N;
	vector<string> invalidIDs;
	for (int i = 0; i < N; ++i) {
		string id;
		cin >> id;
		if (!isValidID(id)) {
			invalidIDs.push_back(id);
		}
	}
	if (invalidIDs.empty()) {
		cout << "All passed" << endl;
	} else {
		for (size_t i = 0; i < invalidIDs.size(); ++i) {
			cout << invalidIDs[i] << endl;
		}
	}
	return 0;
}

