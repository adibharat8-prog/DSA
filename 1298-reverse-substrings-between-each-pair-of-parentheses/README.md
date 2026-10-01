<h2>Answer Approach</h2>
<p>
	Here we just need to know how to reverse a substring of a string.<br>
reverse(s.begin()+start, s.begin()+end)<br>
<br>
In this we make a stack which stores the the index of open parenthesis and and when close parenthesis came we just reverse the that substring innermost parenthesis (substring's start is from st.top()+1 till i-1, we repeatedly do this till the end of the given substring. (Here we do reverse in-place)
<br>
Now we have the correct order substring but with parenthesis so we make another loop on given reversed string and make an answer string where we concatenate each character instead of the brackets then return it.
</p>
<br>
<br>


<h2><a href="https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses">Reverse Substrings Between Each Pair of Parentheses</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>You are given a string <code>s</code> that consists of lower case English letters and brackets.</p>

<p>Reverse the strings in each pair of matching parentheses, starting from the innermost one.</p>

<p>Your result should <strong>not</strong> contain any brackets.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(abcd)&quot;
<strong>Output:</strong> &quot;dcba&quot;
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(u(love)i)&quot;
<strong>Output:</strong> &quot;iloveu&quot;
<strong>Explanation:</strong> The substring &quot;love&quot; is reversed first, then the whole string is reversed.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(ed(et(oc))el)&quot;
<strong>Output:</strong> &quot;leetcode&quot;
<strong>Explanation:</strong> First, we reverse the substring &quot;oc&quot;, then &quot;etco&quot;, and finally, the whole string.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code> only contains lower case English characters and parentheses.</li>
	<li>It is guaranteed that all parentheses are balanced.</li>
</ul>
