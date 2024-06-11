#ifndef LRUCACHE_H
#define LRUCACHE_H

#include <unordered_map>

namespace LRUCache {

struct Node {
    int key;
    int value;
    Node* prev;
    Node* next;
    Node(int key, int value) : key(key), value(value), prev(nullptr), next(nullptr) {}
};

class Cache {
   public:
    /**
     * @brief get the value of a key
     * @param key: the key
     * @return: the value of the key
     */
    virtual int get(int key) = 0;

    /**
     * @brief put a key-value pair
     * @param key: the key
     * @param value: the value
     */
    virtual void put(int key, int value) = 0;
};

class Solution : public Cache {
   private:
    int capacity;
    Node *head, *tail;
    std::unordered_map<int, Node*> cache;
    /**
     * @brief remove a node from the linked list
     * @param node: the node to be removed
     */
    void removeNode(Node* node);

    /**
     * @brief add a node to the linked list
     * @param node: the node to be added
     */
    void addNode(Node* node);

   public:
    /**
     * @brief constructor
     * @param capacity: the capacity of the cache
     */
    Solution(int capacity);

    /**
     * @brief get the value of a key in the cache
     * @param key: the key
     * @return: the value of the key, -1 if the key does not exist
     */
    int get(int key) override;

    /**
     * @brief put a key-value pair in the cache
     * @param key: the key
     * @param value: the value
     */
    void put(int key, int value) override;
};

}  // namespace LRUCache

#endif  // LRUCACHE_H
