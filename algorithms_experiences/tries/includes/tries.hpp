#ifndef __TRIE_DATA_STRUCTURE_HPP__
#define __TRIE_DATA_STRUCTURE_HPP__

#include <unordered_map>

#define TRIE_STUFF_SUCCEED           0
#define TRIE_SYSTEM_ERROR           -1
#define TRIE_PARAM_NULL_PTR         -6001

struct Trie
{
    bool is_whole_word;
    std::unordered_map< char, Trie* > children;
};


typedef struct Trie * TriePtr;


extern int
trie_insert( TriePtr *, const std::string );

#endif /*  __TRIE_DATA_STRUCTURE_HPP__ */