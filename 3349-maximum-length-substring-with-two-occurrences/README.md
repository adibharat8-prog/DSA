<h2>Answer approach</h2>
<p>
	This is a variable size sliding window question, in which we maintain a window with high=0 and low=0 then we iterate high till s.length() and include s[high] and its frequency in the hashmap and everytime we check (for invalid window) whether the s[high] > k (which is 2 as it is given that each character must be present at max 2)  if its true then we remove the low's frequency from hasmap and increment low.<br>
For every valid window I calculate its length and then store the max of res and len into res.<br>
At last return res.
</p>
<br>
<br>




<h2><a href="https://leetcode.com/problems/maximum-length-substring-with-two-occurrences">Maximum Length Substring With Two Occurrences</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>Given a string <code>s</code>, return the <strong>maximum</strong> length of a <span data-keyword="substring">substring</span>&nbsp;such that it contains <em>at most two occurrences</em> of each character.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;bcbbbcba&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>
The following substring has a length of 4 and contains at most two occurrences of each character: <code>&quot;bcbb<u>bcba</u>&quot;</code>.</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;aaaa&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>
The following substring has a length of 2 and contains at most two occurrences of each character: <code>&quot;<u>aa</u>aa&quot;</code>.</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists only of lowercase English letters.</li>
</ul>
