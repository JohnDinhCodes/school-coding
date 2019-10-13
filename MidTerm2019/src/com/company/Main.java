package com.company;

import java.util.Scanner;
import java.util.Random;

public class Main {

    public static void main(String[] args) {

        String SEPARATOR = "******************************************************";

        System.out.println("1. Please write a JAVA program that prints out your address to the screen.\n");
        printAddress();

        System.out.println(SEPARATOR); //**********************************************

        System.out.println("2. Please write a JAVA program that asks the user to input an integer and a float and adds them together and prints them out to the screen.\n");
        doubleTypeCoercion();

        System.out.println(SEPARATOR); //**********************************************

        System.out.println("3. Please write a JAVA program that creates a random number from 1 to 20.\n");
        int MAX = 20;
        System.out.println("This is a randomly generated number from 1 - 20: " + generateRandomNumber(MAX));

        System.out.println(SEPARATOR); //**********************************************

        System.out.println("4. Please write a JAVA program that finds the smaller of the two integers input\n");

        System.out.println("This program finds the smaller number out of two numbers");
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your first number");
        int input1 = scanner.nextInt();

        scanner.nextLine();

        System.out.println("Enter your second number");
        int input2 = scanner.nextInt();

        if (input1 == input2) {
            System.out.println(input1 + " and " + input2 + " have the same value!");
        } else {
            System.out.println(returnSmaller(input1, input2) + " is the smaller number!");
        }
    }

    // 1. Please write a JAVA program that prints out your address to the screen.
    public static void printAddress() {
        System.out.println("1956 Hard Drive");
        System.out.println("Armonk, NY 10504");
    }

    // 2. Please write a JAVA program that asks the user to input an integer and a float and adds them together and prints them out to the screen.
    public static void doubleTypeCoercion() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Please enter an integer");
        int intInput = scanner.nextInt();

        scanner.nextLine();

        System.out.println("Please enter a float value");
        float floatInput = scanner.nextFloat();

        System.out.println(intInput + floatInput);
    }

    // 3. Please write a JAVA program that creates a random number from 1 to 20.
    public static int generateRandomNumber(int max) {
        Random rand = new Random();

        int randomInt = rand.nextInt(max) + 1; // adding 1 changes the range from (0 - [max - 1]) to (1 - max)

        return randomInt;
    }

    // 4. Please write a JAVA program that finds the smaller of the two integers input

    public static int returnSmaller(int input1, int input2) {
        return input1 > input2 ? input2 : input1; // Is input1 greater than input2? If so return input2, else return input 1
    }
}
