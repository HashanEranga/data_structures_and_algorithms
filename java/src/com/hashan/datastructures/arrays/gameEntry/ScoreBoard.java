package com.hashan.datastructures.arrays.gameEntry;

public class ScoreBoard {
    private int numEntries = 0;
    public GameEntry[] scoreList;

    public ScoreBoard(int capacity){
        scoreList = new GameEntry[capacity];
    }

    public GameEntry[] getScoreList() {
        return scoreList;
    }

    public void add(GameEntry entry){
        // check first entry
        if(numEntries == 0){
            scoreList[numEntries] = entry;
            numEntries++;
        }
        else{
            // not first entry not score list filled
            if(scoreList.length > numEntries){
                int j = numEntries;
                while(j > 0 && entry.getScore() < scoreList[j-1].getScore()){
                    scoreList[j] = scoreList[j-1];
                    j--;
                }
                scoreList[j] = entry;
                if(numEntries <= scoreList.length)
                   numEntries++;
            }
            // not first entry but all score list is filled
            else{
                int j = 0;
                while(j < numEntries && entry.getScore() > scoreList[j].getScore()){
                    scoreList[j] = scoreList[j+1];
                    j++;
                }
                scoreList[j-1] = entry;
            }
        }
    }

    public GameEntry remove(int i){
        GameEntry temp = scoreList[i];
        int j = i;
        while(j < numEntries-1){
            scoreList[j] = scoreList[j+1];
            j++;
        }
        scoreList[j] = null;
        numEntries--;
        return temp;
    }
}
