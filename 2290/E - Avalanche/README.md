<h2><a href="https://codeforces.com/contest/2290/problem/E" target="_blank" rel="noopener noreferrer">2290E — Avalanche</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2290E](https://codeforces.com/contest/2290/problem/E) |

## Topics
`dp` `games` `math`

---

## Problem Statement

<div class="header"><div class="title">E. Avalanche</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>There are $$$n$$$ piles of stones in a row, numbered from $$$1$$$ to $$$n$$$ from left to right. The $$$i$$$-th pile contains $$$a_i$$$ stones. You are also given an integer $$$k$$$.</p><p>Alice and Bob play a game. They take turns, and Alice moves first. In one move, a player chooses a non-empty pile $$$i$$$ and removes one stone from it. Then one new stone is added to each pile $$$j$$$ such that $$$\max(1, i-k) \le j \le i-1$$$, that is, to each of the $$$\min(k, i-1)$$$ piles immediately to the left of pile $$$i$$$. If $$$i = 1$$$, no stones are added. The supply of new stones is unlimited. For example, if $$$i = 5$$$ and $$$k = 2$$$, one stone is added to each of piles $$$3$$$ and $$$4$$$.</p><p>The player who cannot make a move loses. It can be shown that the game always ends after a finite number of moves.</p><p>Determine the winner if both players play optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 2\cdot 10^5$$$, $$$1 \le k \le n-1$$$) — the number of piles and the parameter of the game.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$) — the numbers of stones in the piles.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print <span class="tex-font-style-tt">Alice</span> if Alice wins, and <span class="tex-font-style-tt">Bob</span> otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005146087891859689" id="id0032406124228865907" class="input-output-copier">Copy</div></div><pre data-content="5
2 1
1 1
3 2
0 0 1
4 1
0 0 1 0
5 2
1 2 3 4 5
3 1
2 5 2
" id="id005146087891859689"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 1</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">3 2</div><div class="test-example-line test-example-line-even test-example-line-2">0 0 1</div><div class="test-example-line test-example-line-odd test-example-line-3">4 1</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0 1 0</div><div class="test-example-line test-example-line-even test-example-line-4">5 2</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 3 4 5</div><div class="test-example-line test-example-line-odd test-example-line-5">3 1</div><div class="test-example-line test-example-line-odd test-example-line-5">2 5 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0031785767898626116" id="id00721393429356306" class="input-output-copier">Copy</div></div><pre data-content="Alice
Bob
Alice
Alice
Bob
" id="id0031785767898626116"><div class="test-example-line test-example-line-odd test-example-line-1">Alice</div><div class="test-example-line test-example-line-even test-example-line-2">Bob</div><div class="test-example-line test-example-line-odd test-example-line-3">Alice</div><div class="test-example-line test-example-line-even test-example-line-4">Alice</div><div class="test-example-line test-example-line-odd test-example-line-5">Bob</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$k = 1$$$ and each of the two piles contains one stone.</p><ul> <li> If Alice takes the stone from the second pile, one stone is added to the first pile, so the piles contain $$$2$$$ and $$$0$$$ stones. Then Bob and Alice take one stone each from the first pile, and Bob cannot move. </li><li> If Alice takes the stone from the first pile, Bob has to take the stone from the second pile, which adds a stone to the first pile. Alice takes it, and Bob cannot move. </li></ul><p>In both cases, Alice wins.</p><p>In the second test case, $$$k = 2$$$, and Alice has to take the stone from the third pile. Then one stone is added to each of the first two piles, so the piles contain $$$1$$$, $$$1$$$, and $$$0$$$ stones.</p><ul> <li> If Bob takes the stone from the second pile, a stone is added to the first pile, so the piles contain $$$2$$$, $$$0$$$, and $$$0$$$ stones. Then Alice and Bob take one stone each from the first pile, and Alice cannot move. </li><li> If Bob takes the stone from the first pile, Alice has to take the stone from the second pile, which adds a stone to the first pile. Bob takes it, and Alice cannot move. </li></ul><p>In both cases, Bob wins.</p></div>