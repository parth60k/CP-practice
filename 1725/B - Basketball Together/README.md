<h2><a href="https://codeforces.com/contest/1725/problem/B" target="_blank" rel="noopener noreferrer">1725B — Basketball Together</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1725B](https://codeforces.com/contest/1725/problem/B) |

## Topics
`binary search` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Basketball Together</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A basketball competition is held where the number of players in a team does not have a maximum or minimum limit (not necessarily $$$5$$$ players in one team for each match). There are $$$N$$$ candidate players in the competition that will be trained by Pak Chanek, the best basketball coach on earth. The $$$i$$$-th candidate player has a power of $$$P_i$$$.</p><p>Pak Chanek will form zero or more teams from the $$$N$$$ candidate players on the condition that each candidate player may only join in at most one team. Each of Pak Chanek's teams will be sent to compete once with an enemy team that has a power of $$$D$$$. In each match, the team sent is said to defeat the enemy team if the sum of powers from the formed players is <span class="tex-font-style-bf">strictly greater than $$$D$$$</span>.</p><p>One of Pak Chanek's skills is that when a team that has been formed plays in a match, he can change the power of each player in the team to be equal to the biggest player power from the team.</p><p>Determine the maximum number of wins that can be achieved by Pak Chanek.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$N$$$ and $$$D$$$ ($$$1 \le N \le 10^5$$$, $$$1 \le D \le 10^9$$$) — the number of candidate players and the power of the enemy team.</p><p>The second line contains $$$N$$$ integers $$$P_1, P_2, \ldots, P_N$$$ ($$$1 \le P_i \le 10^9$$$) — the powers of all candidate players.</p></div><div class="output-specification"><div class="section-title">Output</div><p>A line containing an integer representing the maximum number of wins that can be achieved by Pak Chanek.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006453001361260958" id="id008326838753584056" class="input-output-copier">Copy</div></div><pre id="id006453001361260958">6 180
90 80 70 60 50 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007065538823544637" id="id005119790415980392" class="input-output-copier">Copy</div></div><pre id="id0007065538823544637">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The $$$1$$$-st team formed is a team containing players $$$4$$$ and $$$6$$$. The power of each player in the team becomes $$$100$$$. So the total power of the team is $$$100 + 100 = 200  \gt  180$$$.</p><p>The $$$2$$$-nd team formed is a team containing players $$$1$$$, $$$2$$$, and $$$5$$$. The power of each player in the team becomes $$$90$$$. So the total power of the team is $$$90 + 90 + 90 = 270  \gt  180$$$.</p></div>