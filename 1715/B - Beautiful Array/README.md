<h2><a href="https://codeforces.com/contest/1715/problem/B" target="_blank" rel="noopener noreferrer">1715B — Beautiful Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1715B](https://codeforces.com/contest/1715/problem/B) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Beautiful Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Stanley defines the beauty of an array $$$a$$$ of length $$$n$$$, which contains <span class="tex-font-style-bf">non-negative integers</span>, as follows: $$$$$$\sum\limits_{i = 1}^{n} \left \lfloor \frac{a_{i}}{k} \right \rfloor,$$$$$$ which means that we divide each element by $$$k$$$, round it down, and sum up the resulting values.</p><p>Stanley told Sam the integer $$$k$$$ and asked him to find an array $$$a$$$ of $$$n$$$ non-negative integers, such that the beauty is equal to $$$b$$$ and the sum of elements is equal to $$$s$$$. Help Sam — find any of the arrays satisfying the conditions above.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). Description of the test cases follows.</p><p>The first line of each test case contains integers $$$n$$$, $$$k$$$, $$$b$$$, $$$s$$$ ($$$1 \leq n \leq 10^{5}$$$, $$$1 \leq k \leq 10^{9}$$$, $$$0 \leq b \leq 10^{9}$$$, $$$0 \leq s \leq 10^{18}$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$-1$$$ if such array $$$a$$$ does not exist. Otherwise print $$$n$$$ non-negative integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \leq a_{i} \leq 10^{18}$$$) — the answer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001546110658190165" id="id00137109320237929" class="input-output-copier">Copy</div></div><pre data-content="8
1 6 3 100
3 6 3 12
3 6 3 19
5 4 7 38
5 4 7 80
99978 1000000000 100000000 1000000000000000000
1 1 0 0
4 1000000000 1000000000 1000000000000000000
" id="id001546110658190165"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">1 6 3 100</div><div class="test-example-line test-example-line-even test-example-line-2">3 6 3 12</div><div class="test-example-line test-example-line-odd test-example-line-3">3 6 3 19</div><div class="test-example-line test-example-line-even test-example-line-4">5 4 7 38</div><div class="test-example-line test-example-line-odd test-example-line-5">5 4 7 80</div><div class="test-example-line test-example-line-even test-example-line-6">99978 1000000000 100000000 1000000000000000000</div><div class="test-example-line test-example-line-odd test-example-line-7">1 1 0 0</div><div class="test-example-line test-example-line-even test-example-line-8">4 1000000000 1000000000 1000000000000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008675867119216879" id="id008740479606406103" class="input-output-copier">Copy</div></div><pre id="id008675867119216879">-1
-1
0 0 19
0 3 3 3 29
-1
-1
0
0 0 0 1000000000000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first, the second, the fifth and the sixth test cases of the example it is possible to show that such array does not exist.</p><p>In the third testcase of the example $$$a = [0, 0, 19]$$$. The sum of elements in it is equal to 19, the beauty of it is equal to $$$\left ( \left \lfloor \frac{0}{6} \right \rfloor + \left \lfloor \frac{0}{6} \right \rfloor + \left \lfloor \frac{19}{6} \right \rfloor \right ) = (0 + 0 + 3) = 3$$$.</p><p>In the fourth testcase of the example $$$a = [0, 3, 3, 3, 29]$$$. The sum of elements in it is equal to $$$38$$$, the beauty of it is equal to $$$(0 + 0 + 0 + 0 + 7) = 7$$$.</p></div>