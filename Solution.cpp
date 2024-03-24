
#include <vector>
#include <string>
using namespace std;

class Solution {

     static constexpr array<char, 2> INPUT_CHARS { { 'D', 'I' } };

public:
    vector<int> diStringMatch(const string& input) const {

        int smallerValue = 0;
        int largerValue = input.length();
        vector<int> permutations(input.length() + 1);

        for (size_t i = 0; i < input.length(); ++i) {
            permutations[i] = (input[i] == INPUT_CHARS[1]) ? smallerValue++ : largerValue--;
        }
        permutations[input.length()] = smallerValue;

        return permutations;
    }
};
