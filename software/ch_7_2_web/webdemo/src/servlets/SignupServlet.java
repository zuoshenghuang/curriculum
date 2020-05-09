package servlets;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(name="Signup",urlPatterns={"/Signup.action"})
public class SignupServlet extends HttpServlet {
	private static final long serialVersionUID = -1L;
	
	
	
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		System.out.println("GGGGGGGGGGGGGGGGG");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String name = request.getParameter("username");
		String pass = request.getParameter("passwd");
		String pass2 = request.getParameter("passwd2");
		
		System.out.println(name + "\t" + pass + "\t" + pass2);
		
		System.out.println("PPPPPPPPPPPPPPPPPPPP");
		
	}
	

}