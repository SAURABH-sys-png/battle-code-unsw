#include "helper.hpp"
#include <functional>
#include <iostream>
#include <utility>
using u32 = unsigned int;
using u64 = unsigned long long;
#include <tuple>

// Mapping up the complete map
// getting to kknow the dimenasion of the map
// then there is map representatio

int main() {
  auto [ct, gm] = unswbc::init();
  auto my_board = std::make_from_tuple<Board>(gm.get_map_size());

  while (unswbc::update(ct, gm)) {
    // so implement the dijkstras algo to reach from current to the destination
    // ar max 9 iterations to reach form current to the dest

    unswbc::end_turn();
  }
  return 0;
}
