/* -----------------------------------------------------------------------------
 * Rule_dcontent.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_dcontent_hpp
#define Rule_dcontent_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_dcontent : public Rule
{
public:
  Rule_dcontent(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_dcontent(const Rule_dcontent& rule);

  Rule_dcontent& operator=(const Rule_dcontent& rule);

  const Rule_dcontent* clone(void) const;

  static const Rule_dcontent* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
