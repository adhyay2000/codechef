#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    int val;
    struct Node* left,*right;
};
Node* newNode(int key){
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right  = NULL;
    return temp;
}
void create_node(vector<int> &parent,int i,vector<struct Node*> &created,struct Node** root){
    if(created[i]!=NULL) return;
    created[i]=newNode(i);
    if(parent[i]==-1){
        *root = created[i];
        return;
    }
    if(created[parent[i]]==NULL)
        create_node(parent,parent[i],created,root);
    Node* p = created[parent[i]];
    if(p->left==NULL){
        p->left = created[i];
    }else{
        p->right = created[i];
    }
}
Node* create_tree(vector<int> &parent){
    vector<struct Node*> created(parent.size(),NULL);
    Node* root=NULL;
    for(int i=0;i<parent.size();i++){
        create_node(parent,i,created,&root);
    }
    return root;
}
int find_mex(set<int> st){
    int mex=0;
    while(st.find(mex)!=st.end()){
        mex++;
    }
    return mex;
}
set<int> solve(Node* root,int &count,int &sum){
    set<int> st;
    if(root->left!=NULL){
        set<int> output(solve(root->left,count,sum));
        st.insert(output.begin(),output.end());
    }
    if(root->right!=NULL) {
        set<int> output(solve(root->right,count,sum));
        st.insert(output.begin(),output.end());
    }
    root->val = count;
    st.insert(count);
    count++;
    sum+=find_mex(st);
    return st;
}
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->key<<endl;
    inorder(root->right);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        arr[0]=-1;
        for(int i=1;i<n;i++){
            cin>>arr[i];
            arr[i]--;
        }
        Node* root = create_tree(arr);
        // inorder(root);
        int count=0;
        int sum=0;
        solve(root,count,sum);
        cout<<sum<<endl;
    }
}