package com.hashan.datastructures.arrays.gameEntry;

public class GameEntry {
    private final String name;
    private final int score;

    public GameEntry(String Name, int Score){
        this.name = Name;
        this.score = Score;
    }

    public String getName() {
        return name;
    }

    public int getScore(){
        return score;
    }
}
