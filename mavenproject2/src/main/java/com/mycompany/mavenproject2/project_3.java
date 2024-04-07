/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject2;

/**
 *
 * @author MF
 */
import java.util.Scanner;
public class project_3 {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        System.out.println("pleaese enter the number of row");
        int[][] matrix1=new int[100][100];
        int[][] matrix2=new int[100][100];
        int[][] matrix3=new int[100][100];
        int b,c,s=0;
        b=input.nextInt();
         System.out.println("pleaese enter the number of column");
        c=input.nextInt();        
        for(int i=0;i<b;i++){
            for(int y=0;y<c;y++){
                System.out.println("enter the number"+ i +"and" +y);
               matrix1[i][y]=input.nextInt();
            }
        }
        System.out.println("enter the values of matrix 2");
        for(int o=0;o<b;o++){
            for(int u=0;u<c;u++){
                 System.out.println("enter the number"+ o +"and" +u);
                matrix2[o][u]=input.nextInt();
            }         
        }
         for(int p=0;p<b;p++){
            for(int t=0;t<c;t++){
                matrix3[p][t]=matrix1[p][t]+matrix2[p][t];
                 s+=matrix3[p][t];      
            }
         }
            for(int a=0;a<b;a++){
            for(int z=0;z<c;z++){
                System.out.print(matrix3[a][z]+"\t");
            }
            System.out.println();
            }
        System.out.println(" the sum of this matric is ====> \t5"+s);
    }
}
