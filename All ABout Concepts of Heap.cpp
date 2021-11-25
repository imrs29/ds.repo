//Introduction to Heap

 # Heap Types
 # Tree Concepts
 # Max/Min Heap
 # Identification of Heap usingg examples

            Complete Binary Tree
              /            \
             /              \
            /                \
    Perfect Binary       Almost Complete Binary
        Tree                     Tree


/** Perfect Binary Tree **/

In this tree, all the levels are completely filled.

    1             1           1
   / \           / \         / \
  2   3         2   3       2   3
 / \  /\                   / \
4   5 6 7                 4   5  <-- Not a Complete Binary Tree

if the depth is N then uptil level N - 1 all these will be the internal levels


/** Almost Complete Binary Tree **/

1. levels should be present only at the last and 2nd last level.
2. levels at same level must be filled from left to right.

    1            1               1           1           1
   /            / \             / \         / \         / \
  2            2   3           2   3       2   3       2   3
                                            \         / \
                                             4       4   5
                                                    /
                                                   6

Yes           Yes                Yes         No       No


/ ***** Heap Data Structures ***** /

1. tree - based data Structures
2. Complete tree --> only Binary Tree Heap is required. we can have
                        3'ary ..... n'ary heap as well.

3. This data Structures follows heap property.
 
                  Types 
                 /     \
            min-heap    max-heap



MAX - HEAP -> IT is a complete binary tree in which root should
----------      always be maximum and same goes for all sub-trees.

         100                25
         / \               /  \
        10  20            12  16
       / \  /            / \  / \
       1 4  3           13 10 8  14  <-- complete binary tree
--> Complete Binary             --> Doesn't follow heap property
    tree
--> follows heap property


MIN- HEAP --> It is a Complete binary tree in which root should
              always be minimum and same goes for all sub - trees.

         1                          3
        / \                         / \ 
       10  20                      10  20
      / \                         / \  /
    100  300                     30 40 15

* Complete binary tree          * Complete binary tree
* follows heap property         *  Doesn't follow heap
