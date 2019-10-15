package com.company;

import java.util.Random;

public class Main {

    public static void main(String[] args) {

        Random rand = new Random();

        int rand_int1 = rand.nextInt(10);

        System.out.println("This number was randomly selected from 0 - 9: " + rand_int1);
    }
}
