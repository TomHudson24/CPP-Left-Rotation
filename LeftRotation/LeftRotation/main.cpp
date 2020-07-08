#include <vector>
#include <iostream>
#include <string>
#include <minmax.h>
#include <algorithm>

/*
To get a string of numbers that is of size 'n' to shift to the left 'd' amount. 
*/

//loop through the string, at the ('i'th - amount + the size) mod the size location, place the current value 
std::vector<int> array_left_rotation(std::vector<int> a, int n, int d) {
    std::vector<int> output(n);
    for (int i = 0; i < n; i++)
    {
        output[(i - d + n) % n] = a[i];
    }

    return output;
}
int main() {
    int n;
    int d;
    std::cin >> n >> d;
    std::vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++) {
        std::cin >> a[a_i];
    }
    std::vector<int> output = array_left_rotation(a, n, d);
    for (int i = 0; i < n; i++)
        std::cout << output[i] << " ";
    std::cout << std::endl;
    return 0;
}
#if 0
int main() {

	std::vector<std::string> split_string(std::string);

	std::string nd_temp;
	std::cin >> nd_temp;

	std::vector<std::string> nd = split_string(nd_temp);

	int n = std::stoi(nd[0]);
	int d = std::stoi(nd[1]);

	std::string a_temp_temp;
	std::cin >> a_temp_temp;

	std::vector<std::string> a_temp = split_string(a_temp_temp);

    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        std::cout << a[i] << std::endl;
    }
    std::vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];

        if (i != result.size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << "\n";

    return 0;
}

std::vector<std::string> split_string(std::string input_string) {
    std::string::iterator new_end = std::unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    std::vector<std::string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != std::string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
#endif