This folder contains many programs whose output is 3.14159 (i.e Pi).

It contains following programs

1)Pi_sequential.cpp- Sequential example of the program
2)Pi_parallel.cpp - Parallel execution of the program
3)ThreadsLimited.cpp - Parallel execution of the programs using Limited threads.
4)ThreadLimitedSynchromized.cpp- Parallel execution of the programs using Limited threads along with synchronization for better performance.
Note:-
Pi_parallel.cpp is written by decreasing number of steps and creating thread for each step.However there is limitation to maximum threads that can be requested using omp_set_num_threads() If it cannot fulfill the request, then it gives segmentation fault and stops the executions.

Use gdb debugger for better understanding. 
