# heap
<h2>Heap</h2>
Heap is defined as a binary tree with nodes of the tree storing the keys of the elements and satisfy ofllowing two conditions<br>
1. The binary tree should be a complete Binary tree i.e All the levels except the rightmost should be full<br>
2. Any parent node should be larger than its child nodes. This condition is also named as Parental Dominance<br>
3. A heap with above two coditions satisfied is also named as Max Heap <br>
A heap where parent node is smallest then its child is named as Min Heap.<br><br> 

<h2>Properties of Heap</h2>
1. Given n numbers there will be a unique Binary tree for every arrangement of the numbers. <br>
2. A Complete Binary tree or a heap of n nodes will have a height h=floor value of n/2.<br>
3. In a max heap root contains largest key<br>
4. Any subtree of a heap is also a heap<br>
5. Better way to implement heap is using array. <br>

<h2>Heap Represnetation</h2>
Store Heaps elements in an array (where elements indexed, for convenience, 1 to n in top down left to right order. <br>
-Left child of a node j is at 2j<br>
-Right child of node j is at 2j+1<br>
-Parenr of node j is at [j/2]<br>
Parental nodes due represented in the first [n/2] locations. <br>
<br>
<br>
<h2>Algorithm</h2>
HeapButtomUp(H[1...n])<br>
//Construct a heap from the eleemnts of given array by the bottoms up algorithm <br>
//Input: An array H[1...n] of orderable items <br>
//Output: A heap H[1....n]<br>
for i=[n/2] downto 1 do <br>
k=i; v=H[k]<br>
heap =false;<br>
while not heap and 2*k <= do <br>
j=2*k<br>
if(j<n)<br>
if H[j]<H[j+1]; j=j+1<br>
if v>=H[j]<br>
Heap=true<br>
else<br>
H[k]=H[j];<br>
k=j<br>
H[k]=v<br>
