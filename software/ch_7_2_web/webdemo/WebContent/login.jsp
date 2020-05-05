<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Cognitive Lab</title>
</head>
<body>

<form method="POST" action='Login.action' >
  <table>
    <tr>
      <th align="right">用户名:</th>
      <td align="left"><input type="text" name="username"></td>
    </tr>
    <tr>
      <th align="right">密码</th>
      <td align="left"><input type="password" name="passwd"></td>
    </tr>
    <tr>
      <td align="right"><input type="submit" value="登录"></td>
      <td align="left"><input type="reset" value="重置"></td>
    </tr>
  </table>
</form>

</body>
</html>