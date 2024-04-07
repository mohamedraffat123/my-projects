/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tree;

/**
 *
 * @author MF
 */
public class binary_search_tree {

    Snode root;

    public Snode search(int key) {
        Snode current = root;
        while (current.data != key) {
            if (key < current.data) {
                current = current.left;
            } else {
                current = current.right;
            }
            if (current == null) {
                return null;
            }
        }
        return current;
    }

    public void insert(int key) {
        Snode newlink = new Snode(key);
        if (root == null) {
            root = newlink;
        } else {
            Snode parent;
            Snode current = root;
            while (true) {
                parent = current;
                if (key < current.data) {
                    current = current.left;
                    if (current == null) {
                        parent.left = current;
                        return;
                    }
                } else {
                    current = current.right;
                    if (current == null) {
                        parent.right = current;
                    }
                }
            }
        }
    }

    public void preorder(Snode newlink) {
        System.out.println(newlink.data + " ");
        preorder(newlink.left);
        preorder(newlink.right);
    }

    public void inorder(Snode newlink) {
        inorder(newlink.left);
        System.out.println(newlink.data + " ");
        inorder(newlink.right);
    }

    public void postorder(Snode newlink) {
        postorder(newlink.left);
        postorder(newlink.left);
        System.out.println(newlink.data + " ");
    }

    public Snode maximum() {
        Snode temp = root;
        Snode last = null;
        while (temp != null) {
            last = temp;
            temp = temp.right;
        }
        return last;
    }

    public Snode minimum() {
        Snode temp = root;
        Snode last = null;
        while (temp != null) {
            last = temp;
            temp = temp.left;
        }
        return last;
    }
    
    public void count_subtree(){
       Snode temp=root;
       
    }
}
