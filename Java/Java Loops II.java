import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int res=0;
            for(int j=0;j<n;j++) {
                res=res+a+(int)(Math.pow(2, j)*b);
                System.out.print(res + " ");
                res=res-a;
            }
            System.out.println();
        }
        in.close();
    }
}

