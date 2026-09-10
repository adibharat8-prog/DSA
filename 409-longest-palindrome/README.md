<h2>Answer approach</h2>
<p>
	Here we first iterate to the given string and store the char and it's frequency then we make an ans variable and a odd bool variable.<br>
Here our main idea is as we know a palindrome's all elements must be even except one odd (which is in the middle) for this question as here we only need length.<br>
So in this question we accept only 1 odd freq then every incoming number if it is even then directly add it's freq but if it's odd then add it's (freq-1) (because we need even and we can't inc freq as parent text doesn't have it).<br>
<br>
So we iterate ton map then check if bool is true (first odd) then add the freq and make bool false (meaning a odd freq is obtained) and continue so that var doesn't add again.<br>
Then after it check if freq is odd then add (freq-1) else add freq itself.<br>
Then return ans<br>
</p>
<br>
<br>


<h2><a href="https://leetcode.com/problems/longest-palindrome">Longest Palindrome</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given a string <code>s</code> which consists of lowercase or uppercase letters, return the length of the <strong>longest <span data-keyword="palindrome-string">palindrome</span></strong>&nbsp;that can be built with those letters.</p>

<p>Letters are <strong>case sensitive</strong>, for example, <code>&quot;Aa&quot;</code> is not considered a palindrome.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abccccdd&quot;
<strong>Output:</strong> 7
<strong>Explanation:</strong> One longest palindrome that can be built is &quot;dccaccd&quot;, whose length is 7.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;a&quot;
<strong>Output:</strong> 1
<strong>Explanation:</strong> The longest palindrome that can be built is &quot;a&quot;, whose length is 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code> consists of lowercase <strong>and/or</strong> uppercase English&nbsp;letters only.</li>
</ul>
