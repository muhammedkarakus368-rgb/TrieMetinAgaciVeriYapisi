#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ALFABE_BOYUTU 26

struct TrieNode {
    struct TrieNode *cocuklar[ALFABE_BOYUTU];
    bool kelimeBittiMi;
};

struct TrieNode *yeniDugum() {
    struct TrieNode *pDugum = (struct TrieNode *)malloc(sizeof(struct TrieNode));
    pDugum->kelimeBittiMi = false;
    for (int i = 0; i < ALFABE_BOYUTU; i++) pDugum->cocuklar[i] = NULL;
    return pDugum;
}

void ekle(struct TrieNode *root, const char *anahtar) {
    struct TrieNode *pCrawl = root;
    for (int i = 0; anahtar[i] != '\0'; i++) {
        int index = anahtar[i] - 'a';
        if (!pCrawl->cocuklar[index]) pCrawl->cocuklar[index] = yeniDugum();
        pCrawl = pCrawl->cocuklar[index];
    }
    pCrawl->kelimeBittiMi = true;
}

int main() {
    struct TrieNode *root = yeniDugum();
    ekle(root, "omer");
    ekle(root, "odev");
    printf("Trie olusturuldu ve kelimeler eklendi.\n");
    return 0;
}