#ifndef AUXVARIABLESBLOCK_H
#define AUXVARIABLESBLOCK_H

#include "ParserBlock.h"

class AuxVariablesBlock: public ParserBlock
{
public:
  AuxVariablesBlock(const std::string & reg_id, const std::string & real_id, ParserBlock * parent, const GetPot & input_file);

  virtual void execute();
};

  

#endif //AUXVARIABLESBLOCK_H
