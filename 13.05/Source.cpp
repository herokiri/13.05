#include"Header.h"

int m_random(int i) {
	srand(time(NULL)+i);
	return rand() % 10 - 5;
}

void generate_file(const string &file, const int &a) {
	ofstream out(file);

	for (int i = 0; i < a; i++) {
		out << m_random(i) << " ";
	}
	out.close();
}

double sr(const string& file, const int &a) {
	ifstream in(file);

	string line;
	int sum = 0;
	if (in.is_open()) {
		while (getline(in, line, ' ')) {
			sum += stoi(line);
		}
	}
	return sum / (a * 1.0);

}

int z1() {
	string file = "data.txt";
	int a = 4;
	generate_file(file, a);
	cout << sr(file, a);
	return 0;
}