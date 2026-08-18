<h2>Answer aprroach</h2>
<p>
	Here we asked to found the element who appear once in all the subarrays of size k of nums, if that element occurs more than once in the same subarray then its okay, we need to check between subarrays not within subarray.
<br>
	<br>
	We make the low=0 and high=k-1 and make subarrays of size k then we store each element of the subarray in the UNORDERED_SET so that each element appears once within a subarray, then we store all elements and their frequencies from set to the hashmap.
<br>
	<br>
	Then we traverse the whole map and check the key (x.first) whose frequency is equals to 1 (x.second == 1), then store its value in the var variable (var initiated with -1 and store the maximum key whose frequency is 1) and set a bool variable to true after storing in var variable.
<br>
	<br>
	After that while loop we return <bool_var>? val : -1  (if bool var is ture then return val, if false then return -1)
</p>
<br>
<br>



<h2><a href="https://leetcode.com/problems/find-the-largest-almost-missing-integer">Find the Largest Almost Missing Integer</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>An integer <code>x</code> is <strong>almost missing</strong> from <code>nums</code> if <code>x</code> appears in <em>exactly</em> one subarray of size <code>k</code> within <code>nums</code>.</p>

<p>Return the <b>largest</b> <strong>almost missing</strong> integer from <code>nums</code>. If no such integer exists, return <code>-1</code>.</p>
A <strong>subarray</strong> is a contiguous sequence of elements within an array.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,9,2,1,7], k = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">7</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>1 appears in 2 subarrays of size 3: <code>[9, 2, 1]</code> and <code>[2, 1, 7]</code>.</li>
	<li>2 appears in 3 subarrays of size 3: <code>[3, 9, 2]</code>, <code>[9, 2, 1]</code>, <code>[2, 1, 7]</code>.</li>
	<li index="2">3 appears in 1 subarray of size 3: <code>[3, 9, 2]</code>.</li>
	<li index="3">7 appears in 1 subarray of size 3: <code>[2, 1, 7]</code>.</li>
	<li index="4">9 appears in 2 subarrays of size 3: <code>[3, 9, 2]</code>, and <code>[9, 2, 1]</code>.</li>
</ul>

<p>We return 7 since it is the largest integer that appears in exactly one subarray of size <code>k</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,9,7,2,1,7], k = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>1 appears in 2 subarrays of size 4: <code>[9, 7, 2, 1]</code>, <code>[7, 2, 1, 7]</code>.</li>
	<li>2 appears in 3 subarrays of size 4: <code>[3, 9, 7, 2]</code>, <code>[9, 7, 2, 1]</code>, <code>[7, 2, 1, 7]</code>.</li>
	<li>3 appears in 1 subarray of size 4: <code>[3, 9, 7, 2]</code>.</li>
	<li>7 appears in 3 subarrays of size 4: <code>[3, 9, 7, 2]</code>, <code>[9, 7, 2, 1]</code>, <code>[7, 2, 1, 7]</code>.</li>
	<li>9 appears in 2 subarrays of size 4: <code>[3, 9, 7, 2]</code>, <code>[9, 7, 2, 1]</code>.</li>
</ul>

<p>We return 3 since it is the largest and only integer that appears in exactly one subarray of size <code>k</code>.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [0,0], k = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<p>There is no integer that appears in only one subarray of size 1.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 50</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 50</code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ul>
