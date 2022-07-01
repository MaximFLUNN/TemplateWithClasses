using namespace System;
namespace Task5Railwayv2 {
	ref class _User
	{
	public:
		String^ UserLogin;
		String^ UserPassword;
		_User();
		_User(String^ _login, String^ _password);
		_User(_User^ user);
		~_User();

		String^ getLogin();
		String^ getPassword();

	private:

	};
}