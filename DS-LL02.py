class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next
 
 
def List(head):
 
    ptr = head
    while ptr:
        print(ptr.data, end='  ')
        ptr = ptr.next
 
    print('None')
 

def append(head, key):
 
    current = head
    node = Node(key)
 
    if current is None:
        head = node
 
    else:
        while current.next:
            current = current.next
        current.next = node
 
    return head
 
 
if __name__ == '__main__':
 
    keys = [1, 5, 7, 9]
 
    head = None
    for key in keys:
        head = append(head, key)
    print("linked list is:")
    List(head)
 
