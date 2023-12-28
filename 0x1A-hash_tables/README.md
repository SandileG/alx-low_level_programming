# Hash Tables

# Hash Function:

# Definition:
A hash function is a mathematical function that takes an input (or 'message') and returns a fixed-size string of characters, which is typically a hash code. The output, often a hash value, is commonly used in data structures like hash tables for quick data retrieval.

# Characteristics of a Good Hash Function:

# Deterministic: 
For the same input, a hash function must always produce the same output.

# Efficient:
The computation of the hash value should be fast and not resource-intensive.

# Uniform Distribution:
Ideally, hash values should be evenly distributed across the output space to minimize collisions.

# Avalanche Effect:
A small change in the input should result in a significantly different hash value.

# Hash Table:

# Definition:
A hash table is a data structure that uses a hash function to map keys to indices of an array. It enables rapid insertion, deletion, and retrieval of data. Each index in the array is often called a "bucket," and each bucket contains a linked list or other data structure to handle collisions.

# Working:

* The hash function converts a key into an index.

* If there is no collision (i.e., the index is empty), the key-value pair is stored at that index.

* In case of a collision, additional data structures (like linked lists or open addressing) are used to manage multiple key-value pairs at the same index.

# Collision:

# Definition:
* A collision occurs when two different keys hash to the same index in a hash table.

# Collision Resolution:

# Chaining: 
* Each index of the array contains a linked list of elements that hash to the same index.

# Open Addressing:
* Search for the next open slot in the array when a collision occurs.

# Advantages and Drawbacks of Hash Tables:

# Advantages:
* Fast data retrieval: O(1) on average for well-designed hash functions.
* Efficient for search, insert, and delete operations.

# Drawbacks:
* Potential for collisions, impacting performance.
* Overhead of maintaining the hash table structure.

# Common Use Cases of Hash Tables:

# Data Indexing:
* Storing and retrieving data quickly based on a key.

# Caching:
* Storing frequently accessed data to improve performance.

# Distributed Systems:
* Ensuring uniform distribution of data across nodes.
