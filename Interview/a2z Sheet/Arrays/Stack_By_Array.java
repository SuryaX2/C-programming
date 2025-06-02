import java.util.Scanner;

public class Stack_By_Array {
    int[] stack;
    int top, size;

    Stack_By_Array(int size) {
        this.size = size;
        stack = new int[size];
        top = -1;
    }

    public void push(int n) {
        if (top == size - 1) {
            System.out.println("Stack Overflow");
        } else {
            stack[++top] = n;
            System.out.println("Pushed: " + n);
        }
    }

    public void pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
        } else {
            System.out.println("Popped: " + stack[top--]);
        }
    }

    public void peek() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.println("Top element: " + stack[top]);
        }
    }

    public void display() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.print("Stack elements: ");
            for (int i = 0; i <= top; i++) {
                System.out.print(stack[i] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack_By_Array s = new Stack_By_Array(5);
        s.push(10);
        s.push(20);
        s.push(30);
        s.display();
        s.pop();
        s.peek();
        s.display();
        sc.close();
    }
}