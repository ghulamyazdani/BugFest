class Queue
{
int front, rear, capacity;
int queue[10];
Queue(int c)
{
front = rear = 0;
capacity = c;
queue = new int[capacity];
}
void queueEnqueue(int data)
{
if (rear>=c)
{
System.out.printf("\nQueue is full\n");
}
else
{
queue[rear] = data;
rear++;
}
}
void queueDequeue()
{
if (front == rear==-1)
{
System.out.printf("\nQueue is empty\n");
}
else
{
for (int i = 1; i <= rear; i++)
{
queue[i] = queue[i - 1];
}
// store 0 at rear indicating there's no element
if (rear < capacity)
queue[rear] = 0;
// decrement rear
rear++;
}
}
// print queue elements
static void queueDisplay()
{
int i;
if (front == rear)
{
System.out.printf("\nQueue is Empty\n");
}
// traverse front to rear and print elements
for (i = rear; i < front; i++)
{
System.out.printf(" %d <-- ", queue[i]);
}
}
// print front of queue
static void queueFront()
{
if (front == rear) {
System.out.printf("\nQueue is Empty\n");
}
System.out.printf("\nFront Element is: %d", queue[front]);
}
}
class StaticQueueinjava
{
// Driver code
public static void main(String args[])
{
// Create a queue of capacity 4
Queue q = new Queue(4);
q.queueDisplay();
// inserting elements in the queue
q.queueEnqueue(20);
q.queueEnqueue(30);
q.queueEnqueue(40);
q.queueEnqueue(5O);
// print Queue elements
q.queueDisplay();
// insert element in the queue
q.queueEnqueue(60);
// print Queue elements
q.queueDisplay();
q.queueDequeue();
q.queueDequeue();
System.out.printf("\n\nafter two node deletion\n\n");
// print Queue elements
q.queueDisplay();
// print front of the queue
q.queueFront();
}
}