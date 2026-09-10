<h2><a href="https://codeforces.com/contest/1761/problem/A" target="_blank" rel="noopener noreferrer">1761A — Two Permutations</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1761A](https://codeforces.com/contest/1761/problem/A) |

## Topics
`brute force` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. Two Permutations</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three integers $$$n$$$, $$$a$$$, and $$$b$$$. Determine if there exist two permutations $$$p$$$ and $$$q$$$ of length $$$n$$$, for which the following conditions hold:</p><ul> <li> The length of the longest common prefix of $$$p$$$ and $$$q$$$ is $$$a$$$. </li><li> The length of the longest common suffix of $$$p$$$ and $$$q$$$ is $$$b$$$. </li></ul><p>A permutation of length $$$n$$$ is an array containing each integer from $$$1$$$ to $$$n$$$ exactly once. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array), and $$$[1,3,4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array).</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1\leq t\leq 10^4$$$) — the number of test cases. The description of test cases follows.</p><p>The only line of each test case contains three integers $$$n$$$, $$$a$$$, and $$$b$$$ ($$$1\leq a,b\leq n\leq 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if such a pair of permutations exists, output "<span class="tex-font-style-tt">Yes</span>"; otherwise, output "<span class="tex-font-style-tt">No</span>". You can output each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009515919421041343" id="id0007238462832193793" class="input-output-copier">Copy</div></div><pre id="id009515919421041343"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">3 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">4 1 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009675232950882537" id="id0043688137565812724" class="input-output-copier">Copy</div></div><pre id="id009675232950882537">Yes
No
No
Yes
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$[1]$$$ and $$$[1]$$$ form a valid pair.</p><p>In the second test case and the third case, we can show that such a pair of permutations doesn't exist.</p><p>In the fourth test case, $$$[1,2,3,4]$$$ and $$$[1,3,2,4]$$$ form a valid pair.</p></div>