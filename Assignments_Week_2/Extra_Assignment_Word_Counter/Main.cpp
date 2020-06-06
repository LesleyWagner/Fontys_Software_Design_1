/**
* Extra assignment word counter. Gets a sentence from a user and splits it into individual words,
* counting the frequency with which the word occurs in the sentence.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

/**
 * Get word counts from [sentence] and return them from a hashmap with <word, count>.
 * The function takes every word as a unique string: i.e. doesn't take into account 
 * capital letters or punctuation.
 *
 * @param string sentence : string of words seperated by spaces
 * @return map<string, int> container for words mapped to its count in the sentence.
 */
map<string, int> getWordCounts(string sentence) {
	map<string, int> wordFrequencies;

	string word;
	istringstream wordStream(sentence);
	while (wordStream >> word) {
		if (wordFrequencies.count(word) == 1) {
			wordFrequencies[word] += 1;
		}
		else {
			wordFrequencies[word] = 1;
		}
	}

	return wordFrequencies;
}

int main(void) {
	string sentence;
	map<string, int> wordFrequencies;

	cout << "Please insert a sentence:" << endl;
	getline(cin, sentence);

	wordFrequencies = getWordCounts(sentence);

	cout << "\nIn the sentence provided, there were the following unique words:\n";

	for (pair<string, int> wordCount : wordFrequencies) {
		cout << "Word\t\t" << wordCount.first << "\t\t used: " <<
			wordCount.second << " time(s)" << endl;
	}
}

