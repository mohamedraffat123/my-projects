/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tree;

/**
 *
 * @author MF
 */
public class binary_tree {

    private Snode root;

    public void insert(int type) {
        Snode node = new Snode(type);
        Snode current = root;
        Snode parent = root;
        if (root == null) {
            root = node;
        } else {
            while (true) {
                parent = current;
                if (type > current.data) {
                    current = current.right;
                    if (current == null) {
                        parent.right = node;
                        break;
                    }
                } else {
                    current = current.left;
                    if (current == null) {
                        parent.left = node;
                        break;
                    }
                }

            }
        }

    }

    public boolean search(int n) {
        Snode node = root;
        while (node.data != n) {
            if (n > node.data) {
                node = node.right;
            } else {
                node = node.left;
            }
            if (node == null) {
                return false;
            }
        }
        return true;
    }
}
