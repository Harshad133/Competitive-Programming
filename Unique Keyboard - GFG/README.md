# Unique Keyboard
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Consider a unique keyboard with a single row of keys, represented by a string S1 of length 26 and indexed from 0 to 25. Initially, your finger is at index 0. </span></p>

<p><span style="font-size:18px">To type a character, your finger must move to the index of the desired character. The amount of time it takes to move your finger from index i to index j is calculated as the absolute difference between j and i, denoted as |j-i|. Determine the time required to type the string S2.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S1 = "defgharcijklbstuvwxyzmnopq"
S2 = "cab"
<strong>Output</strong>: 
16
<strong>Explanation</strong>:
Initially we are at index 0. To type 'c',
it will take a time of abs(0-7) = 7. To, type
'a' next, it will take abs(7-5) = 2. And, for
'b', it will take abs(5-12) = 7 unit time.
So, total time = 7+2+7 = 16.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S1 = "acdefghijklmnopqrstuvwxyzb"
S2 = "la"
<strong>Output</strong>: 
20
<strong>Explanation</strong>:
'l' is at index 10. So, the time taken
to type 'l' will be abs(0-10) = 10.
Now 'a' is at index 0 so 10-0 =10.
So, total time = 10+10 =20.</span>

</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong> findTime()&nbsp;</strong>that takes two strings S1, and S2 as input and returns an integer denoting time taken to type the string S2.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> &nbsp;O(|S2|)<br>
<strong>Expected Auxilliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt; |S2| &lt; 10<sup>5</sup><br>
S1 contains only lower case alphabets</span></p>
</div>