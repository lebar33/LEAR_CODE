#include <iostream>
#include <string> 
#include <sstream> 
#include <algorithm> 
#include <map>
#include <vector>
using namespace std;
string tach(string a){
	string ans = "";
	stringstream ss(a);
	string tmp;
	while(ss >> tmp){
		ans+=toupper(tmp[0]); 
	}
	return ans; 
}
string tachten(string a){
	stringstream ss(a);
	string tmp;
	while(ss >> tmp){
	}
	return tmp; 
} 
class GiangVien{
	private:
	    string id, name, bomon;
		static int cnt;
	public:
		GiangVien(){
			id = name = bomon = "";
		}
		string getName(){ return name;}
	    string getBomon(){ return bomon;}
			
	    friend istream& operator >> (istream &in, GiangVien &a){
	    	cnt++;
			string tmp = to_string(cnt);
			a.id = "GV" + string(2 - tmp.size(), '0') + tmp;
			getline(in, a.name); 
			getline(in, a.bomon);
			a.bomon = tach(a.bomon);
			return in; 
		} 
		friend ostream& operator << (ostream &out, GiangVien a){
			out << a.id << " " << a.name << " " << a.bomon; 
			return out; 
		}
		bool operator < (GiangVien a){
			string s1 =  tachten(this->name), s2 = tachten(a.name); 
			if(s1 != s2) return s1 < s2;
			return this->id < a.id; 
		} 
		
		
}; 
int GiangVien::cnt = 0; 
int main(){
	map<string, vector<GiangVien>> mp;
	int n; cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		GiangVien x;  cin >> x;
		mp[x.getBomon()].push_back(x);
	}
	int q; cin >> q;
	cin.ignore(); 
	while(q--){
		string s; getline(cin, s);	 
		cout << "DANH SACH GIANG VIEN BO MON " << tach(s) << ":" << endl;
		for(auto x : mp[tach(s)]){
			cout << x << endl;
		}
	}
	return 0;
}
