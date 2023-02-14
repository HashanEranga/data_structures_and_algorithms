package com.hashan.algorithms.comparethetriplets;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

import static java.util.stream.Collectors.toList;

class Result{
    public static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
        int scoreA = 0;
        int scoreB = 0;

        for (int i = 0; i < a.size(); i++) {
            if(a.get(i) > b.get(i)) scoreA++;
            else if(a.get(i) < b.get(i)) scoreB++;
        }

        List<Integer> results = new ArrayList<>();
        results.add(scoreA);
        results.add(scoreB);

        return results;
    }
}

public class Solution {
    public static void main(String[] args) throws Exception {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

        List<Integer> alice = Stream.of(bi.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        List<Integer> bob = Stream.of(bi.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        List<Integer> results = Result.compareTriplets(alice, bob);
        System.out.println(results);
        bi.close();
    }
}
