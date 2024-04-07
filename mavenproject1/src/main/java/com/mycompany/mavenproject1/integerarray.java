/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author MF
 */
public class integerarray {

    private int arr[];

    public integerarray(int arr[]) {
        this.arr = arr;
    }

    public void duplicatearray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if (arr[i] == arr[j]) {
                    System.out.println(" the number is found duplicated is"+arr[j]);
                }

            }

        }
    }

    public int FindMax(int arr[]) {
        int b = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (b < arr[i]) {
                b = arr[i];
            }
        }
        return b;
    }

    public void printtheintegerarray() {
        int p = 0;
        int sum = 0;
        
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
            p++;
        }
        System.out.println("the number of the element is"+p);
        System.out.println("the average is "+((double)sum/p));
       int r= this.FindMax(arr);
        System.out.println(" the maximum element is"+r);
    }

}
