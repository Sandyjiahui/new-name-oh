package Fuli;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;


public class TestSQL {
    
	public static Connection getConnection() {
		Connection conn=null;
		try {
			Class.forName("com.mysql.jdbc.Driver");
			conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","");
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return conn;
		
	}
	
	public static void serect(){
		Connection conn=getConnection();
		ResultSet rs=null;
		try {
			String sql="SELECT * FROM student";
			Statement st=conn.createStatement();
			rs=st.executeQuery(sql);
			while(rs.next()){
		        System.out.print(rs.getString("sno")+" ");
		        System.out.print(rs.getString("name")+"     ");
		        }
			conn.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void insert(){
		Connection conn=getConnection();
		try {
			String sql="insert into student(sno,name)"+
		"values('4','zhijie')";
			Statement st=conn.createStatement();
			int count=st.executeUpdate(sql);
			System.out.println("向用户插入了"+count+"条记录");
			conn.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	
	
	
	
	public static void update(){
		Connection conn=getConnection();
		try {
			String sql="update student set name='lin' where name='zhijie' ";
			Statement st=conn.createStatement();
			int count=st.executeUpdate(sql);
			System.out.println("向用户更新了"+count+"条记录");
			conn.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	
     public static void delete(){
    	 Connection conn=getConnection();
 		try {
 			String sql="delete from student where name='lin' ";
 			Statement st=conn.createStatement();
 			int count=st.executeUpdate(sql);
 			System.out.println("向用户删除了"+count+"条记录");
 			conn.close();
 		} catch (Exception e) {
 			e.printStackTrace();
 		}
	}
	public static void main(String[] args) {
		serect();
	    //insert();
		//update();
		//delete();
	}
	
}
