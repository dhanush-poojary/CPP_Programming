 #include<iostream>//Remove elements at even positions in a queue
 #include<queue>
 using namespace std;
void display(queue<int> &q){
 int n = q.size();//size of the queue
   for(int i=0;i<n;i++){
       cout<<q.front()<<endl;//print
       int x = q.front();//take the front element
       q.pop();//pop the front element
       q.push(x);//push it again at the end
   }
}
 int main(){
    queue<int> q;
    q.push(10);//inserting the elements
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);//it will print the queue

    int n = q.size();
    for(int i=0;i<n;i++){//here we are using i as a indexing or a even position
         int x = q.front();//we are popping all the elements and then
         q.pop();
         if(i%2 != 0) q.push(x);//inserting only the elements present at odd index
    }
    display(q);//it will print the queue
 }