#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define ll long long
#define ull unsigned long long
#define readi(x) int x; cin>>x
#define readll(x) ll x; cin>>x
#define reads(s) string s; cin>>s
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define all(x) (x).begin(), (x).end()
#define vprint(arr) for(auto &i:arr) cout<<i<<" "
#define print(num) cout<<num<<"\n";
#define N 1e6
#define mod 1e9+7
#define inf (1LL<<60)
#define vll vector<ll >
#define vi vector<int >
#define vii vector<vi >
#define vb vector<bool >
#define pb push_back

class Node {
public:
	int data;
	Node *next;
	Node(int data) {
		this->data=data;
		next=NULL;
	}
};

class print {
protected:
	void printDLL(Node *head) {
		Node* temp=head;
		cout<<head->data<<' ';
		head=head->next;
		while(head!=NULL && head!=temp) {
			cout<<head->data<<' ';
			head=head->next;
		}
	}
};

class DLL : protected print {
private:
	int n;
	Node *head=NULL,*tail=NULL;
	void Create() {
		for (int i = 0; i < n; ++i) {
			int data; cin>>data;
			Node *newNode=new Node(data);
            if(head==NULL) {
                head=newNode;
                tail=head;
            }
            else {
                tail->next=newNode;
                tail=tail->next;
            }
		}
		tail->next=head;
	}
public:
	DLL(int n) : n(n) { 
		Create();
		printDLL(head);
	}
};

int main() {
	fast_io;
	DLL ob(5);
	return 0;
}
