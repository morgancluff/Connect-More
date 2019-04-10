#ifndef AI_HPP
#define AI_HPP

#include "GameTree.hpp"

class AI {
private:
  static const bool HUMAN = false;
  static const bool AI = true;
  
  int maxDepth;
  TreeNode *gameTree;

  int minimax(TreeNode *T, int depth, bool player);
public:
  AI();
  ~AI();
  
  int getBestMove(GameState gs);
};

#endif
