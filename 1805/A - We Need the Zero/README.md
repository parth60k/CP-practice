<h2><a href="https://codeforces.com/contest/1805/problem/A" target="_blank" rel="noopener noreferrer">1805A — We Need the Zero</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1805A](https://codeforces.com/contest/1805/problem/A) |

## Topics
`bitmasks` `brute force`

---

## Problem Statement

<div class="header"><div class="title">A. We Need the Zero</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is an array $$$a$$$ consisting of non-negative integers. You can choose an integer $$$x$$$ and denote $$$b_i=a_i \oplus x$$$ for all $$$1 \le i \le n$$$, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. Is it possible to choose such a number $$$x$$$ that the value of the expression $$$b_1 \oplus b_2 \oplus \ldots \oplus b_n$$$ equals $$$0$$$?</p><p>It can be shown that if a valid number $$$x$$$ exists, then there also exists $$$x$$$ such that ($$$0 \le x  \lt  2^8$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.</p><p>The first line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 10^3$$$) — the length of the array $$$a$$$.</p><p>The second line of the test case contains $$$n$$$ integers — array $$$a$$$ ($$$0 \le a_i  \lt  2^8$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^3$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each set test case, print the integer $$$x$$$ ($$$0 \le x  \lt  2^8$$$) if it exists, or $$$-1$$$ otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008199590310517725" id="id00444634791573537" class="input-output-copier">Copy</div></div><pre id="id008199590310517725"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 5</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-odd test-example-line-3">0 1 2 3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 2 3</div><div class="test-example-line test-example-line-odd test-example-line-5">1</div><div class="test-example-line test-example-line-odd test-example-line-5">1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00012532140044957618" id="id005905309335289638" class="input-output-copier">Copy</div></div><pre id="id00012532140044957618">6
0
3
-1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, after applying the operation with the number $$$6$$$ the array $$$b$$$ becomes $$$[7, 4, 3]$$$, $$$7 \oplus 4 \oplus 3 = 0$$$.</p><p>There are other answers in the third test case, such as the number $$$0$$$. </p></div>