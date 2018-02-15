#include <stdio.h>
#define SZ 26

struct Node {

    bool leafCount;
    Node *child[SZ];
}

Node *create_trie_node(){
    
    Node *node = (Node *)malloc(sizeof(Node));
    node->leafCount = 0;
    for(register int i = 0; i < SZ; i++)
        node->child[i] = 0;
    return node;
}

void insert_trie_node(Node *root, char *key){

    Node *cur = root;
    for(register int i = 0; key[i]; i++){
        if(cur->child[key[i] - 'a'] == 0)
            cur->child[key[i] - 'a'] = create_trie_node();
        cur = cur->child[key[i] - 'a'];
    }
    cur->leafCount++;
}



Node* find_trie_node(Node *root, char *key){

    Node *cur = root;
    for(register int i = 0; key[i]; i++){
        if(cur->child[key[i] - 'a'] == 0)
            return 0;
        cur = cur->child[key[i] - 'a'];
    }
    return cur;
}
