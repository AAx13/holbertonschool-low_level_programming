/* This function will sort an array in ascending order using inserton sort method */
void insertion_sort(int *array, int size)
{
        int i;
        int j;
        int unsorted;

        for(i = 1; i < size; i++) {
                j = i;
                unsorted = array[j];
                while(j > 0 && array[j - 1] > unsorted) {
                        array[j] = array[j - 1];
                        --j;
                        array[j] = unsorted;
                }
        }
}
