package servlets;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import main.UserManager;
import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;

@WebServlet(name="Login",urlPatterns={"/Login.action"})
public class LoginServlet extends HttpServlet {
	private static Logger logger = LogManager.getLogger(LoginServlet.class);
	private static final long serialVersionUID = -1L;
	
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		return;
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		String name = request.getParameter("username");
		String pass = request.getParameter("passwd");
		System.out.println("====," + name + "\tpasswd:" + pass);
		/*	
		if(UserManager.getInstance().checkUserPassword(name, pass)) {
			System.out.println("=====================");
			request.getSession().setAttribute("user", name);
			request.getRequestDispatcher("/succ.jsp").forward(request,response);
			logger.info(name + ",login,success");
		}else {
			request.getSession().setAttribute("info", "用户名密码不匹配");
			request.getRequestDispatcher("/fail.jsp").forward(request,response);
			logger.info(name + ",login,failed");
		}
		*/
		
	}
}