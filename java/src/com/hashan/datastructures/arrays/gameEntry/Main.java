package com.hashan.datastructures.arrays.gameEntry;

public class Main {
    public static void main(String[] args) {
        GameEntry g1 = new GameEntry("Hashan", 100);
        GameEntry g2 = new GameEntry("Eranga", 120);
        GameEntry g3 = new GameEntry("Perera", 90);
        GameEntry g4 = new GameEntry("Ishini", 200);
        GameEntry g5 = new GameEntry("Amasha", 110);
        GameEntry g6 = new GameEntry("Amali", 180);

        ScoreBoard sb = new ScoreBoard(4);

        sb.add(g1);
        sb.add(g2);
        sb.add(g3);
        sb.add(g4);
        sb.add(g5);
        sb.add(g6);
        GameEntry gn = sb.remove(1);

        for (int i = 0; i < sb.getScoreList().length; i++) {
            if(sb.getScoreList()[i] != null)
                System.out.println(sb.getScoreList()[i].getName() + " : " + sb.getScoreList()[i].getScore());
        }

        System.out.println(gn.getName() + " : " + gn.getScore());
    }
}
