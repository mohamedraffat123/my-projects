/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/UnitTests/EmptyTestNGTest.java to edit this template
 */
package com.mycompany.projects;

import static org.testng.Assert.*;

/**
 *
 * @author MF
 */
public class jobNGTest {
    
    public jobNGTest() {
    }

    @org.testng.annotations.BeforeClass
    public static void setUpClass() throws Exception {
    }

    @org.testng.annotations.AfterClass
    public static void tearDownClass() throws Exception {
    }

    @org.testng.annotations.BeforeMethod
    public void setUpMethod() throws Exception {
    }

    @org.testng.annotations.AfterMethod
    public void tearDownMethod() throws Exception {
    }

    /**
     * Test of set_name method, of class job.
     */
    @org.testng.annotations.Test
    public void testSet_name() {
        System.out.println("set_name");
        String n = "";
        job instance = new job();
        instance.set_name(n);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of set_id method, of class job.
     */
    @org.testng.annotations.Test
    public void testSet_id() {
        System.out.println("set_id");
        int x = 0;
        job instance = new job();
        instance.set_id(x);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of get_id method, of class job.
     */
    @org.testng.annotations.Test
    public void testGet_id() {
        System.out.println("get_id");
        job instance = new job();
        int expResult = 0;
        int result = instance.get_id();
        assertEquals(result, expResult);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }
    
}
