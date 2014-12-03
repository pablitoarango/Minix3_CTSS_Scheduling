Minix3_CTSS_Scheduling
======================

OS Project


Process Scheduling

FOR MORE INFORMATION ON PROJECT REQUIREMENTS REFER TO Project2.txt

FOR MORE INFORMATION ON SOLUTION REFER TO Report.pdf

Lessons from this Project

In this project I learned how the default scheduling works in Minix and how to change it to simulate CTSS. I had to find how to edit the quantum, the default minimum priority and the initial priority queue. I also learned about adding function keys to use for debug dumps and how the information server works. I was able to correctly add a function to display debugging information for when I edited the scheduling in Minix.


Biggest Challenge

The biggest challenge was by far finding which where the correct variables to edit to correctly change the initial priority queue and the initial quantum. I had to change a couple different values that I thought where the correct ones back and forth until I found just the right ones. Adding the function key greatly helped in figuring out if it was working correctly or not. Stopping the balancing was also a bit of a challenge since I wasn’t sure which code to comment out. I followed the function to where it was first called and was able to correctly stop the balancing.