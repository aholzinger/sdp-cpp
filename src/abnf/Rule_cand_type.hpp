/* -----------------------------------------------------------------------------
 * Rule_cand_type.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_cand_type_hpp
#define Rule_cand_type_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_cand_type : public Rule
{
public:
  Rule_cand_type(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_cand_type(const Rule_cand_type& rule);

  Rule_cand_type& operator=(const Rule_cand_type& rule);

  const Rule_cand_type* clone(void) const;

  static const Rule_cand_type* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
