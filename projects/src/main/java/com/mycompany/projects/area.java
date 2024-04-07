/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.projects;

/**
 *
 * @author MF
 */
public class area {
    private int height;
    private int width;
    
    public area(){
        height=0;
        width=0;
    }   

    public int getHeight() {
        return height;
    }

    public int getWidth() {
        return width;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setWidth(int width) {
        this.width = width;
    }
    public String toString(){
        return "area is: "+(width *height);
    }
    
}
