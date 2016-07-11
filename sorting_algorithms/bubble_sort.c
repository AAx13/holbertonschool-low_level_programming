
/* This function will bubble sort an array from smallest to highest number */
void bubble_sort(int *array, int size)
{
        int i;
        int x;
        int temp;
        /* scan the array */
        for(x = 0; x < size; x++) {
                for(i = 0; i < size - 1; i++) {
                        /* compare and swap the two indexes */
                        if(array[i] > array[i + 1]) {
                                temp = array[i];
                                array[i] = array[i + 1];
                                array[i + 1] = temp;
                        }

                }
        }
}
