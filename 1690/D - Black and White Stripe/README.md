<h2><a href="https://codeforces.com/contest/1690/problem/D" target="_blank" rel="noopener noreferrer">1690D — Black and White Stripe</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1690D](https://codeforces.com/contest/1690/problem/D) |

## Topics
`implementation` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Black and White Stripe</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a stripe of checkered paper of length $$$n$$$. Each cell is either white or black.</p><p>What is the minimum number of cells that must be recolored from white to black in order to have a segment of $$$k$$$ consecutive black cells on the stripe?</p><p>If the input data is such that a segment of $$$k$$$ consecutive black cells already exists, then print <span class="tex-font-style-tt">0</span>. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Next, descriptions of $$$t$$$ test cases follow.</p><p>The first line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 2\cdot10^5$$$). The second line consists of the letters '<span class="tex-font-style-tt">W</span>' (white) and '<span class="tex-font-style-tt">B</span>' (black). The line length is $$$n$$$.</p><p>It is guaranteed that the sum of values $$$n$$$ does not exceed $$$2\cdot10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each of $$$t$$$ test cases print an integer — the minimum number of cells that need to be repainted from white to black in order to have a segment of $$$k$$$ consecutive black cells.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009554229298442724" id="id006499739020971145" class="input-output-copier">Copy</div></div><pre data-content="4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W
" id="id009554229298442724"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5 3</div><div class="test-example-line test-example-line-odd test-example-line-1">BBWBW</div><div class="test-example-line test-example-line-even test-example-line-2">5 5</div><div class="test-example-line test-example-line-even test-example-line-2">BBWBW</div><div class="test-example-line test-example-line-odd test-example-line-3">5 1</div><div class="test-example-line test-example-line-odd test-example-line-3">BBWBW</div><div class="test-example-line test-example-line-even test-example-line-4">1 1</div><div class="test-example-line test-example-line-even test-example-line-4">W</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003713646851366599" id="id009542228722039581" class="input-output-copier">Copy</div></div><pre id="id003713646851366599">1
2
0
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$s$$$="<span class="tex-font-style-tt">BBWBW</span>" and $$$k=3$$$. It is enough to recolor $$$s_3$$$ and get $$$s$$$="<span class="tex-font-style-tt">BBBBW</span>". This string contains a segment of length $$$k=3$$$ consisting of the letters '<span class="tex-font-style-tt">B</span>'.</p><p>In the second test case of the example $$$s$$$="<span class="tex-font-style-tt">BBWBW</span>" and $$$k=5$$$. It is enough to recolor $$$s_3$$$ and $$$s_5$$$ and get $$$s$$$="<span class="tex-font-style-tt">BBBBB</span>". This string contains a segment of length $$$k=5$$$ consisting of the letters '<span class="tex-font-style-tt">B</span>'.</p><p>In the third test case of the example $$$s$$$="<span class="tex-font-style-tt">BBWBW</span>" and $$$k=1$$$. The string $$$s$$$ already contains a segment of length $$$k=1$$$ consisting of the letters '<span class="tex-font-style-tt">B</span>'.</p></div>