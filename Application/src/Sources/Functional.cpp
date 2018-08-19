#include "Functional.h"

template<typename Item, typename Container>
void thread_item_container_inserter(Container &container)
{
	std::shared_ptr<QThread> new_thread(new QThread);
	std::shared_ptr<Item> new_item(new Item);
	new_item.get()->moveToThread(new_thread.get());

	container.emplace(new_thread, new_item);
}