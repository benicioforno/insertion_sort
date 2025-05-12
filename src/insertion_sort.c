
void InsertionSort(int *array, int length) {
  int i, j, current;
  for (int i = 1; i < length; i++) {
    current = array[i];
    j = i - 1;
    while ((current < array[j]) && (j >= 0)) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = current;
  }
}
