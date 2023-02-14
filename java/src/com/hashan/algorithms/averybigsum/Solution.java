package com.hashan.algorithms.averybigsum;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

class Result {
    public static long aVeryBigSum(List<Long> ar){
        long sum = 0;
        for (long item :
                ar) {
            sum+=item;
        }
        return sum;
    }
}

public class Solution {

    public static void main(String[] args) throws Exception {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

        int arCount = Integer.parseInt(bi.readLine().trim());
        List<Long> ar = Stream.of(bi.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Long::parseLong)
                .collect(Collectors.toList());

        long results = Result.aVeryBigSum(ar);
        System.out.println(results);
    }
}
