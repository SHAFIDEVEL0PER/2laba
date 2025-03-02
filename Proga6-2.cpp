#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int countPunctuation(const std::string& sentence) {
    int count = 0;
    for (char c : sentence) {
        if (c == '.' || c == ',' || c == '!' || c == '?' || c == ';' || c == ':' || c == '-') {
            count++;
        }
    }
    return count;
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

    std::stringstream iss(fullText);
    std::string sentence;
    int maxPunctuationCount = 0;
    std::vector<std::string> sentencesWithMaxPunctuation;

    while (std::getline(iss, sentence, '.')) { // ��������� ����������� �� �����
        if (sentence.empty()) {
            continue;
        }

        int punctuationCount = countPunctuation(sentence);
        if (punctuationCount > maxPunctuationCount) {
            maxPunctuationCount = punctuationCount;
            sentencesWithMaxPunctuation.clear();
            sentencesWithMaxPunctuation.push_back(sentence);
        }
        else if (punctuationCount == maxPunctuationCount) {
            sentencesWithMaxPunctuation.push_back(sentence);
        }
    }

    for (const std::string& sent : sentencesWithMaxPunctuation) {
        std::cout << sent << "." << std::endl; // ������� �����������
    }

    return 0;
}