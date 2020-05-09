package main;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.mysql.jdbc.Connection;
import com.mysql.jdbc.Statement;

public class DBConn {
	
	Connection conn = null;
	
	private final String ip;
	private final String dbname;
	private final String user;
	private final String pwd;
	
	private final int port = 3306;	
	private static final String driver = "com.mysql.jdbc.Driver";		
	public void  connect(){
		try {
			Class.forName(driver);
			String url = "jdbc:mysql://" + ip + ":" + port +"/" + dbname;
			conn = (Connection) DriverManager.getConnection(url, user, pwd);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	// String str = "select * from userpasswd_tbl;"
	public DBConn(String i, String d, String u, String p){ip = i; dbname = d; user = u; pwd = p;}	
	Connection getConnection(){return conn;}
	public boolean isConnected() {return null != conn;}
	
    public void query(String sql) {
    	if(null == conn)
    		return;
        try {  
        	Statement stmt = (Statement) conn.createStatement();
        	ResultSet rs = stmt.executeQuery(sql);
        	while (rs.next()) {
        		System.out.println(rs.getString(1) + "\t" + rs.getString(2) + "\t" + rs.getString(3));
            }
        	stmt.close();
        }
        catch(Exception e){e.printStackTrace();}     
    } 
    
    public int update(String sql)
    {
    	if(null == conn)
    		return 0;
    	
    	int ret = 0;
    	try
    	{
    		Statement stmt = (Statement) conn.createStatement();
    		ret =  stmt.executeUpdate(sql);
    		stmt.close();
    	}
    	catch(Exception e)
    	{
    		e.printStackTrace();
    	}
    	
    	return ret;
    }
    
	public void close() {
		try {
			this.conn.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}
	
	static void testJDBC() // java DB connector
	{
		DBConn dc = new DBConn("127.0.0.1", "mydata", "root", "123456");
		dc.connect();
		
		dc.query("select * from userpasswd_tbl");
		dc.close();
	}
	
	public static void main(String[] args) {
		testJDBC();
		//RedisConn.testRedis();
	}
	

}
