<h2>Answer approach</h2>
<p>
	Here array is circular so each element will get (n-1) elements to choose the greatest, like (n=3) a[0] = a[1],a[2], a[1] = a[2],a[0] and a[2] = a[0][1]. As we start traversing from end and we need to give n-1 choices to each element that's why we first append elements from n-2 to 0 into stack (reverse order because a[n-1] need a[0],a[1]...) and in STACK LIFO is followed.<br>
	then in main for(i=n-1:0) loop we start comparing while (not empty and false cond) pop, if(empty) then push -1 in ans else (if cond true) then push st.top() to ans.<br>
	Here we assume a copy of array is placed at front of it.<br>
Then we bind it using idx = i%n;<br>
For better understanding understand the code<br>
</p>
<br>
<br>



<h2><a href="https://leetcode.com/problems/next-greater-element-ii">Next Greater Element II</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given a circular integer array <code>nums</code> (i.e., the next element of <code>nums[nums.length - 1]</code> is <code>nums[0]</code>), return <em>the <strong>next greater number</strong> for every element in</em> <code>nums</code>.</p>

<p>The <strong>next greater number</strong> of a number <code>x</code> is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn&#39;t exist, return <code>-1</code> for this number.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,1]
<strong>Output:</strong> [2,-1,2]
Explanation: The first 1&#39;s next greater number is 2; 
The number 2 can&#39;t find next greater number. 
The second 1&#39;s next greater number needs to search circularly, which is also 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4,3]
<strong>Output:</strong> [2,3,4,-1,4]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
