#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class User {
	string username;
	string password;
public:
	void LoadInDataBase( string file) {
		ofstream out(file, ios_base::app);
		if (out.is_open()) {
			out << username << '\t' << password << endl;
		}
		out.close();
	}
	void SignUp(string set_username, string set_password) {
		username = set_username;
		password = set_password;
	}
	void SignIn(string *get_username, string *get_password) {
		
		if (*get_username == username) {
			if (*get_password == password) {
				cout << "You're enter" << endl;
			}
		}
		else {
			cout << "You don't have an account or you make a mistake" << endl;
			
		}
	}
	void ChangeUsernameInDB(string newUsername, string file) {
		
		string line;
		ifstream in(file);
		int position = 0;
		if (in.is_open()) {
			bool flag = false;
			while (getline(in, line, '\t')) {
				if (username == line) {
					position = in.tellg();
					flag = true;
					break;
				}
			}
		}
		in.close();
		ofstream out(file);
		if (out.is_open()) {
			out.seekp(position, ios_base::end);
			out << newUsername;
		}
		out.close();
		
	}
	
	void ChangePasswordInDB(string newPassword, string file) {
		
		string line;
		ifstream in(file);
		int position = 0;
		bool flag = false;
		if (in.is_open()) {
			while (getline(in, line, '\t')) {
				int i = 0;
				bool f = false;
				
				while (line[i] != '\n') {

					if (password[i] != line[i]) {
						f = false;
						break;
					}
					else {
						f = true;
						i++;
					}
				}
				if (f) {
					position = in.tellg();
					position += size(line);
					flag = true;
					break;
				}

			}
		}
		in.close();
		if (flag) {
			ofstream out(file, ios::app);
			if (out.is_open()) {
				out.seekp(position, ios_base::end);
				out << newPassword << endl;
			}
			out.close();
		}
	}
	void ChangeUsername(string newUsername) {
		cout << "Enter your old username" << endl;
		string timeUserName;
		cin >> timeUserName;
		if (username == timeUserName) {
			cout << "Enter your password" << endl;
			string PassWord;
			cin >> PassWord;
			if (password == PassWord) {
				username = newUsername;
				cout << "New Username set" << endl;

			}
		}
		else {
			cout << "Wrong data" << endl;

		}
	}

	void ChangePassword(string newPassword) {
		cout << "Enter your username" << endl;
		string timeUserName;
		cin >> timeUserName;
		if (username == timeUserName) {
			cout << "Enter your old password" << endl;
			string OldPassWord;
			cin >> OldPassWord;
			if (password == OldPassWord) {
				password = newPassword;
				cout << "New password set" << endl;				
			}
		}
		else {
			cout << "Wrong data" << endl;
		}
	}
};

int main() {
	
	
	
}