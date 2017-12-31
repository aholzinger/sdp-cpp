/* -----------------------------------------------------------------------------
 * Rule_FQDN.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_FQDN_hpp
#define Rule_FQDN_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_FQDN : public Rule
{
public:
  Rule_FQDN(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_FQDN(const Rule_FQDN& rule);

  Rule_FQDN& operator=(const Rule_FQDN& rule);

  const Rule_FQDN* clone(void) const;

  static const Rule_FQDN* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
