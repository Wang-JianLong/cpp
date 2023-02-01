import java.util.Arrays;
import java.util.Objects;

public class wjl {
  public static void main(String[] args) {
    int[] a = { 1, 2, 3, 43, 2, 4, 32, 54, 3, 2, 1, 78, 45, 3, 23 };
    quickSort(a, 0, a.length - 1);
   String str = Arrays.toString(a);
  System.out.println(str);
  }

  static int quickSort(int[] array, int left, int right) {
    int i = left, j = right;
    int pv = array[(i + j) / 2];
    while (i <= j) {
      while (array[i] < pv) {
        i++;
      }
      while (array[j] > pv) {
        j--;
      }

      if (i <= j) {
        swap(array, i, j);
        i++;
        j--;
      }
    }

    if (left < j) {
      quickSort(array, left, j);
    }

    if (right > i) {
      quickSort(array, i, right);
    }
    return 0;
  }

  static void swap(int[] array, int i, int j) {
    System.out.printf("swap %d    %d\n",array[i],array[j]);
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
}
