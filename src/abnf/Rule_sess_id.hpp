/* -----------------------------------------------------------------------------
 * Rule_sess_id.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_sess_id_hpp
#define Rule_sess_id_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_sess_id : public Rule
{
public:
  Rule_sess_id(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_sess_id(const Rule_sess_id& rule);

  Rule_sess_id& operator=(const Rule_sess_id& rule);

  const Rule_sess_id* clone(void) const;

  static const Rule_sess_id* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
