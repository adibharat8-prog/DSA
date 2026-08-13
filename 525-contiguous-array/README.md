<h2> Answer approach </h2>
<p>
In it we assume that 1->+1 and 0->-1 and make a sum = 0. Then we iterate for each variables in the given array, if we find 1 then we do sum++ and if we find 0 then we do sum--.<br>
Then we check whether that sum available or not in the hashmap, if exists then means the number of ones and zeros are same in this subarray so we calculate the length and store its max in res. <br>
But if not present then only we store then sum with the current index int the map.<br>
<br>
Remember, here we only store {sum,idx} in map when its not present and not update the index when it present because we need the longest length subarray that's why we only store the first occurence of the sum.
</p>
<br>
<br>



<h2><a href="https://leetcode.com/problems/contiguous-array">Contiguous Array</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given a binary array <code>nums</code>, return <em>the maximum length of a contiguous subarray with an equal number of </em><code>0</code><em> and </em><code>1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1,0]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1,1,1,1,1,0,0,0]
<strong>Output:</strong> 6
<strong>Explanation:</strong> [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>nums[i]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
