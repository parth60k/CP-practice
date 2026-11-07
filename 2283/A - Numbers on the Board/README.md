<h2><a href="https://codeforces.com/contest/2283/problem/A" target="_blank" rel="noopener noreferrer">2283A — Numbers on the Board</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2283A](https://codeforces.com/contest/2283/problem/A) |

## Topics
`greedy` `math` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">A. Numbers on the Board</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>All integers from $$$l$$$ to $$$r$$$ inclusive are written on the board, each exactly once.</p><p>We call a number on the board <span class="tex-font-style-it">beautiful</span> if it is equal to the sum of all numbers on the board, including this number itself. For example, if the numbers $$$-4$$$, $$$-1$$$, $$$2$$$, $$$3$$$, $$$5$$$ are written on the board, then the number $$$5$$$ is beautiful.</p><p>You may erase any numbers from the board, but at least one number must remain. Find the minimum number of numbers that need to be erased so that after that there is at least one beautiful number on the board. It is not necessary to erase any numbers if there is already a beautiful number on the board.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing two integers $$$l$$$ and $$$r$$$ ($$$-100 \le l \le r \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimum number of numbers that need to be erased from the board.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005766501632674041" id="id0007622724730991337" class="input-output-copier">Copy</div></div><pre data-content="8
0 0
2 6
-5 -3
-2 2
-2 3
-2 5
-6 2
0 4
" id="id005766501632674041"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">0 0</div><div class="test-example-line test-example-line-even test-example-line-2">2 6</div><div class="test-example-line test-example-line-odd test-example-line-3">-5 -3</div><div class="test-example-line test-example-line-even test-example-line-4">-2 2</div><div class="test-example-line test-example-line-odd test-example-line-5">-2 3</div><div class="test-example-line test-example-line-even test-example-line-6">-2 5</div><div class="test-example-line test-example-line-odd test-example-line-7">-6 2</div><div class="test-example-line test-example-line-even test-example-line-8">0 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00545421450307392" id="id009715819333507019" class="input-output-copier">Copy</div></div><pre data-content="0
4
2
0
0
2
3
3
" id="id00545421450307392"><div class="test-example-line test-example-line-odd test-example-line-1">0</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-even test-example-line-4">0</div><div class="test-example-line test-example-line-odd test-example-line-5">0</div><div class="test-example-line test-example-line-even test-example-line-6">2</div><div class="test-example-line test-example-line-odd test-example-line-7">3</div><div class="test-example-line test-example-line-even test-example-line-8">3</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the test cases from the statement, you should do the following:</p><ol> <li> Leave the number $$$0$$$. It is equal to the sum of all numbers on the board, so nothing needs to be erased. </li><li> Erase the numbers $$$2$$$, $$$3$$$, $$$4$$$, $$$5$$$. Only the number $$$6$$$ will remain on the board, and it will be beautiful. </li><li> Erase the numbers $$$-4$$$ and $$$-3$$$. Only the number $$$-5$$$ will remain on the board, and it will be beautiful. </li><li> Do not erase anything. The numbers $$$-2$$$, $$$-1$$$, $$$0$$$, $$$1$$$, $$$2$$$ will remain on the board. Their sum is $$$0$$$, so the number $$$0$$$ is beautiful. </li><li> Do not erase anything. The numbers $$$-2$$$, $$$-1$$$, $$$0$$$, $$$1$$$, $$$2$$$, $$$3$$$ will remain on the board. Their sum is $$$3$$$, so the number $$$3$$$ is beautiful. </li><li> Erase the numbers $$$4$$$ and $$$5$$$. The numbers $$$-2$$$, $$$-1$$$, $$$0$$$, $$$1$$$, $$$2$$$, $$$3$$$ will remain on the board. Their sum is $$$3$$$, so the number $$$3$$$ is beautiful. </li><li> Erase the numbers $$$-6$$$, $$$-5$$$, $$$-3$$$. The numbers $$$-4$$$, $$$-2$$$, $$$-1$$$, $$$0$$$, $$$1$$$, $$$2$$$ will remain on the board. Their sum is $$$-4$$$, so the number $$$-4$$$ is beautiful. </li><li> Erase the numbers $$$1$$$, $$$2$$$, $$$3$$$. The numbers $$$0$$$ and $$$4$$$ will remain on the board. Their sum is $$$4$$$, so the number $$$4$$$ is beautiful. </li></ol></div>