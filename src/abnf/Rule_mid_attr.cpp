/* -----------------------------------------------------------------------------
 * Rule_mid_attr.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Rule_mid_attr.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_identification_tag.hpp"
#include "Terminal_StringValue.hpp"

using namespace abnf;

Rule_mid_attr::Rule_mid_attr(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_mid_attr::Rule_mid_attr(const Rule_mid_attr& rule) : Rule(rule)
{
}

Rule_mid_attr& Rule_mid_attr::operator=(const Rule_mid_attr& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_mid_attr* Rule_mid_attr::clone() const
{
  return new Rule_mid_attr(this->spelling, this->rules);
}

void* Rule_mid_attr::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_mid_attr* Rule_mid_attr::parse(ParserContext& context)
{
  context.push("mid-attr");

  bool parsed = true;
  int s0 = context.index;
  vector<const Rule*> e0;
  const Rule* rule;

  parsed = false;
  if (!parsed)
  {
    {
      vector<const Rule*> e1;
      int s1 = context.index;
      parsed = true;
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Terminal_StringValue::parse(context, "mid:");
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 1 && f1; i1++)
        {
          rule = Rule_identification_tag::parse(context);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 1;
      }
      if (parsed)
        e0.insert(e0.end(), e1.begin(), e1.end());
      else
        context.index = s1;
    }
  }

  rule = NULL;
  if (parsed)
    rule = new Rule_mid_attr(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("mid-attr", parsed);

  return (Rule_mid_attr*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
