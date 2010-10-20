// 
//   Copyright (C) 2005, 2006, 2007, 2008, 2009, 2010 Free Software
//   Foundation, Inc
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA


#ifndef GNASH_SWF_DEFINEBITSTAG_H
#define GNASH_SWF_DEFINEBITSTAG_H

#include "SWF.h" 

// Forward declarations
namespace gnash {
    class movie_definition;
    class RunResources;
    class SWFStream;
}

namespace gnash {
namespace SWF {

void jpeg_tables_loader(SWFStream&, TagType, movie_definition&,
		const RunResources&);

void define_bits_jpeg_loader(SWFStream&, TagType, movie_definition&,
		const RunResources&);

void define_bits_jpeg2_loader(SWFStream&, TagType, movie_definition&,
		const RunResources&);

void define_bits_jpeg3_loader(SWFStream&, TagType, movie_definition&,
		const RunResources&);

void define_bits_lossless_2_loader(SWFStream&, TagType, movie_definition&,
		const RunResources&);

} // namespace SWF
} // namespace gnash


#endif 

// Local Variables:
// mode: C++
// indent-tabs-mode: t
// End:
