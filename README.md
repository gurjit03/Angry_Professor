# Angry_Professor
The professor is conducting a course on Discrete Mathematics to a class of N students. He is angry at the lack of their discipline, and he decides to cancel the class if there are fewer than K students present after the class starts.  Given the arrival time of each student, your task is to find out if the class gets cancelled or not.

<h3>Input Format</h3>

The first line of the input contains T, the number of test cases. Each test case contains two lines. 
The first line of each test case contains two space-separated integers, N and K. 
The next line contains N space-separated integers, a1,a2,…,aN, representing the arrival time of each student.

If the arrival time of a given student is a non-positive integer (ai≤0), then the student enters before the class starts. If the arrival time of a given student is a positive integer (ai>0), the student enters after the class has started.

<h3>Output Format</h3>

For each testcase, print "YES" (without quotes) if the class gets cancelled and "NO" (without quotes) otherwise.

<h3>Constraints</h3>
<b>
1≤T≤10 <br/>
1≤N≤1000 <br />
1≤K≤N <br />
−100≤ai≤100,where i∈[1,N] <br />
</b>
Note 
If a student enters the class exactly when it starts (ai=0), the student is considered to have entered before the class has started.

<h3>Sample Input</h3>
2
4 3
-1 -3 4 2
4 2
0 -1 2 1

<h3>Sample Output</h3>
YES <br />
NO
<h3>
Explanation </h3>
For the first test case, K=3, i.e., the professor wants at least 3 students to be in class but there are only 2 who have arrived on time (−3 and −1), hence the class gets cancelled.

For the second test case, K=2, i.e, the professor wants at least 2 students to be in class and there are 2 who have arrived on time (0 and −1), hence the class does not get cancelled.
