/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author MF
 */
public class student extends tefa {

    double study_level;
    String specialaization;
    double GPA;

    public student() {

    }

    public student(double st, String sp, double gpa, String n, int a, String ad, String nat) {
        super(n, a, ad, nat);
        study_level = st;
        specialaization = sp;
        GPA = gpa;

    }

    public void setstudy_level(double st) {
        study_level = st;
    }

    public void setspecialaization(String sp) {
        specialaization = sp;
    }

    public void setGPA(double gpa) {
        GPA = gpa;
    }

    public double get_study_level() {
        return study_level;
    }

    public String get_specialaization() {
        return specialaization;
    }

    public double get_GPA() {
        return GPA;
    }

}
