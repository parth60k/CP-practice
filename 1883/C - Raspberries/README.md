<h2><a href="https://codeforces.com/contest/1883/problem/C" target="_blank" rel="noopener noreferrer">1883C — Raspberries</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1883C](https://codeforces.com/contest/1883/problem/C) |

## Topics
`dp` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Raspberries</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array of integers $$$a_1, a_2, \ldots, a_n$$$ and a number $$$k$$$ ($$$2 \leq k \leq 5$$$). In one operation, you can do the following:</p><ul><li> Choose an index $$$1 \leq i \leq n$$$,</li><li> Set $$$a_i = a_i + 1$$$.</li></ul><p>Find the minimum number of operations needed to make the product of all the numbers in the array $$$a_1 \cdot a_2 \cdot \ldots \cdot a_n$$$ divisible by $$$k$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. Then follows the description of the test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \leq n \leq 10^5$$$, $$$2 \leq k \leq 5$$$) — the size of the array $$$a$$$ and the number $$$k$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of operations needed to make the product of all the numbers in the array divisible by $$$k$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016303626702631735" id="id0023779672762253" class="input-output-copier">Copy</div></div><pre id="id0016303626702631735"><div class="test-example-line test-example-line-even test-example-line-0">15</div><div class="test-example-line test-example-line-odd test-example-line-1">2 5</div><div class="test-example-line test-example-line-odd test-example-line-1">7 3</div><div class="test-example-line test-example-line-even test-example-line-2">3 3</div><div class="test-example-line test-example-line-even test-example-line-2">7 4 1</div><div class="test-example-line test-example-line-odd test-example-line-3">5 2</div><div class="test-example-line test-example-line-odd test-example-line-3">9 7 7 3 9</div><div class="test-example-line test-example-line-even test-example-line-4">5 5</div><div class="test-example-line test-example-line-even test-example-line-4">5 4 1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-5">7 4</div><div class="test-example-line test-example-line-odd test-example-line-5">9 5 1 5 9 5 1</div><div class="test-example-line test-example-line-even test-example-line-6">3 4</div><div class="test-example-line test-example-line-even test-example-line-6">6 3 6</div><div class="test-example-line test-example-line-odd test-example-line-7">3 4</div><div class="test-example-line test-example-line-odd test-example-line-7">6 1 5</div><div class="test-example-line test-example-line-even test-example-line-8">3 4</div><div class="test-example-line test-example-line-even test-example-line-8">1 5 9</div><div class="test-example-line test-example-line-odd test-example-line-9">4 4</div><div class="test-example-line test-example-line-odd test-example-line-9">1 4 1 1</div><div class="test-example-line test-example-line-even test-example-line-10">3 4</div><div class="test-example-line test-example-line-even test-example-line-10">3 5 3</div><div class="test-example-line test-example-line-odd test-example-line-11">4 5</div><div class="test-example-line test-example-line-odd test-example-line-11">8 9 9 3</div><div class="test-example-line test-example-line-even test-example-line-12">2 5</div><div class="test-example-line test-example-line-even test-example-line-12">1 6</div><div class="test-example-line test-example-line-odd test-example-line-13">2 5</div><div class="test-example-line test-example-line-odd test-example-line-13">10 10</div><div class="test-example-line test-example-line-even test-example-line-14">4 5</div><div class="test-example-line test-example-line-even test-example-line-14">1 6 1 1</div><div class="test-example-line test-example-line-odd test-example-line-15">2 5</div><div class="test-example-line test-example-line-odd test-example-line-15">7 7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002496958635008193" id="id0048079811728496613" class="input-output-copier">Copy</div></div><pre id="id002496958635008193">2
2
1
0
2
0
1
2
0
1
1
4
0
4
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we need to choose the index $$$i = 2$$$ twice. After that, the array will be $$$a = [7, 5]$$$. The product of all the numbers in the array is $$$35$$$.</p><p>In the fourth test case, the product of the numbers in the array is $$$120$$$, which is already divisible by $$$5$$$, so no operations are needed.</p><p>In the eighth test case, we can perform two operations by choosing $$$i = 2$$$ and $$$i = 3$$$ in any order. After that, the array will be $$$a = [1, 6, 10]$$$. The product of the numbers in the array is $$$60$$$.</p></div>