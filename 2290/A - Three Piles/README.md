<h2><a href="https://codeforces.com/contest/2290/problem/A" target="_blank" rel="noopener noreferrer">2290A — Three Piles</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2290A](https://codeforces.com/contest/2290/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Three Piles</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>There are three piles of stones. The first pile contains $$$a$$$ stones, the second pile contains $$$b$$$ stones, and the third pile contains $$$c$$$ stones.</p><p>You must make <span class="tex-font-style-bf">exactly one</span> move: take one stone from one of the piles and put it on one of the other two piles. You cannot skip this move, and you cannot make more than one move.</p><p>Determine whether you can make this move so that all three piles contain the same number of stones.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.</p><p>The only line of each test case contains three integers $$$a$$$, $$$b$$$, and $$$c$$$ ($$$1 \le a \le b \le c \le 10$$$) — the numbers of stones in the first, second, and third piles.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" if you can make the move so that all three piles contain the same number of stones, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be recognized as positive responses.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003907770974729211" id="id005368030523008523" class="input-output-copier">Copy</div></div><pre data-content="6
1 2 3
2 2 2
3 4 5
1 1 4
8 9 10
3 5 7
" id="id003907770974729211"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3</div><div class="test-example-line test-example-line-even test-example-line-2">2 2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">3 4 5</div><div class="test-example-line test-example-line-even test-example-line-4">1 1 4</div><div class="test-example-line test-example-line-odd test-example-line-5">8 9 10</div><div class="test-example-line test-example-line-even test-example-line-6">3 5 7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027654805596319065" id="id008689631927251851" class="input-output-copier">Copy</div></div><pre data-content="YES
NO
YES
NO
YES
NO
" id="id0027654805596319065"><div class="test-example-line test-example-line-odd test-example-line-1">YES</div><div class="test-example-line test-example-line-even test-example-line-2">NO</div><div class="test-example-line test-example-line-odd test-example-line-3">YES</div><div class="test-example-line test-example-line-even test-example-line-4">NO</div><div class="test-example-line test-example-line-odd test-example-line-5">YES</div><div class="test-example-line test-example-line-even test-example-line-6">NO</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can take a stone from the third pile and put it on the first pile. Then each pile contains $$$2$$$ stones.</p><p>In the second test case, all piles already contain the same number of stones. However, a move is mandatory, and after any move the piles no longer contain the same number of stones.</p><p>In the fourth test case, two moves would be enough to make each pile contain $$$2$$$ stones, but only one move is allowed. After any single move, the piles do not contain the same number of stones.</p></div>