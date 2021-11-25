// power of heap
// # Importance of heap
// # heap vs other ds
// # comparitive study

//unsorted array
// 2 3 1 8 4

// insert (7) --> o(1)
// search (8) --> o(n)
// find_min() --> o(n)
//delete_min() --> o(n)

// sorted array
// 4 6 8 9 10
// insert (7) --> o(n)
// search (9) --> o(logn) --> binary search
// find_min() --> o(1)
//find_max() --> o(n)

//Linked List (Like an unsorted array)
// 8  4  2  10  9
// Insert(9) --> O(1)
// Search(9) --> O(N)
// Find_Min() --> O(N)
// Delete_Min() --> O(N)

//Linked List (Like a sorted array)
// 8  4  2  10  9
// Insert(9) --> O(N)
// Search(9) --> O(log N)
// Find_Min() --> O(1)
// Delete_Min() --> O(1)

/* MIN HEAP */
// INSERT(ELEMENT) --> O(log N)
// Search(Element) --> O(N)
// Find_Min() --> O(1) 
// Delete_Min() --> O(log N)

//RECAP

--------|------------|------------|------------|-----------
        |  Insert    |   search   |    Find_Min| Delete_Min
-----------------------------------------------------------        
Unsorted|   O(1)     |  O(N)      |   O(N)     |  O(N)
Array   |            |            |            |
------------------------------------------------------------
 Sorted |   O(N)     |   O(Log n )|     O(1)   |  O(N)
  Array |            |            |            |
------------------------------------------------------------
 Linked | O(1)       |  O(N)      |   O(N)     |  O(N)
 List   |            |            |            |
------------------------------------------------------------
 Min    | O(log n)   |  O(N)      |   O(1)     |  O(Log N)
 Heap   |            |            |            |
