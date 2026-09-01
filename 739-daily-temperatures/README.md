<h2>Answer approach</h2>
<p>
	We can use two pointer approach but then the TC will be O(n^2).<br>
<br>
Here we store index (because we need to asked for number of days for next temp not the next temp itsel) in stack firstly we store last element to be 0 in ans. Then we use a for(i=n-2 : 0 ) then we check whether the stack is not empty and if temp[st.top()] <= nums[i] (opposite condition) then pop.<br>
<br>

Then after this only those cases come where stack is not empty and condition is correct then if stack is empty, just put ans[i] = 0, else (if cond. is correct) then do ans[i] = st.top-i,<br>
and at end push the i in the stack.<br>
<br>
Return ans.
</p>
<br><br>



<h2><a href="https://leetcode.com/problems/daily-temperatures">Daily Temperatures</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given an array of integers <code>temperatures</code> represents the daily temperatures, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is the number of days you have to wait after the</em> <code>i<sup>th</sup></code> <em>day to get a warmer temperature</em>. If there is no future day for which this is possible, keep <code>answer[i] == 0</code> instead.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> temperatures = [73,74,75,71,69,72,76,73]
<strong>Output:</strong> [1,1,4,2,1,1,0,0]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> temperatures = [30,40,50,60]
<strong>Output:</strong> [1,1,1,0]
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> temperatures = [30,60,90]
<strong>Output:</strong> [1,1,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;temperatures.length &lt;= 10<sup>5</sup></code></li>
	<li><code>30 &lt;=&nbsp;temperatures[i] &lt;= 100</code></li>
</ul>
