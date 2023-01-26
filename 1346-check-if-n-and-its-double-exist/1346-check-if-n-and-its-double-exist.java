class Solution {
    public boolean checkIfExist(int[] arr) {
        int temp;
        Arrays.sort(arr);

        for (int i = 0 ; i < arr.length ; i++) {
            temp = Arrays.binarySearch(arr,2*arr[i]);
            if ( temp >= 0 && temp != i) {
//                System.out.println("index = " + i);
                return true;
            }
        }

        return false;
    }
}