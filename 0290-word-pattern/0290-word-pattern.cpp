class Solution {
public:
    bool wordPattern(string pattern, string str) {
    unordered_map<char, string> charToStrMap;
    unordered_map<string, char> strToCharMap;
    istringstream ss(str);
    string word;
    
    int i = 0;
    while (ss >> word) {
        if (i >= pattern.size()) return false;

        char currentChar = pattern[i];
        if (charToStrMap.find(currentChar) == charToStrMap.end() && strToCharMap.find(word) == strToCharMap.end()) {
            charToStrMap[currentChar] = word;
            strToCharMap[word] = currentChar;
        } else {
            if (charToStrMap[currentChar] != word || strToCharMap[word] != currentChar) {
                return false;
            }
        }

        i++;
    }

    return i == pattern.size();
}
};