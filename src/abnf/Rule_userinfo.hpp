/* -----------------------------------------------------------------------------
 * Rule_userinfo.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_userinfo_hpp
#define Rule_userinfo_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_userinfo : public Rule
{
public:
  Rule_userinfo(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_userinfo(const Rule_userinfo& rule);

  Rule_userinfo& operator=(const Rule_userinfo& rule);

  const Rule_userinfo* clone(void) const;

  static const Rule_userinfo* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
