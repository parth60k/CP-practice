<h2><a href="https://codeforces.com/contest/1855/problem/B" target="_blank" rel="noopener noreferrer">1855B — Longest Divisors Interval</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1855B](https://codeforces.com/contest/1855/problem/B) |

## Topics
`brute force` `combinatorics` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Longest Divisors Interval</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a positive integer $$$n$$$, find the maximum size of an interval $$$[l, r]$$$ of positive integers such that, for every $$$i$$$ in the interval (i.e., $$$l \leq i \leq r$$$), $$$n$$$ is a multiple of $$$i$$$.</p><p>Given two integers $$$l\le r$$$, the size of the interval $$$[l, r]$$$ is $$$r-l+1$$$ (i.e., it coincides with the number of integers belonging to the interval).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The only line of the description of each test case contains one integer $$$n$$$ ($$$1 \leq n \leq 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer: the maximum size of a valid interval.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006236160927474561" id="id003208248249445045" class="input-output-copier">Copy</div></div><pre id="id006236160927474561"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">40</div><div class="test-example-line test-example-line-odd test-example-line-3">990990</div><div class="test-example-line test-example-line-even test-example-line-4">4204474560</div><div class="test-example-line test-example-line-odd test-example-line-5">169958913706572972</div><div class="test-example-line test-example-line-even test-example-line-6">365988220345828080</div><div class="test-example-line test-example-line-odd test-example-line-7">387701719537826430</div><div class="test-example-line test-example-line-even test-example-line-8">620196883578129853</div><div class="test-example-line test-example-line-odd test-example-line-9">864802341280805662</div><div class="test-example-line test-example-line-even test-example-line-10">1000000000000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006433443481932518" id="id008760277978556591" class="input-output-copier">Copy</div></div><pre id="id006433443481932518">1
2
3
6
4
22
3
1
2
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, a valid interval with maximum size is $$$[1, 1]$$$ (it's valid because $$$n = 1$$$ is a multiple of $$$1$$$) and its size is $$$1$$$.</p><p>In the second test case, a valid interval with maximum size is $$$[4, 5]$$$ (it's valid because $$$n = 40$$$ is a multiple of $$$4$$$ and $$$5$$$) and its size is $$$2$$$.</p><p>In the third test case, a valid interval with maximum size is $$$[9, 11]$$$.</p><p>In the fourth test case, a valid interval with maximum size is $$$[8, 13]$$$.</p><p>In the seventh test case, a valid interval with maximum size is $$$[327869, 327871]$$$.</p></div>