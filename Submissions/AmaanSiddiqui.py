class Queue():
    def __init__(self, queue, size):
        self.queue = list(queue)
        self.size = int(size)
 
    def enqueue(self, item):
        '''This function adds an item to the rear end of the queue '''
 
        if self.isFull() == True:
            print('Queue is Full!')
        else:
            self.queue.append(item)
 
    def dequeue(self):
        ''' This function removes an item from the front end of the queue '''
 
        if self.isEmpty() == True :
            print('Queue is Empty!')
        else:
            return self.queue.pop(0)
 
    def isEmpty(self):
        ''' This function checks if the queue is empty '''
        return self.queue == []
 
    def isFull(self):
        ''' This function checks if the queue is full '''
        return self.queue == self.size
 
    def peek(self):
        ''' This function helps to see the first element at the front end of the queue '''
        if(self.isEmpty() == True):
            print('Queue is Empty!')
        else:
            return self.queue[0]
 
 
if __name__ == '__main__':
    myQueue = Queue([],0)
    myQueue.enqueue(4)
    myQueue.enqueue(5)
    myQueue.enqueue(6)
 
    print(myQueue)
 
    myQueue.enqueue(1)
    myQueue.enqueue(2)
    myQueue.enqueue(3)
 
    print(myQueue)
 
    myQueue.dequeue()
 
    print(myQueue)
 
# It's not perfect but it's my first shot at any kind of coding challenge. 