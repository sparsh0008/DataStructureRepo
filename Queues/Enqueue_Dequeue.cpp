//Queue using Array 

#include<iostream>
#include<string.h>
using namespace std;
int Dequeue(int arr[], int n, int item)
{
	int front, rear, i;

	front = 0;
	rear = n - 1;

	if (rear == front)
	{
		cout << "Queue is Empty";
		return 0;
	}
	else
	{
		front = front + 1;
		item = arr[front];
		if (rear == front)
		{
			front = rear = -1;
			return 0;
		}
	}
	cout << "\n\nThe Array is : ";
	for (i = front; i <= rear; i++)
	{
		cout << arr[i] << " ";
	}
}
int Enqueue(int arr[], int n, int item)
{
	int i, front, rear;
	cout << "We are inside Enqueue function : ";
	for (i = 0; i < n - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n - 1];
	cout << "\nItem from the main is : " << item << "\nLast element of array is :" << arr[n - 1];


	front = 0;
	rear = n - 1;

	if (rear == (n - 1))
	{
		cout << "\n\nQueue is full ";
		return 0;
	}
	else
	{
		rear = rear + 1;
		arr[rear] = item;
		return 0;
	}
	cout << "\n\nThe Array is : ";
	for (i = front; i <= rear; i++)
	{
		cout << arr[i] << " ";
	}

}
int main()
{
	int arr[10], n, i, item, number, front, rear;
	cout << "Enter the size of array : ";
	cin >> n;

	cout << "Enter the elements of array : \n";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Array : ";
	for (i = 0; i < n - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n - 1];

	cout << "\n\nPress Enter To Veiw The Option To Perform Action On Array";
	cin.get();
	cin.get();
	system("cls");
	cout << "1. Enqueue\n2. Dequeue";
	cout << "\nChoose a option to perform a function : ";
	cin >> number;

	if (number == 1)
	{
		system("cls");
		cout << "Enqueue\n\n";
		cout << "\nEnter the item u want to enter in the queue : ";
		cin >> item;
		Enqueue(arr, n, item);
	}
	else
	{
		system("cls");
		cout << "Dequeue\n";
		Dequeue(arr, n, item);
	}
}