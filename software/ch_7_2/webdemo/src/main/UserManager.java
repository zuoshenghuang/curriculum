package main;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

public class UserManager {
	
	private static UserManager instance = new UserManager();

	private Properties props = new Properties();
	
	public static UserManager getInstance() {return instance;}
	/*
	public boolean load(){
		try {
			FileInputStream iFile = new FileInputStream(System.getProperty("catalina.base") + "/myconf/users.props");
			props.clear();
			props.load(iFile);
			iFile.close();
			return true;
			
		} catch (IOException e) {
			e.printStackTrace();
			return false;
		}
	}
	*/
	public boolean checkUserPassword(String u, String p)
	{
		/*
		String pass = props.getProperty(u);
		
		if(pass == null)
			return false;
		
		if(! p.equals(pass))
			return false;
		*/
		return false;
	}	
}
