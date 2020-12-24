# Day10-Sorting-2
## Merge Sort
* Merge Sort is a Divide and Conquer algorithm.</br>
* It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.</br>
* The merge() function is used for merging two halves. 
* The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
### ALgorithm
    MergeSort(arr[], l,  r)
        If r > l
              1. Find the middle point to divide the array into two halves:  
                 middle m = (l+r)/2
             2. Call mergeSort for first half:   
                Call mergeSort(arr, l, m)
             3. Call mergeSort for second half:
                 Call mergeSort(arr, m+1, r)
              4. Merge the two halves sorted in step 2 and 3:
                 Call merge(arr, l, m, r)
                 
[HeaderFile](https://github.com/akshatprogrammer/Day10-Sorting-2/blob/main/MergeSort.h)

## Quick Sort
* QuickSort is a Divide and Conquer algorithm. 
* It picks an element as pivot and partitions the given array around the picked pivot. </br>
There are many different versions of quickSort that pick pivot in different ways. </br>
</br>
1. Always pick first element as pivot.</br>
2. Always pick last element as pivot (implemented below)</br>
3. Pick a random element as pivot.</br>
4. Pick median as pivot.</br>

**Pseudo Code for recursive QuickSort function**</br>
       
    quickSort(arr[], low, high)
    {
        if (low < high)
        {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
        }
    }
**Partition Algorithm**</br>
    
    partition (arr[], low, high)
    {
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
 
    i = (low - 1)  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
    } 
[Header File](https://github.com/akshatprogrammer/Day10-Sorting-2/blob/main/QuickSort.h)

# Connect With Me
LinkedIn : https://www.linkedin.com/in/akshat-jain-a24baa18a/<br/>
Email : akshat.kodia@gmail.com<br/>
Twitter : www.twitter.com/akki_aj89<br/>

# Personal
Name : Akshat Jain<br/>
University : Graphic Era University, Dehradun(UK)

If any problem with this program reach me at Telegram<br/>
Here is the link -> https://t.me/akki_aj89

# Gratitude
Thank You, if you like it please leave a Star.
