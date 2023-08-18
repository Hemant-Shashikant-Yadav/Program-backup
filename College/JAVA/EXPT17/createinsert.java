import java.sql.*;

public class createinsert {

	public static void main(String[] args) {

		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");

			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe", "system", "123");
			System.out.println("database connected");

			Statement stmt = con.createStatement();

			stmt.executeUpdate("Create table student1(roll_no number(4),name varchar2(50),class varchar2(5) check(class in('FY','SY','TY','BTech')),score number(5) check(score>40 AND score<100),gender varchar(2) check(gender in('M','F'))");
			
			System.out.println("table created");

			con.close();
		} catch (Exception e) {
			System.out.println(e);
		}

	}

}