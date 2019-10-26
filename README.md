# Logical-clocks-using-Lamport
Lamport proposed a scheme to order the events in a distributed system by using logical clocks. Due to the absence of synchronized clocks and hence global time in a distributed system, the order in which events occur at two different machines is impossible to be determined based on the local time at which they occurred. The implementation rules are as below:   a) Clock Ci is implemented between any two events of the same process as Ci = Ci + d (d >0)  b) If event a is a send message by process Pi and the same is received by process Pj, then tm = Ci (a), and Cj = max (Cj, tm+d), d>0.   Below code is an implementation of the above two rules (simulation). Output is also shown for clarity. Your task is to modify the below program such that value of ‘d’ becomes 3 for all the processes, and the starting value of the clock at P1, P2, and P3 is 4. Submit the code with a snapshot of the run.
