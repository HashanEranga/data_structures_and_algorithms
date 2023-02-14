package com.hashan.algorithms.diagonaldifference;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.IntStream;
import java.util.stream.Stream;

import static java.lang.Math.abs;
import static java.util.stream.Collectors.toList;

class Result{
    public static int diagonalDifference(List<List<Integer>> arr){
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += (arr.get(i).get(i) - arr.get(i).get(arr.size()-i-1));
        }
        return abs(sum);
    }
}

public class Solution {
    public static void main(String[] args) throws Exception {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bi.readLine().trim());

        List<List<Integer>> arr = new ArrayList<>();

        IntStream.range(0, n).forEach(i -> {
            try{
                arr.add(Stream.of(bi.readLine().replaceAll("\\s+$","").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList()));
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        });

        int result = Result.diagonalDifference(arr);
        System.out.println(result);
    }
}
