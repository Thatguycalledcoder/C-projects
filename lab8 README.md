LinearIndx function:
  The LinearIndx function converts the indexes of a lower triangualr matrix or 2d array into its corresponding 1d array index. With i and j as the parameters for the
   function and also as the indexes of the 2d array, the formula for the corresponding 1d array is:
   With 1d array index as m,
   m = ((i+1)*i)/2 + j
   
ReverseIndx function:
  In order to returnn the 1d array's corresponding index for the 2d array, it takes two parameters: the length of the array and the index of the 1d array to be computed
  into its corresponding 2d array indexes(I). Instead of a formula, based on the length of the array passed, a for loop is used to determine the indexes in the 2d array.
  A count variable is set to -1 and is increased by one in the for loop whenever the element in the 2d array is not zero. When the value of the count variable is equal
  to that of I, the function returns the current values of i and j using a tuple.
