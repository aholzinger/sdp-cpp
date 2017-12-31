/* -----------------------------------------------------------------------------
 * Rule_transport_extension.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_transport_extension_hpp
#define Rule_transport_extension_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_transport_extension : public Rule
{
public:
  Rule_transport_extension(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_transport_extension(const Rule_transport_extension& rule);

  Rule_transport_extension& operator=(const Rule_transport_extension& rule);

  const Rule_transport_extension* clone(void) const;

  static const Rule_transport_extension* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
