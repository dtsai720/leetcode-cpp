#include "lru_cache.h"

namespace LRUCache {

void Solution::removeNode(Node* node) {
    Node* prev = node->prev;
    Node* next = node->next;
    prev->next = next;
    next->prev = prev;
}

void Solution::addNode(Node* node) {
    Node* prev = tail->prev;
    prev->next = node;
    node->prev = prev;
    node->next = tail;
    tail->prev = node;
}

Solution::Solution(int capacity) {
    this->capacity = capacity;
    head = new Node(-1, -1);
    tail = new Node(-1, -1);
    head->next = tail;
    tail->prev = head;
}

int Solution::get(int key) {
    auto it = cache.find(key);
    if (it == cache.end()) {
        return -1;
    }

    Node* node = it->second;
    this->removeNode(node);
    this->addNode(node);
    return node->value;
}

void Solution::put(int key, int value) {
    auto it = cache.find(key);
    if (it != cache.end()) {
        Node* node = it->second;
        this->removeNode(node);
    } else if (this->capacity == this->cache.size()) {
        Node* node = head->next;
        this->removeNode(node);
        cache.erase(node->key);
    }
    Node* node = new Node(key, value);
    this->addNode(node);
    cache[key] = node;
}

}  // namespace LRUCache
