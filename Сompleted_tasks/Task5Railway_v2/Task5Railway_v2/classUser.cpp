#include "classUser.h"
namespace Task5Railwayv2 {
	_User::_User() {
		UserLogin = "";
		UserPassword = "";
	};

	_User::_User(String^ _login, String^ _password) {
		UserLogin = _login;
		UserPassword = _password;
	};

	_User::_User(_User^ user) {
		UserLogin = user->UserLogin;
		UserPassword = user->UserPassword;
	}

	_User::~_User() {}

	String^ _User::getLogin() { return UserLogin; }
	String^ _User::getPassword() { return UserPassword; }
}