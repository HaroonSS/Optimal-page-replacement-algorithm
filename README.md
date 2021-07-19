# Optimal-page-replacement-algorithm

*Objective

In a computer operating system that uses paging for virtual memory management, page replacement algorithms decide which memory pages  to page out, sometimes called swap out, or write to disk when a page of memory needs to be allocated. Page replacement happens when a requested page is not in memory (page fault) and a free page cannot be used to satisfy the allocation, either because there are none, or because the number of free pages is lower than some threshold.

Page replacement algorithms are an important part of virtual memory management and it helps the OS to decide which memory page can be moved out, making space for the currently needed page. However, the ultimate objective of all page replacement algorithms is to reduce the number of page faults.

*Solution

In operating systems, whenever a new page is referred and not present in memory, page fault occurs and Operating System replaces one of the existing pages with newly needed page. Different page replacement algorithms suggest different ways to decide which page to replace. The target for all algorithms is to reduce number of page faults.
In this algorithm, OS replaces the page that will not be used for the longest period of time in future.
 
The algorithm has lowest page fault rate of all algorithm. This algorithm state that: Replace the page which will not be used for longest period of time i.e future knowledge of reference string is required.

*Features

The Optimal page replacement algorithm is easy to describe. When memory is full you always evict a page that will be unreferenced for the longest time. This scheme, of course, is possible to implement only in the second identical run, by recording page usage on the first run. But generally the operating system does not know which pages will used, especially in applications receiving external input.
The content and the exact time of the input may greatly change the order and timing in which the pages are accessed. But nevertheless it gives us a reference point for comparing practical page replacement algorithms.

·It is easy to implement.
·It requires minimum fuss is to replace the page.
·In this algorithm, data structures used are simple.

