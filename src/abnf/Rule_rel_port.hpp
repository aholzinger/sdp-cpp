/* -----------------------------------------------------------------------------
 * Rule_rel_port.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_rel_port_hpp
#define Rule_rel_port_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_rel_port : public Rule
{
public:
  Rule_rel_port(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_rel_port(const Rule_rel_port& rule);

  Rule_rel_port& operator=(const Rule_rel_port& rule);

  const Rule_rel_port* clone(void) const;

  static const Rule_rel_port* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */