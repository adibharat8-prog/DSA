<h2>Answer aprroach</h2>
<p>
We follow two rules, normal Kadan and if one element is deleted-<br>
1. NoDel is simply like normal Kadan:<br>
a) Either start own party: v1 = a[i];<br>
b) Or join the party: v2 = noDel + a[i];<br>
    &nbsp &nbsp    => noDel = max(v1,v2)<br><br>
2. OneDel means we have two choices:<br>
a) Already deleted one and just add new element: v3 = oneDel + a[i];<br>
b) Not deleted yet so delete the current element: v4 = prevNoDel;  <br>
(Means we store the value of noDel till (i-1) therefore before updating noDel for ith element we must store it inside another variable called prevNoDel)<br>
   &nbsp &nbsp     => oneDel = max(v3,v4);<br>
Then as we need max so take max of ans, oneDel, noDel and return the ans.<br>
</p>




<h2><a href="https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion">Maximum Subarray Sum with One Deletion</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given an array of integers, return the maximum sum for a <strong>non-empty</strong>&nbsp;subarray (contiguous elements) with at most one element deletion.&nbsp;In other words, you want to choose a subarray and optionally delete one element from it so that there is still at least one element left and the&nbsp;sum of the remaining elements is maximum possible.</p>

<p>Note that the subarray needs to be <strong>non-empty</strong> after deleting one element.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,-2,0,3]
<strong>Output:</strong> 4
<strong>Explanation: </strong>Because we can choose [1, -2, 0, 3] and drop -2, thus the subarray [1, 0, 3] becomes the maximum value.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,-2,-2,3]
<strong>Output:</strong> 3
<strong>Explanation: </strong>We just choose [3] and it&#39;s the maximum sum.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [-1,-1,-1,-1]
<strong>Output:</strong> -1
<strong>Explanation:</strong>&nbsp;The final subarray needs to be non-empty. You can&#39;t choose [-1] and delete -1 from it, then get an empty subarray to make the sum equals to 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= arr[i] &lt;= 10<sup>4</sup></code></li>
</ul>
