#ifndef QUEUETP_H_
#define QUEUETP_H_
template <typename T>
class QueueTP
{
private:
	enum {COUNT = 10};
	struct Node
	{
		T item_;
		Node *next_;
	};
	Node *front_;
	Node *rear_;
	int items_;
	int count_;
public:
	QueueTP(int items = COUNT);
	~QueueTP();
	bool isempty() const { return items_ == 0; }
	bool isfull() const { return items_ == count_; }
	int queuecount() const { return items; }
	bool push(const T & item);
	bool pop(T & item);
};

template <typename T>
QueueTP<T>::QueueTP(int count) :count_(count)
{
	front_ = rear_ = nullptr;
	items_ = 0;
}
template <typename T>
QueueTP<T>::~QueueTP()
{ 
	Node *tmp;
	while(front_ != NULL)
	{
		tmp = front_;
		front_ = front_->next_;
		delete[] tmp;
	}
}

template <typename T>
bool QueueTP<T>::push(const T & item)
{
	if (isfull())
		return false;
	else
	{
		Node *tmp = new Node;
		if (isempty())
		{
			tmp->item_ = item;
			tmp->next_ = nullptr;
			front_ = tmp;
			rear_ = tmp;
		}
		else
		{
			tmp->item_ = item;
			tmp->next_ = nullptr;
			rear_->next_ = tmp;
			rear_ = tmp;
		}
		items_++;
		return true;
	}
}
template<typename T>
bool QueueTP<T>::pop(T & item)
{
	if (isempty())
		return false;
	else
	{
		Node *tmp;
		item = front_->item_;
		tmp = front_;
		front_ = tmp->next_;
		delete tmp;
		items_--;
		return true;
	}
}
#endif