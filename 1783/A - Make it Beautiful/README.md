<h2><a href="https://codeforces.com/contest/1783/problem/A" target="_blank" rel="noopener noreferrer">1783A — Make it Beautiful</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1783A](https://codeforces.com/contest/1783/problem/A) |

## Topics
`constructive algorithms` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Make it Beautiful</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An array $$$a$$$ is called <span class="tex-font-style-it">ugly</span> if it contains <span class="tex-font-style-bf">at least one</span> element which is equal to the <span class="tex-font-style-bf">sum of all elements before it</span>. If the array is not ugly, it is <span class="tex-font-style-it">beautiful</span>.</p><p>For example:</p><ul> <li> the array $$$[6, 3, 9, 6]$$$ is ugly: the element $$$9$$$ is equal to $$$6 + 3$$$; </li><li> the array $$$[5, 5, 7]$$$ is ugly: the element $$$5$$$ (the second one) is equal to $$$5$$$; </li><li> the array $$$[8, 4, 10, 14]$$$ is beautiful: $$$8 \ne 0$$$, $$$4 \ne 8$$$, $$$10 \ne 8 + 4$$$, $$$14 \ne 8 + 4 + 10$$$, so there is no element which is equal to the sum of all elements before it. </li></ul><p>You are given an array $$$a$$$ such that $$$1 \le a_1 \le a_2 \le \dots \le a_n \le 100$$$. You have to <span class="tex-font-style-bf">reorder</span> the elements of $$$a$$$ in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of $$$a$$$. You are allowed to keep the array $$$a$$$ unchanged, if it is beautiful.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 2000$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line contains one integer $$$n$$$ ($$$2 \le n \le 50$$$). The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_1 \le a_2 \le \dots \le a_n \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer as follows:</p><ul> <li> if it is impossible to reorder the elements of $$$a$$$ in such a way that it becomes beautiful, print <span class="tex-font-style-tt">NO</span>; </li><li> otherwise, in the first line, print <span class="tex-font-style-tt">YES</span>. In the second line, print $$$n$$$ integers — any beautiful array which can be obtained from $$$a$$$ by reordering its elements. If there are multiple such arrays, print any of them. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005791168725156732" id="id0007464320392416535" class="input-output-copier">Copy</div></div><pre id="id005791168725156732"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3 3 6 6</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">10 10</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2 3 4 5</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">1 4 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009878042750982251" id="id002213367580587544" class="input-output-copier">Copy</div></div><pre id="id009878042750982251">YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4
</pre></div></div></div>