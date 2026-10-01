<h2><a href="https://codeforces.com/contest/1374/problem/B" target="_blank" rel="noopener noreferrer">1374B — Multiply by 2, divide by 6</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1374B](https://codeforces.com/contest/1374/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">B. Multiply by 2, divide by 6</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$. In one move, you can either multiply $$$n$$$ by two or divide $$$n$$$ by $$$6$$$ (if it is divisible by $$$6$$$ without the remainder).</p><p>Your task is to find the minimum number of moves needed to obtain $$$1$$$ from $$$n$$$ or determine if it's impossible to do that.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow. </p><p>The only line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer — the minimum number of moves needed to obtain $$$1$$$ from $$$n$$$ if it's possible to do that or <span class="tex-font-style-tt">-1</span> if it's impossible to obtain $$$1$$$ from $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0046497843091553026" id="id001021752895730228" class="input-output-copier">Copy</div></div><pre id="id0046497843091553026">7
1
2
3
12
12345
15116544
387420489
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009142767165572621" id="id0012675376333174848" class="input-output-copier">Copy</div></div><pre id="id009142767165572621">0
-1
2
-1
-1
12
36
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Consider the sixth test case of the example. The answer can be obtained by the following sequence of moves from the given integer $$$15116544$$$:</p><ol> <li> Divide by $$$6$$$ and get $$$2519424$$$; </li><li> divide by $$$6$$$ and get $$$419904$$$; </li><li> divide by $$$6$$$ and get $$$69984$$$; </li><li> divide by $$$6$$$ and get $$$11664$$$; </li><li> multiply by $$$2$$$ and get $$$23328$$$; </li><li> divide by $$$6$$$ and get $$$3888$$$; </li><li> divide by $$$6$$$ and get $$$648$$$; </li><li> divide by $$$6$$$ and get $$$108$$$; </li><li> multiply by $$$2$$$ and get $$$216$$$; </li><li> divide by $$$6$$$ and get $$$36$$$; </li><li> divide by $$$6$$$ and get $$$6$$$; </li><li> divide by $$$6$$$ and get $$$1$$$. </li></ol></div>