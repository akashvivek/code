
# Trie

### Detail
- Trie is a tree-like data structure used for storing a set or  array where the keys are usually strings.
- It is also called a "prefix tree".
- If two strings have a common prefix then they will have the same ancestor in the trie.
- In a trie, each node represents a single character.

### Insertion
- Each character of the input key is inserted as an individual Trie node.
- Children is an array of pointers to next-level trie nodes.


   1. First check if character is present in current trie node or not. 
   2. If present then move to node to which it is pointing. 
   3. If not then create new trie node and point current character index to created node and move to new node. 
   4. Repeat above process till all charater inserted.
   5. As all character has been traversed so make flag = true, which means string completed.
    
