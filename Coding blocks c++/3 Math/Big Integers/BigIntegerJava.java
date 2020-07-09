import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class BigIntegerJava
{
    public static void main(String args[])throws IOException
    {
        BigInteger b=new BigInteger("1");
        for(int i=1;i<100;i++)
        b=b.multiply(BigInteger.valueOf(i));
        System.out.print(b);
    }
}