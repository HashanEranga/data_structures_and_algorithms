package com.hashan.algorithms.hackerrank.simplearraysum;

import java.io.*;
import java.util.*;

class Result {

    /*
     * Complete the 'simpleArraySum' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY ar as parameter.
     */

    public static int simpleArraySum(List<Integer> ar) {
        // Write your code here
        int sum = 0;
        for (Integer item : ar) {
            sum += item;
        }
        return sum;
    }

    public static int simpleArraySum(int[] ar){
        int sum = 0;
        for (int item :
                ar) {
            sum += item;
        }
        return sum;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

        int arCount = sc.nextInt();
//        List<Integer> ar = Stream.of(bi.readLine().replaceAll("\\s+$", "").split(" "))
//                .map(Integer::parseInt)
//                .collect(toList());
        int[] ar = new int[arCount];

        for (int i = 0; i < arCount; i++) {
            ar[i] = sc.nextInt();
        }

        int results = Result.simpleArraySum(ar);
        System.out.println(results);

        sc.close();
        bi.close();
    }
}
