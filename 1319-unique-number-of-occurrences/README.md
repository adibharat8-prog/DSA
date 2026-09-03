<h2>Answer approach</h2>
<p>
	Here we asked to find if any element's is repeated same times as of other one, so for this we store all elements in a hashmap and the run a for loop on it then store all its frequency in unordered_set (Now only unique frequencies will go inside the set.<br>
<br>
Then we compare if size of set is same as map's size then return true (all element's freq is unique) else false.
We can also count all freq in hashmap and simultaneously store it in set then compare the count with set's size and return it's bool value.
</p>
<br>
<br>



<h2><a href="https://leetcode.com/problems/unique-number-of-occurrences">Unique Number of Occurrences</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an array of integers <code>arr</code>, return <code>true</code> <em>if the number of occurrences of each value in the array is <strong>unique</strong> or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,2,1,1,3]
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2]
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [-3,0,1,-3,1,1,1,-3,10,0]
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>-1000 &lt;= arr[i] &lt;= 1000</code></li>
</ul>
