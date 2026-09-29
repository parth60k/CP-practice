<h2><a href="https://codeforces.com/contest/1559/problem/A" target="_blank" rel="noopener noreferrer">1559A — Mocha and Math</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1559A](https://codeforces.com/contest/1559/problem/A) |

## Topics
`bitmasks` `constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Mocha and Math</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Mocha is a young girl from high school. She has learned so much interesting knowledge from her teachers, especially her math teacher. Recently, Mocha is learning about binary system and very interested in bitwise operation.</p><p>This day, Mocha got a sequence $$$a$$$ of length $$$n$$$. In each operation, she can select an arbitrary interval $$$[l, r]$$$ and for all values $$$i$$$ ($$$0\leq i \leq r-l$$$), replace $$$a_{l+i}$$$ with $$$a_{l+i} \,\&\, a_{r-i}$$$ at the same time, where $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>. This operation can be performed <span class="tex-font-style-bf">any number of times</span>.</p><p>For example, if $$$n=5$$$, the array is $$$[a_1,a_2,a_3,a_4,a_5]$$$, and Mocha selects the interval $$$[2,5]$$$, then the new array is $$$[a_1,a_2\,\&\, a_5, a_3\,\&\, a_4, a_4\,\&\, a_3, a_5\,\&\, a_2]$$$.</p><p>Now Mocha wants to minimize the maximum value in the sequence. As her best friend, can you help her to get the answer?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. </p><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Each test case consists of two lines.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$) — the length of the sequence.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimal value of the maximum value in the sequence.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024637533284784097" id="id003949646976450416" class="input-output-copier">Copy</div></div><pre id="id0024637533284784097">4
2
1 2
3
1 1 3
4
3 11 3 7
5
11 7 15 3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008109416780219969" id="id005232987235281737" class="input-output-copier">Copy</div></div><pre id="id008109416780219969">0
1
3
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Mocha can choose the interval $$$[1,2]$$$, then the sequence becomes $$$[ 0, 0]$$$, where the first element is $$$1\,\&\,2$$$, and the second element is $$$2\,\&\,1$$$.</p><p>In the second test case, Mocha can choose the interval $$$[1,3]$$$, then the sequence becomes $$$[ 1,1,1]$$$, where the first element is $$$1\,\&\,3$$$, the second element is $$$1\,\&\,1$$$, and the third element is $$$3\,\&\,1$$$.</p></div>