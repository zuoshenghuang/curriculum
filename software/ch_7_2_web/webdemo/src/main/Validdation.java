package main;

import java.util.HashMap;
import java.util.Map;

public class Validdation {
	
	static Map<String, String>map = new HashMap<String, String>();
	static {
		map.put("admin", "adminpass");
		map.put("hzs", "hzspass");
	}
	
	public static boolean isValid(String u, String p) {
		String v = map.get(u);
		if(v == null)
			return false;
		
		return v.equals(p);
	}

}
