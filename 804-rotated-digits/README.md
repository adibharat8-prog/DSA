<h2>Answer Approach</h2>
<p>
	Here we have given a number and asked to find the good numbers in the range of [1,n], good number = When rotated 180d it will give a valid number but different from that number.<br>
<br>
Given: 0,1,8 -> Valid but gives same number<br> 
           2,5,6,9, -> Valid and gives different number (2<->5 and 6<->9)<br>
           3,4,7 -> not valid as their 180d rotation doesn't yield a legit number<br>
<br>
So we make a function to check whether a number is changed or not, it return a pair of bool values (syntax pair<bool,bool> on time of return {bool1,bool2} and on receiving side auto [bool1,bool2] = hasChanged(n))<br>
<br>
Here initially we make a cnt variable then run a for loop from i=1 to n then call hasChanged function.<br>
Inside hasChanged function changed = false, valid = true and it check each digit (d = n%10) of number, if they are 3,4,7 then valid = false break, else if they are 2,5,6,9, then changed =  true (n = n/10) here 0,1,8 doesn't change so we don't include them.<br>
<br>
Then in main function we receive the changed and valid and if both of them are true then only increase cnt, return cnt.
</p>
<br>
<br>


<h2><a href="https://leetcode.com/problems/rotated-digits">Rotated Digits</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>An integer <code>x</code> is a <strong>good</strong> if after rotating each digit individually by 180 degrees, we get a valid number that is different from <code>x</code>. Each digit must be rotated - we cannot choose to leave it alone.</p>

<p>A number is valid if each digit remains a digit after rotation. For example:</p>

<ul>
	<li><code>0</code>, <code>1</code>, and <code>8</code> rotate to themselves,</li>
	<li><code>2</code> and <code>5</code> rotate to each other (in this case they are rotated in a different direction, in other words, <code>2</code> or <code>5</code> gets mirrored),</li>
	<li><code>6</code> and <code>9</code> rotate to each other, and</li>
	<li>the rest of the numbers do not rotate to any other number and become invalid.</li>
</ul>

<p>Given an integer <code>n</code>, return <em>the number of <strong>good</strong> integers in the range </em><code>[1, n]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
Note that 1 and 10 are not good numbers, since they remain unchanged after rotating.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>
