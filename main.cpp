#include <iostream>
#include <ctype.h>
#include <string>
#include <vector>
#include "trie.h"
#include "trie_node.h"
using namespace std;

int main()
{
    trie myTrie;
    vector<string> vec;
    myTrie.insert_word("hello");
    myTrie.insert_word("how");
    myTrie.insert_word("hi");
    myTrie.insert_word("heee");
    myTrie.insert_word("seed");
    cout << myTrie.get_word("hello") << endl;
    cout << myTrie.get_word("hey") << endl;
    //cout << myTrie.count_words("h");
    myTrie.return_words("h",vec);
    for(int i = 0;i<vec.size();++i) cout << vec[i] << endl;
    return 0;
}
