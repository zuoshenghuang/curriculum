package main;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

public class UserManager {
	
	private static UserManager instance = new UserManager();

	private Properties props = new Properties();
	
	public static UserManager getInstance() {
		instance.load();
		return instance;
	}
	
	public boolean load(){
		try {
			//FileInputStream iFile = new FileInputStream(System.getProperty("catalina.base") + "/myconf/users.props");
			FileInputStream iFile = new FileInputStream("D:/myconf/users.props");
			props.clear();
			props.load(iFile);
			
			for(Object v : props.values())
			{
				System.out.println((String) v);
			}
			iFile.close();
			return true;
			
		} catch (IOException e) {
			e.printStackTrace();
			return false;
		}
	}
	
	public boolean checkUserPassword(String u, String p)
	{
		
		String pass = props.getProperty(u);
		
		if(pass == null)
			return false;
		
		System.out.println(u + "\t" + p);
		if(! p.equals(pass))
			return false;
		
		return true;
	}	
}
