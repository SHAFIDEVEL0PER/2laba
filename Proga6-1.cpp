#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include <vector>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string capitalizeFirstLetterOfVowelWords(const std::string& text) {
    std::stringstream iss(text);
    std::string result;
    std::string word;

    while (iss >> word) {
        if (!word.empty() && isVowel(word[0])) {
            word[0] = toupper(word[0]); // �������� ������ ����� �� ���������
        }
        result += word + " ";
    }

    return result;
}

int main() {
    std::ifstream inputFile("input.txt"); // ���� � �������� �������
    if (!inputFile) {
        std::cerr << "�� ������� ������� ����!" << std::endl;
        return 1;
    }

    std::string line;
    std::string fullText;

    while (std::getline(inputFile, line)) {
        fullText += line + "\n"; // ��������� ����� ���������
    }

    inputFile.close();

    std::string transformedText = capitalizeFirstLetterOfVowelWords(fullText);
    std::cout << transformedText;

    return 0;
}