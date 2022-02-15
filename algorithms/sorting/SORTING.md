## What is sorting?


A sorting algorithm is an algorithm that puts elements of a list into an order.

Sorting algorithms can be classified by:

-   **Computational complexity**
    -   **Best, worst and average case behavior** in terms of the size of the list. For typical serial sorting algorithms, good behavior is O(_n_ log _n_), with parallel sort in O(log2 _n_), and bad behavior is O(n<sup>2</sup>). Ideal behavior for a serial sort is O(_n_), but this is not possible in the average case. Optimal parallel sorting is O(log _n_).
    -   **Swaps** for "in-place" algorithms.
    
-  **Memory**  usage (and use of other computer resources). In particular, some sorting algorithms are in-place. Strictly, an in-place sort needs only O(1) memory beyond the items being sorted; sometimes O(log _n_) additional memory is considered "in-place".
-  **Recursion**: Some algorithms are either recursive or non-recursive, while others may be both (e.g., merge sort).
-  **Stability**: stable sorting algorithms maintain the relative order of records with equal keys (i.e., values).
-   Whether or not they are a **comparison sort**. A comparison sort examines the data only by comparing two elements with a comparison operator.
-   General method: insertion, exchange, selection, merging, _etc._ Exchange sorts include bubble sort and quicksort. Selection sorts include cycle sort and heapsort.
-   Whether the algorithm is **serial or parallel**. The remainder of this discussion almost exclusively concentrates upon serial algorithms and assumes serial operation.
-   **Adaptability**: Whether or not the presortedness of the input affects the running time. Algorithms that take this into account are known to be adaptive.
-   **Online**: An algorithm such as Insertion Sort that is online can sort a constant stream of input.



| Name          | Best    | Average | Worst   | Memory | Stable | Method       |
| ------------- | ------- | ------- | ------- | ------ | ------ | ------------ |
| Quick         | nlogn   | nlogn   | n^2     | nlogn  | No     | Partitioning |
| [[MERGESORT]]     | nlog(n) | nlog(n) | nlog(n) | n      | Yes    | Merging      |
| Heap          | nlog(n) | nlog(n) | nlog(n) | 1      | No     | Selection    |
| Insertion     | n       | n^2     | n^2     | 1      | Yes    | Insertion    |
| Selection     | n^2     | n^2     | n^2     | 1      | Yes    | Exchanging   |
| Bubble        | n       | n^2     | n^2     | 1      | Yes    | Exchanging   |


