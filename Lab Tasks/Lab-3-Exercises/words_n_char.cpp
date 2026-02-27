#include <iostream>
#include <string>  
using namespace std;
int main() {
    string sentence;
    int nwords = 1, nchars = 0;
    cout << "Enter the sentence:" << endl;
    getline(cin, sentence);  //I replace get.cin with getline which reads the full line not character by character
    for (char x : sentence) {
        if (x == ' ')
            nwords++;
        else
            nchars++;
    }
    cout << "No. of words: " << nwords << endl;
    cout << "No. of characters: " << nchars << endl;
    return 0;
}
