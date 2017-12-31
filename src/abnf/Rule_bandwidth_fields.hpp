/* -----------------------------------------------------------------------------
 * Rule_bandwidth_fields.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_bandwidth_fields_hpp
#define Rule_bandwidth_fields_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_bandwidth_fields : public Rule
{
public:
  Rule_bandwidth_fields(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_bandwidth_fields(const Rule_bandwidth_fields& rule);

  Rule_bandwidth_fields& operator=(const Rule_bandwidth_fields& rule);

  const Rule_bandwidth_fields* clone(void) const;

  static const Rule_bandwidth_fields* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
