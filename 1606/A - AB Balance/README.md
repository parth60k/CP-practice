<h2><a href="https://codeforces.com/contest/1606/problem/A" target="_blank" rel="noopener noreferrer">1606A — AB Balance</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1606A](https://codeforces.com/contest/1606/problem/A) |

## Topics
`strings`

---

## Problem Statement

<div class="header"><div class="title">A. AB Balance</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ of length $$$n$$$ consisting of characters <span class="tex-font-style-tt">a</span> and/or <span class="tex-font-style-tt">b</span>.</p><p>Let $$$\operatorname{AB}(s)$$$ be the number of occurrences of string <span class="tex-font-style-tt">ab</span> in $$$s$$$ as a <span class="tex-font-style-bf">substring</span>. Analogically, $$$\operatorname{BA}(s)$$$ is the number of occurrences of <span class="tex-font-style-tt">ba</span> in $$$s$$$ as a <span class="tex-font-style-bf">substring</span>.</p><p>In one step, you can choose any index $$$i$$$ and replace $$$s_i$$$ with character <span class="tex-font-style-tt">a</span> or <span class="tex-font-style-tt">b</span>.</p><p>What is the minimum number of steps you need to make to achieve $$$\operatorname{AB}(s) = \operatorname{BA}(s)$$$?</p><p><span class="tex-font-style-bf">Reminder:</span></p><p>The number of occurrences of string $$$d$$$ in $$$s$$$ as substring is the number of indices $$$i$$$ ($$$1 \le i \le |s| - |d| + 1$$$) such that substring $$$s_i s_{i + 1} \dots s_{i + |d| - 1}$$$ is equal to $$$d$$$. For example, $$$\operatorname{AB}($$$<span class="tex-font-style-tt">aabbbabaa</span>$$$) = 2$$$ since there are two indices $$$i$$$: $$$i = 2$$$ where <span class="tex-font-style-tt">a<span class="tex-font-style-underline">ab</span>bbabaa</span> and $$$i = 6$$$ where <span class="tex-font-style-tt">aabbb<span class="tex-font-style-underline">ab</span>aa</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). Description of the test cases follows.</p><p>The first and only line of each test case contains a single string $$$s$$$ ($$$1 \le |s| \le 100$$$, where $$$|s|$$$ is the length of the string $$$s$$$), consisting only of characters <span class="tex-font-style-tt">a</span> and/or <span class="tex-font-style-tt">b</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the resulting string $$$s$$$ with $$$\operatorname{AB}(s) = \operatorname{BA}(s)$$$ you'll get making the minimum number of steps.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003576490988833081" id="id008492162990904658" class="input-output-copier">Copy</div></div><pre id="id003576490988833081">4
b
aabbbabaa
abbb
abbaab
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007088715519746829" id="id0043809802508859386" class="input-output-copier">Copy</div></div><pre id="id007088715519746829">b
aabbbabaa
bbbb
abbaaa</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, both $$$\operatorname{AB}(s) = 0$$$ and $$$\operatorname{BA}(s) = 0$$$ (there are no occurrences of <span class="tex-font-style-tt">ab</span> (<span class="tex-font-style-tt">ba</span>) in <span class="tex-font-style-tt">b</span>), so can leave $$$s$$$ untouched.</p><p>In the second test case, $$$\operatorname{AB}(s) = 2$$$ and $$$\operatorname{BA}(s) = 2$$$, so you can leave $$$s$$$ untouched. </p><p>In the third test case, $$$\operatorname{AB}(s) = 1$$$ and $$$\operatorname{BA}(s) = 0$$$. For example, we can change $$$s_1$$$ to <span class="tex-font-style-tt">b</span> and make both values zero.</p><p>In the fourth test case, $$$\operatorname{AB}(s) = 2$$$ and $$$\operatorname{BA}(s) = 1$$$. For example, we can change $$$s_6$$$ to <span class="tex-font-style-tt">a</span> and make both values equal to $$$1$$$.</p></div>