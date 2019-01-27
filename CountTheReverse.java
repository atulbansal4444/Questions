
import java.util.*;
import java.lang.*;
import java.io.*;

class CountTheReverse {
	public static void main (String[] args) {
		//code
		
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n!=0)
		{
		    String str = new String();
		str = sc.nextLine();
		 if (str.length()%2 != 0) 
        {
            System.out.println(-1);
        }
        else
        {
		Stack<Character> st = new Stack<Character>();
		
		for(int i=0;i<str.length();i++)
		{
		    if(!st.empty() && str.charAt(i) == '}')
		    {
		        if (st.peek()=='{') 
                    st.pop(); 
                else
                    st.push(str.charAt(i));
		    }
		    else
		    {
		        st.push(str.charAt(i));
		    }
		}
		int x;
		x = st.size();
		int y = 0; 
        while (!st.empty() && st.peek() == '{') 
        { 
            st.pop(); 
            y++; 
        } 
		int b,a;
		a = x/2;
		b = a + (y%2);
		System.out.println(b);
		}
		n--;
		}
	}
}