# Soru 3: Trie (Metin Ağacı) Veri Yapısı

Bu bölümde Trie veri yapısının tanımı yapılmış ve C dili ile temel bir örneği kodlanmıştır.

## Trie Nedir?
Trie, özellikle metin tabanlı verileri (kelime, sözlük vb.) saklamak için kullanılan, her düğümün alfabedeki harfleri temsil ettiği bir ağaç yapısıdır.

## Avantajları
- Kelime arama işlemleri kelimenin uzunluğu (L) kadar sürer, yani O(L) karmaşıklığa sahiptir.
- Ortak öneke (prefix) sahip kelimeler bellekte daha verimli saklanır.

## İçerik
- `struct TrieNode` tanımı.
- Yeni düğüm oluşturma ve kelime ekleme (`insert`) fonksiyonları.