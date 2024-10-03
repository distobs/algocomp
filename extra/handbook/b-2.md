# Sorting

Sorting is fundamental to algorithm design. Many efficient algorithms use
sorting as a building block, because some problems are more easily solving
using it. As an example, the task of finding out if an array has two equal
elements can be easily solved by sorting it and checking if there are any
repeating values.

There are many algorithms for sorting, and their general efficiency is O(n log
n).

## Theory

A sorting algorithm reorders the elements of an array in a specified order.
This is generally the increasing order. We will talk about the increasing order
because it's the most common and useful one.

For example:

```
Before sorting: 1, 2, 4, 3
After sorting: 1, 2, 3, 4
```

### O(n^2) algorithms

Naive sorting algorithms work in O(n^2) time. They usually consist of two
nested loops. One of the most famous is called bubble sort.

```cpp

for (int i = 0; i < n; ++i) {
	for (int j = 0; j < n - 1; ++j) {
		if (array[j] > array[j + 1]) {
			swap(array[j], array[j + 1]);
		}
	}
}
```

### Inversions

Bubble sort always swaps consecutive elements. This paradigm always requires at
least O(n^2) time.

A useful concept when talking sorting is an inversion. An inversion is a pair
of elements array\[a\] and array\[b\] such that a < b and array\[a\] >
array\[b\].

Swapping consecutive elements removes exactly one inversion. If an algorithm
can only remove one inversion per iteration, its time complexity is at least
O(n^2);

### O(n log n) algorithms

#### Merge sort

An array can be sorted efficiently in O(nlog n) by using algorithms not limited
to swapping consecutive elements. A widely known algorithm of this kind is
merge sort.

Merge sort sorts a subarray array\[a ... b\] in this way:

1. If a = b, it's already sorted. Do nothing.

2. Find the middle element: k = (a + b) / 2.

3. Recursively sort subarray\[a ... k\].

4. Recursively sort subarray\[k + 1 ... b\].

5. Merge array\[a ... k\] and array\[k + 1 ... b\] into a single array
array\[a ... b\].

Merge sort is efficient because it halves the array at each step. The recursion
has O(log n) levels, and each level takes O(n) times. Merging the subarrays is
linear, because they're already sorted.

#### Sorting lower bound

It's impossible to sort an array faster than in O(n log n), if we restrict
ourselves to comparing array elements. Here's a proof:

Lemma. For any comparison based sorting algorithm, there's an array a\[1 ...
n\] such that O(n log n) comparisons are performed to sort it.

Proof. One can represent any such algorithm as a decision tree of comparisons
of the n elements of an array.

```
		   +--------> a[1] <= a[2] <= a[3]
		   | yes
    +-------> a[2] < a[3]
    | yes          | no
    |    	   |               +-------------> a[1] <= a[3] <= a[2]
    |		   |               | yes
    |              +--------> A[1] < a[3]
    |                              | no
    |                              +-------------> a[3] <= [a]1 <= a[2]
a[1] < a[2]?
    |
    |
    |
    |
    |              +---------> a[2] <= a[1] <= a[3]
    | no           | yes
    +-------> a[1] < a[3]?          +------------> a[2] <= a[3] <= a[1]
                   | no             | yes
                   +---------> a[2] < a[3]?
		                    | no
				    +------------> a[3] <= a[2] <= a[1]
```

The leafs contain all permutations of array a's elements, and one such leaf
contains its elements in sorted order. As such, the number of leaves l must be
at least n!.

In the worst case, the maximum possible number of comparisons is at minimum
the depth d of the tree.

It can be shown that the depth d of any binary tree with l leaves is at least
log2(l).

Since we have n! leaves, our time complexity is $\log_{2}{n!} = \omega{n log
n}$. This equivalence is shown below:

```
i won't use latex!!!

log2(n!) =
= log2(1 * 2 * ... * n) =
= log2(1) + log2(2) + ... + log2(n) >=
>= log2(n/2) + ... + log2(n) /* half of the elements */
>= n / 2 log2(n / 2) = /* at least n / 2 numbers at least log2(n / 2) */
= Omega(n log n)
```

End of proof. [Thanks, this guy](https://www.youtube.com/watch?v=UkmF2HXxTcw).

### Counting sort

The lower bound does not apply to algorithms that don't rely on comparisons. An
example of such is conting sort, which is linear.

The algorithm creates another array called a bookkeeping array, whose indices
represent elements of the original array. It iterates through the original
array and counts how many times each element appears in the array. Creating the
bookkeeping array is linear, and creating another sorted array is also linear
over the bookkeeping array. Here's an example:

```
[1, 3, 6, 9, 9, 3, 5, 9]

[1, 0, 2, 0, 1, 1, 0, 0, 3]
```

## Sorting in C++

Writing a sorting algorithm on the spot in a context is stupid. That's why we
trust C++'s standard library instead.

How to use it:

```cpp
vector<int> v = {1, 5, 3};

sort(v.begin(), v.end);

sort(v.rbegin(), v.rend); /* reverse order */

int a[3] = {1, 5, 3};

sort(a, a + 3);

string s = "ablueblue"

sort(s.begin(), s.end());
```

### Comparison operators

Most C++ data types have a built-in comparison operators. Vectors and arrays
are sorted by comparing single elements, pairs are sorted by their first and
second elements, and tuples are sorted by their 1st, 2nd, to the nth element.

#### User-defined structs

User-defined structs don't have automatically defined comparison operators.
Here's how we can define them:

```cpp
struct P {
	int x, y,;
	bool operator<(const P &p)
	{
		if (x != p.x) { // compare my p to its p first
			return x < p.x;
		} else {
			return y < p.y;
		}
	}
};
```

#### Comparison functions

It's possible to pass an external comparison function to `sort`.

```cpp
bool comp(string a, string b)
{
	if (a.size() != b.size()) {
		return a.size() < b.size();
	} else {
		return a < b; // alphabetical
	}
}

vector<string> vs = {"smallstr", "biggggggggggggstr"};

sort(vs.begin, vs.end(), comp);
```

## Binary search

A general method for searching for an element in an array is looping through it
until the target is found. For example:

```cpp
for (int i = 0; i < n; ++i) {
	if (array[i] == target) {
		return i;
	}
}
```

This approach has time complexity O(n). If the array is unsorted, this is also
the best possible approach.

However, if the array is sorted, it's possible to perform a binary search in
O(log n) time.

### Method 1

```cpp
int k;
int lower = 0, upper = (n - 1);

while (lower <= upper) {
	k = (lower + upper) / 2;

	if (array[k] == target) {
		return k;
	} else if (array[k] > x) {
		upper = k - 1;
	} else {
		lower = k + 1
	}
}
```

At each step, the algorithm checks the middle element. If it's the target,
report what's found; if it's larger, the upper bound is changed; if it's
smaller, the lower bound is changed.

It halves the array at each iteration, so its complexity is O(log n).
