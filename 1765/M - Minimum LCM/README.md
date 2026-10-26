<h2><a href="https://codeforces.com/contest/1765/problem/M" target="_blank" rel="noopener noreferrer">1765M — Minimum LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1765M](https://codeforces.com/contest/1765/problem/M) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">M. Minimum LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$.</p><p>Your task is to find two positive (greater than $$$0$$$) integers $$$a$$$ and $$$b$$$ such that $$$a+b=n$$$ and the least common multiple (LCM) of $$$a$$$ and $$$b$$$ is the minimum among all possible values of $$$a$$$ and $$$b$$$. If there are multiple answers, you can print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print two positive integers $$$a$$$ and $$$b$$$ — the answer to the problem. If there are multiple answers, you can print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002041103406730136" id="id0049289687291518225" class="input-output-copier">Copy</div></div><pre id="id002041103406730136"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">9</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-even test-example-line-4">10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006052783264283043" id="id0021876314197065105" class="input-output-copier">Copy</div></div><pre id="id006052783264283043">1 1
3 6
1 4
5 5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second example, there are $$$8$$$ possible pairs of $$$a$$$ and $$$b$$$:</p><ul> <li> $$$a = 1$$$, $$$b = 8$$$, $$$LCM(1, 8) = 8$$$; </li><li> $$$a = 2$$$, $$$b = 7$$$, $$$LCM(2, 7) = 14$$$; </li><li> $$$a = 3$$$, $$$b = 6$$$, $$$LCM(3, 6) = 6$$$; </li><li> $$$a = 4$$$, $$$b = 5$$$, $$$LCM(4, 5) = 20$$$; </li><li> $$$a = 5$$$, $$$b = 4$$$, $$$LCM(5, 4) = 20$$$; </li><li> $$$a = 6$$$, $$$b = 3$$$, $$$LCM(6, 3) = 6$$$; </li><li> $$$a = 7$$$, $$$b = 2$$$, $$$LCM(7, 2) = 14$$$; </li><li> $$$a = 8$$$, $$$b = 1$$$, $$$LCM(8, 1) = 8$$$. </li></ul><p>In the third example, there are $$$5$$$ possible pairs of $$$a$$$ and $$$b$$$:</p><ul> <li> $$$a = 1$$$, $$$b = 4$$$, $$$LCM(1, 4) = 4$$$; </li><li> $$$a = 2$$$, $$$b = 3$$$, $$$LCM(2, 3) = 6$$$; </li><li> $$$a = 3$$$, $$$b = 2$$$, $$$LCM(3, 2) = 6$$$; </li><li> $$$a = 4$$$, $$$b = 1$$$, $$$LCM(4, 1) = 4$$$. </li></ul></div>