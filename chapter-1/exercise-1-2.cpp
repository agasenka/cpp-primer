/*
 * Exercise 1.2: Change the program to return -1. A return value of -1 is often treated
as an indicator that the program failed. Recompile and rerun your program to see how
your system treats a failure indicator from main */
int main()
{
  return -1;
}

/* output:
 * ➜ ./a.out; echo $status
 * 255
 *
 * ps: because it is only read last 8 bit and return value int.
*/
