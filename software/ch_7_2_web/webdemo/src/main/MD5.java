package main;

import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

import sun.misc.BASE64Encoder;

public class MD5 {
	
	public static String toBase64MD5(String text)
    { 
		BASE64Encoder base64 = new BASE64Encoder();
		return base64.encode(MD5.digest(text.getBytes()));
    }
	
    public static byte[] digest(byte[] message) {
		try {
			return MessageDigest.getInstance("MD5").digest(message);
		} catch (NoSuchAlgorithmException e) {
		}
		return null;
	}
    
    public static void main(String argv[])
    {
    	String name = "test the web security by md5";
    	
    	System.out.println(toBase64MD5(name));
    }
}
