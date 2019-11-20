#include <stdio.h>
#include <omp.h>
int main ( int argc, int argv)
{
    int nthreads, tid;
    int numproc = omp_get_num_procs();
    printf("NumProcs %d\n\n", numproc);
    //omp_set_num_threads(22);
    #pragma omp parallel private (tid)
    {
        tid =omp_get_thread_num();
        printf("Hello world from thread %d\n\n", tid);
        if(tid==0)
        {
            nthreads = omp_get_num_threads();
            printf("nthreads %d\n\n", nthreads);
        }
    }
 }