#include <stdio.h>

//Implementation of Page replacement algorithm

int main()

{
    
 //variable declaration and initialization
int no_of_frames, no_of_pages,
frames[10], pages[30], temp[10], value1,
value2, value3, i, j, k, pos, max, page_faults = 0,page_hits = 0, count = 0;

//code to input the frame number
printf ("ENTER NUMBER OF FRAMES: ");
scanf ("%d", &no_of_frames);

//code to input number of pages
printf ("ENTER NUMBER OF PAGES: ");
scanf ("%d", &no_of_pages);
printf ("ENTER PAGE REFERENCE STRING: ");

for (i = 0; i < no_of_pages; ++i)
{
printf ("Page No.[%d]:", i + 1);
scanf ("%d", &pages[i]);
}

for (i = 0; i < no_of_frames; ++i)
{
frames[i] = -1;
}

for (i = 0; i < no_of_pages; ++i)
{
value1 = value2 = 0;
//Check whether page present in frames or not

for (j = 0; j < no_of_frames; ++j)
{
if (frames[j] == pages[i])
{
value1 = value2 = 1;
break;
}
}
//If frames is empty replace frame by page
if (value1 == 0)
{
for (j = 0; j < no_of_frames; ++j)
{
if (frames[j] == -1)
{
page_faults++;
count = 1;
frames[j] = pages[i];
value2 = 1;
break;
}
}
}

//Check frame where present in page string in near future
if (value2 == 0)
{
value3 = 0;
for (j = 0; j < no_of_frames; ++j)
{
temp[j] = -1;
for (k = i + 1; k < no_of_pages; ++k)
{
if (frames[j] == pages[k])
{
temp[j] = k;
break;
}
}
}

//If frame not present in page string
for (j = 0; j < no_of_frames; ++j)
{
if (temp[j] == -1)
{
pos = j;
value3 = 1;
break;
}
}

//Check which frames not required in near future
if (value3 == 0)
{
max = temp[0];
pos = 0;
for (j = 1; j < no_of_frames; ++j)
{if (temp[j] > max)
{
max = temp[j];
pos = j;
}
}
}
frames[pos] = pages[i];
page_faults++;
count = 1;
}

//Display output
printf ("\n");
for (j = 0; j < no_of_frames; ++j)
{
printf ("%d\t\t", frames[j]);
}
if (count == 1)
{
printf ("PAGE FAULT --> %d", page_faults);
printf ("\n");
count = 0;
}
else
{
page_hits++;
printf ("PAGE HIT --> %d",page_hits);
printf("\n");
}
}
printf ("\n\nTotal Page Faults = %d", page_faults);
printf ("\n\nTotal Page Hits = %d ",page_hits);
return 0;
}