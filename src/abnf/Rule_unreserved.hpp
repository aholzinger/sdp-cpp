/* -----------------------------------------------------------------------------
 * Rule_unreserved.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_unreserved_hpp
#define Rule_unreserved_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_unreserved : public Rule
{
public:
  Rule_unreserved(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_unreserved(const Rule_unreserved& rule);

  Rule_unreserved& operator=(const Rule_unreserved& rule);

  const Rule_unreserved* clone(void) const;

  static const Rule_unreserved* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
