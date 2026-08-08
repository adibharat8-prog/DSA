<h2>Answer approach:</h2>
<p>Here for circular array we have 2 casses, either we find the bestMax in between both ends using normal Kadan or both the ends will also be included.<br>
For second case, as we need max then we just add all ele of the array and subtract it with the bestMin then we will get the maxWin that included both end also. <br>
<br>
Edge case:-<br>
When all ele of the array are negative then our bestMax will also be negative and the bestMax2 will be 0, but according to out current logic of if 0>-2 hence it will return 0 but 0 means no subrarray but this can't be possible as for any non-empty array atleast 1 subarray must be present. Therefore we apply a check before final if that if bestMax<0 then return bestMax, else go with normal flow.<br>

Eg- arr={-1,-2,-3}; bestMax = -2, bestMin = -6 (sum of array) and totalSum = -6, hence bestMax2 = -6-(-6) = 0. But we return -2.
	
</p>

<br>
<br>



<h2><a href="https://leetcode.com/problems/maximum-sum-circular-subarray">Maximum Sum Circular Subarray</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given a <strong>circular integer array</strong> <code>nums</code> of length <code>n</code>, return <em>the maximum possible sum of a non-empty <strong>subarray</strong> of </em><code>nums</code>.</p>

<p>A <strong>circular array</strong> means the end of the array connects to the beginning of the array. Formally, the next element of <code>nums[i]</code> is <code>nums[(i + 1) % n]</code> and the previous element of <code>nums[i]</code> is <code>nums[(i - 1 + n) % n]</code>.</p>

<p>A <strong>subarray</strong> may only include each element of the fixed buffer <code>nums</code> at most once. Formally, for a subarray <code>nums[i], nums[i + 1], ..., nums[j]</code>, there does not exist <code>i &lt;= k1</code>, <code>k2 &lt;= j</code> with <code>k1 % n == k2 % n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,-2,3,-2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Subarray [3] has maximum sum 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [5,-3,5]
<strong>Output:</strong> 10
<strong>Explanation:</strong> Subarray [5,5] has maximum sum 5 + 5 = 10.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [-3,-2,-3]
<strong>Output:</strong> -2
<strong>Explanation:</strong> Subarray [-2] has maximum sum -2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-3 * 10<sup>4</sup> &lt;= nums[i] &lt;= 3 * 10<sup>4</sup></code></li>
</ul>
