<h2>Answer Approach</h2>
<p>
	Here we have asked to give the decimal equivalent of the binary number represented by numbers in all nodes.<br>
<br>
Approach 1:<br>
In this we traverse each node and get its data (int d=temp->val) and then for AnyBaseTOdecimal we multiply the number with its own powers of base. We make a variable ans=0 so instead of doing this at once we convert each digit by ans = ans*2 + d till end of LL.<br>
<br>
Traversing while(temp!=NULL){ temp = temp->next }<br>
<br>

Approach 2:<br>
We can make a num variable and then store all nodes data into it then convert it to binary, but for this SC becomes O(N). 
</p>
<br>
<br>


<h2><a href="https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer">Convert Binary Number in a Linked List to Integer</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given <code>head</code> which is a reference node to a singly-linked list. The value of each node in the linked list is either <code>0</code> or <code>1</code>. The linked list holds the binary representation of a number.</p>

<p>Return the <em>decimal value</em> of the number in the linked list.</p>

<p>The <strong>most significant bit</strong> is at the head of the linked list.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/05/graph-1.png" style="width: 426px; height: 108px;" />
<pre>
<strong>Input:</strong> head = [1,0,1]
<strong>Output:</strong> 5
<strong>Explanation:</strong> (101) in base 2 = (5) in base 10
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> head = [0]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The Linked List is not empty.</li>
	<li>Number of nodes will not exceed <code>30</code>.</li>
	<li>Each node&#39;s value is either <code>0</code> or <code>1</code>.</li>
</ul>
