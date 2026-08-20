<h2>Answer approach</h2>
<p>
	Here given that valid parenthesis only come ( then ) and [ then ] and { then } so, we make a stack initially, then run a for loop (for i=0:n) and check if s[i] if a closing parenthesis or not, if not then just push it into stack (it must be a opening parenthesis), but if it is then check whether the stack is not empty by (!stack.empty()),<br>
if empty then return false else check cases for all three options like,<br>
1. if s[i] is ( then at top of stack it must be its converse i.e. )<br>
2. if s[i] is [ then at top of stack it must be its converse i.e. ]<br>
3. if s[i] is { then at top of stack it must be its converse i.e }<br>
but if not among all of then => return false (it means a closing parenthesis comes without its opening converse)<br>
<br>
Then after end of the for loop we check if stack.empty() then return true else false.<br>
<br>
Some inbuilt functions of stack:-<br>
1. stack.top = To see the top element of the stack.<br>
2. stack.empty() = To see if stack is empty or not, if yes then it returns true else false.
</p>
<br>
<br>



<h2><a href="https://leetcode.com/problems/valid-parentheses">Valid Parentheses</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given a string <code>s</code> containing just the characters <code>&#39;(&#39;</code>, <code>&#39;)&#39;</code>, <code>&#39;{&#39;</code>, <code>&#39;}&#39;</code>, <code>&#39;[&#39;</code> and <code>&#39;]&#39;</code>, determine if the input string is valid.</p>

<p>An input string is valid if:</p>

<ol>
	<li>Open brackets must be closed by the same type of brackets.</li>
	<li>Open brackets must be closed in the correct order.</li>
	<li>Every close bracket has a corresponding open bracket of the same type.</li>
</ol>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;()&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;()[]{}&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;(]&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>
</div>

<p><strong class="example">Example 4:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;([])&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>
</div>

<p><strong class="example">Example 5:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;([)]&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of parentheses only <code>&#39;()[]{}&#39;</code>.</li>
</ul>
