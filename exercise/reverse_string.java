
//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());

        while (t-- > 0) {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}
// } Driver Code Ends

// User function Template for Java

class Reverse {
    // Complete the function
    // str: input string
    public static String reverseWord(String str) {

        String str1 = "";
        for (int k = str.length()-1; k >=0; k--) {
            str1 += str.charAt(k);
        }

        return str1;
        // Reverse the string str
    }
}