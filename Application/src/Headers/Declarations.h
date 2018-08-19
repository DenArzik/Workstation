#pragma once

template<typename Item>
using ThreadItemMap = std::map<std::shared_ptr<QThread>, std::shared_ptr<Item>>;

typedef unsigned __int8 tiny_uint;