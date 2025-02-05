#include "CMethod.h"
void mergeS(int*, int, int, int);

void BubbleSort::sort(int* mass, int size) {
  for (int i = 0; i < size - 1; i++) {
    int all_good = true;
    for (int j = 0; j < size - i - 1; j++) {
      if (mass[j + 1] < mass[j]) {
        int tmp = mass[j + 1];
        mass[j + 1] = mass[j];
        mass[j] = tmp;
        all_good = false;
      }
    }
    if (all_good) break;
  }
}

void CountingSort::sort(int* mass, int size) {
  int max = mass[0], min = mass[0];
  for (int i = 0; i < size; i++) {
    if (mass[i] > max) max = mass[i];
    if (mass[i] < min) min = mass[i];
  }

  int* count = new int[max - min + 1];
  for (int i = 0; i < max - min + 1; i++) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[mass[i] - min] += 1;
  }

  for (int i = 0, j = 0; i < size; j++) {
    while (count[j] != 0) {
      mass[i] = min + j;
      count[j] -= 1;
      i++;
    }
  }

  delete[] count;
}

void QuickSort::qsort(int *mass, int left, int right) {
  if (left < right) {
    // ��������� � ������ � � ����� �������
    int i = left;
    int j = right;

    // ����������� ������� �������
    int base = mass[(right + left) / 2];

    // ����� ������
    do {
      // ��������� ��������, ���� ��, ������� ����� ���������� � ������ �����
      while (mass[i] < base) { i++; }
      while (mass[j] > base) { j--; }

      // ������ �������� �������
      if (i <= j) {
        int tmp = mass[i];
        mass[i] = mass[j];
        mass[j] = tmp;
        i++;
        j--;
      }
    } while (i <= j);

    qsort(mass, left, j);
    qsort(mass, i, right);
  }
}

void MergeSort::Msort(int* arr, int low, int high) {
    int mid;
    if (low < high) {
        //divide the array at mid and sort independently using merge sort
        mid = (low + high) / 2;
        Msort(arr, low, mid);
        Msort(arr, mid + 1, high);
        //merge or conquer sorted arrays
        mergeS(arr, low, high, mid);
    }
}

// Merge two subarrays L and M into arr
void mergeS(int* arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }
}
    