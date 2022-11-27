# Max Heap
Max heap data structure is a specialized full binary tree data structure. In a max heap nodes are arranged based on node value.

Max heap is defined as follows:

_``` Max heap is a specialized full binary tree in which every parent node contains greater or equal value than its child nodes.```_

## Operations on Max Heap
The following operations are performed on a Max heap data structure:

- Finding Maximum
- Insertion
- Deletion


### Finding Maximum Value Operation in Max Heap
<hr>
Finding the node which has maximum value in a max heap is very simple. In a max heap, the root node has the maximum value than all other nodes. So, directly we can display root node value as the maximum value in max heap.

### Insertion Operation in Max Heap
Insertion Operation in max heap is performed as follows:

- Step 1 - Insert the `newNode` as `last leaf` from left to right.

- Step 2 - Compare `newNode value` with its `Parent node`.

- Step 3 - If `newNode value` is greater than its parent, then `swap` both of them.

- Step 4 - Repeat step 2 and step 3 until `newNode value` is less than its `parent node` (or) `newNode` reaches to root.

### Deletion Operation in Max Heap
In a max heap, deleting the last node is very simple as it does not disturb max heap properties.

Deleting root node from a max heap is little difficult as it disturbs the max heap properties. We use the following steps to delete the root node from a max heap...

- Step 1 - `Swap` the `root` node with `last` node in max heap.
- Step 2 - `Delete` last node.
- Step 3 - Now, compare `root value` with its `left child value`.
- Step 4 - If `root value` is **smaller** than its left child, then compare `left child` with its `right sibling`. Else goto **Step 6**.
- Step 5 - If `left child` value is **larger** than its right sibling, then `swap` **root** with `left child` otherwise `swap` **root** with its `right child`.
- Step 6 - If `root value` is **larger** than its left child, then compare `root value` with its `right child` value.
- Step 7 - If `root value` is **smaller** than its right child, then `swap` **root** with `right child` otherwise **stop the process**.
- Step 8 - Repeat the same until root node fixes at its exact position.

# Implementation

Find the code [here](https://github.com/Ankushdas178/DSA-in-C/blob/main/Tree/Max%20Heap/Code%20(Max%20heap).c).

