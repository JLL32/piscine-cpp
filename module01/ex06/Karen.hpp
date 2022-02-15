//
// Created by Abdeljalil El hachimi on 2/15/22.
//

#ifndef EX05_KAREN_HPP
#define EX05_KAREN_HPP

#include "string"

class Karen {
public:
  void complain(std::string level);
  static int level_to_index(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void nothing(void);
};

#endif // EX05_KAREN_HPP
