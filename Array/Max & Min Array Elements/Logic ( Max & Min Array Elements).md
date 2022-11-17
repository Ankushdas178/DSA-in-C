### Below is the step by step descriptive logic to find maximum or minimum in array:

* 1. Input size and element in array, store it in some variable say `size` and `arr`.
* 2. Declare two variables `max` and `min` to store maximum and minimum. Assume first array element as maximum and minimum both, say `max = arr[0]` and `min = arr[0]`.
* 3. Iterate through array to find maximum and minimum element in array. Run loop from first to last array element i.e. `0` to `size - 1`. Loop structure should look like `for(i=0; i<size; i++)`.
* 4. Inside loop for each array element check for maximum and minimum. Assign current array element to `max`, if `(arr[i] > max)`. Assign current array element to `min` if it is less than `min` i.e. perform `min = arr[i]` if `(arr[i] < min)`.

<hr>

<img align="center" width="500" alt="Screenshot 2022-11-18 at 12 21 29 AM" src="https://user-images.githubusercontent.com/58916385/202533557-a463f814-c287-452c-9d8b-d483fc438c80.png">
