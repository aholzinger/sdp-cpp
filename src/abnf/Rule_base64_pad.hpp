/* -----------------------------------------------------------------------------
 * Rule_base64_pad.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_base64_pad_hpp
#define Rule_base64_pad_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_base64_pad : public Rule
{
public:
  Rule_base64_pad(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_base64_pad(const Rule_base64_pad& rule);

  Rule_base64_pad& operator=(const Rule_base64_pad& rule);

  const Rule_base64_pad* clone(void) const;

  static const Rule_base64_pad* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
