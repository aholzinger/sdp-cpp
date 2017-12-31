/* -----------------------------------------------------------------------------
 * Rule_local_part.cpp
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

#include "Rule_local_part.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_quoted_string.hpp"
#include "Rule_obs_local_part.hpp"
#include "Rule_dot_atom.hpp"

using namespace abnf;

Rule_local_part::Rule_local_part(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_local_part::Rule_local_part(const Rule_local_part& rule) : Rule(rule)
{
}

Rule_local_part& Rule_local_part::operator=(const Rule_local_part& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_local_part* Rule_local_part::clone() const
{
  return new Rule_local_part(this->spelling, this->rules);
}

void* Rule_local_part::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_local_part* Rule_local_part::parse(ParserContext& context)
{
  context.push("local-part");

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
          rule = Rule_dot_atom::parse(context);
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
          rule = Rule_quoted_string::parse(context);
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
          rule = Rule_obs_local_part::parse(context);
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
    rule = new Rule_local_part(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("local-part", parsed);

  return (Rule_local_part*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
