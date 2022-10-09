<h2><a href="https://leetcode.com/problems/numbers-with-same-consecutive-differences/">967. Numbers With Same Consecutive Differences</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integers n and k, return <em style="user-select: auto;">an array of all the integers of length </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> where the difference between every two consecutive digits is </em><code style="user-select: auto;">k</code>. You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">Note that the integers should not have leading zeros. Integers as <code style="user-select: auto;">02</code> and <code style="user-select: auto;">043</code> are not allowed.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, k = 7
<strong style="user-select: auto;">Output:</strong> [181,292,707,818,929]
<strong style="user-select: auto;">Explanation:</strong> Note that 070 is not a valid number, because it has leading zeroes.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, k = 1
<strong style="user-select: auto;">Output:</strong> [10,12,21,23,32,34,43,45,54,56,65,67,76,78,87,89,98]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 9</code></li>
</ul>
</div>