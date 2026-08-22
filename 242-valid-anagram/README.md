<h2>Answer aprroach</h2>
<p>
	Here we have two approaches
	1. Using frequency array
	2. Using hashmap (char,integer)<br>
<br>
	We make a loop on s1 then add each character's frequency, then another loop on s2 then subtract each character's frequency and then another loop to check the array/hashmap (if all entries ffrequmcy is equals to zero).
	
	array => for(int i=0; i<freq.length(); i++) {if(s[i] != 0){found = false} }
	hashmap => for(auto x: mp) {if(x.second() != 0){found = false;}} 

</p>
<br>
<br>


<h2><a href="https://leetcode.com/problems/valid-anagram">Valid Anagram</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code> if <code>t</code> is an <span data-keyword="anagram">anagram</span> of <code>s</code>, and <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;anagram&quot;, t = &quot;nagaram&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;rat&quot;, t = &quot;car&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length, t.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>s</code> and <code>t</code> consist of lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> What if the inputs contain Unicode characters? How would you adapt your solution to such a case?</p>
