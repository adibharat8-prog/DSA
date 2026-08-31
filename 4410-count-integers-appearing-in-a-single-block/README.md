<h2>Answer approach</h2>
<p>
	Here we check each boxe's frequency if its freq is 1 then cnt++ only.<br>
	<br>

Through S.W we start with l=h=0 then then check for invalid window (h>0 and ele(h-1) != ele(h)) means the box with same numbers is ended, inside it we increment that's boxes number freq in hashmap and made l=h (start from next block starting). By this way we count how many boxes of same numbers (length can vary) exists and boxes of 1 freq is included in ans.<br>


Then we check each element of hashmap by for-auto loop and the if x.second == 1, if yes then increment the count.<br>
<br>
Then return count.
</p>

<br>
<br>


<h2><a href="https://leetcode.com/problems/count-integers-appearing-in-a-single-block">Count Integers Appearing in a Single Block</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>You are given an integer array <code>nums</code>.</p>

<p>An integer <code>x</code> is <strong>special</strong> if all occurrences of <code>x</code> in <code>nums</code> appear in a single <strong>contiguous</strong> block.</p>

<p>Return the number of <strong>distinct</strong> special integers in <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,2,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>1 appears at indices 0 and 3, forming two separate blocks, so it is not special.</li>
	<li>2 appears in a single contiguous block at indices <code>[1, 2]</code>, so it is special.</li>
</ul>

<p>Therefore, there is one special integer.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,3,1,2,2,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>3 appears in a single contiguous block at indices <code>[0, 1]</code>, so it is special.</li>
	<li>1 appears at indices 2 and 5, forming two separate blocks, so it is not special.</li>
	<li>2 appears in a single contiguous block at indices <code>[3, 4]</code>, so it is special.</li>
</ul>

<p>Therefore, there are two special integers.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
