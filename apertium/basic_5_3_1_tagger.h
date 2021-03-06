// Copyright (C) 2005 Universitat d'Alacant / Universidad de Alicante
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.

#ifndef BASIC_5_3_1_TAGGER_H
#define BASIC_5_3_1_TAGGER_H

#include "analysis.h"

#include <cstddef>
#include <map>

namespace Apertium {
class basic_5_3_1_Tagger {
protected:
  basic_5_3_1_Tagger();
  std::map<Analysis, std::size_t> Model;
};
}

#endif // BASIC_5_3_1_TAGGER_H
