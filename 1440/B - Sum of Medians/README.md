<h2><a href="https://codeforces.com/contest/1440/problem/B" target="_blank" rel="noopener noreferrer">1440B — Sum of Medians</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1440B](https://codeforces.com/contest/1440/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Sum of Medians</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A <span class="tex-font-style-it">median</span> of an array of integers of length $$$n$$$ is the number standing on the $$$\lceil {\frac{n}{2}} \rceil$$$ (rounding up) position in the non-decreasing ordering of its elements. Positions are numbered starting with $$$1$$$. For example, a median of the array $$$[2, 6, 4, 1, 3, 5]$$$ is equal to $$$3$$$. <span class="tex-font-style-bf">There exist some other definitions of the median, but in this problem, we will use the described one.</span></p><p>Given two integers $$$n$$$ and $$$k$$$ and <span class="tex-font-style-bf">non-decreasing</span> array of $$$nk$$$ integers. Divide all numbers into $$$k$$$ arrays of size $$$n$$$, such that each number belongs to <span class="tex-font-style-bf">exactly</span> one array.</p><p>You want the sum of medians of all $$$k$$$ arrays to be the maximum possible. Find this maximum possible sum.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases. The next $$$2t$$$ lines contain descriptions of test cases.</p><p>The first line of the description of each test case contains two integers $$$n$$$, $$$k$$$ ($$$1 \leq n, k \leq 1000$$$).</p><p>The second line of the description of each test case contains $$$nk$$$ integers $$$a_1, a_2, \ldots, a_{nk}$$$ ($$$0 \leq a_i \leq 10^9$$$) — given array. It is guaranteed that the array is non-decreasing: $$$a_1 \leq a_2 \leq \ldots \leq a_{nk}$$$.</p><p>It is guaranteed that the sum of $$$nk$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single integer — the maximum possible sum of medians of all $$$k$$$ arrays.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0037368193796657057" id="id008631756338826183" class="input-output-copier">Copy</div></div><pre id="id0037368193796657057">6
2 4
0 24 34 58 62 64 69 78
2 2
27 61 81 91
4 3
2 4 16 18 21 27 36 53 82 91 92 95
3 4
3 11 12 22 33 35 38 67 69 71 94 99
2 1
11 41
3 3
1 1 1 1 1 1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009685883951942699" id="id000778775609443988" class="input-output-copier">Copy</div></div><pre id="id009685883951942699">165
108
145
234
11
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The examples of possible divisions into arrays for all test cases of the first test:</p><p>Test case $$$1$$$: $$$[0, 24], [34, 58], [62, 64], [69, 78]$$$. The medians are $$$0, 34, 62, 69$$$. Their sum is $$$165$$$.</p><p>Test case $$$2$$$: $$$[27, 61], [81, 91]$$$. The medians are $$$27, 81$$$. Their sum is $$$108$$$.</p><p>Test case $$$3$$$: $$$[2, 91, 92, 95], [4, 36, 53, 82], [16, 18, 21, 27]$$$. The medians are $$$91, 36, 18$$$. Their sum is $$$145$$$.</p><p>Test case $$$4$$$: $$$[3, 33, 35], [11, 94, 99], [12, 38, 67], [22, 69, 71]$$$. The medians are $$$33, 94, 38, 69$$$. Their sum is $$$234$$$.</p><p>Test case $$$5$$$: $$$[11, 41]$$$. The median is $$$11$$$. The sum of the only median is $$$11$$$.</p><p>Test case $$$6$$$: $$$[1, 1, 1], [1, 1, 1], [1, 1, 1]$$$. The medians are $$$1, 1, 1$$$. Their sum is $$$3$$$.</p></div>