/* -----------------------------------------------------------------------------
 * Rule_atom.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_atom_hpp
#define Rule_atom_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_atom : public Rule
{
public:
  Rule_atom(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_atom(const Rule_atom& rule);

  Rule_atom& operator=(const Rule_atom& rule);

  const Rule_atom* clone(void) const;

  static const Rule_atom* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
