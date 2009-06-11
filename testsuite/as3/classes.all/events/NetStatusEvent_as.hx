// NetStatusEvent_as.hx:  ActionScript 3 "NetStatusEvent" class, for Gnash.
//
// Generated by gen-as3.sh on: 20090515 by "rob". Remove this
// after any hand editing loosing changes.
//
//   Copyright (C) 2009 Free Software Foundation, Inc.
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
//

// This test case must be processed by CPP before compiling to include the
//  DejaGnu.hx header file for the testing framework support.

#if flash9
import flash.events.NetStatusEvent;
import flash.display.MovieClip;
#end
import flash.Lib;
import Type;
import Std;

// import our testing API
import DejaGnu;

// Class must be named with the _as suffix, as that's the same name as the file.
class NetStatusEvent_as {
    static function main() {
        #if !flash9
			DejaGnu.note("this class didn't exist in as2");
		#end
		
		#if flash9
		var x1:NetStatusEvent = new NetStatusEvent("netstatusevent");

        // Make sure we actually get a valid class        
        if (x1 != null) {
            DejaGnu.pass("NetStatusEvent class exists");
        } else {
            DejaGnu.fail("NetStatusEvent class doesn't exist");
        }
// Tests to see if all the properties exist. All these do is test for
// existance of a property, and don't test the functionality at all. This
// is primarily useful only to test completeness of the API implementation.
	if (Type.typeof(x1.info) == ValueType.TObject) {
	    DejaGnu.pass("NetStatusEvent.info property exists");
	} else {
	    DejaGnu.fail("NetStatusEvent.info property doesn't exist");
	}

// Tests to see if all the methods exist. All these do is test for
// existance of a method, and don't test the functionality at all. This
// is primarily useful only to test completeness of the API implementation.
	if (Type.typeof(x1.clone) == ValueType.TFunction)) {
	    DejaGnu.pass("NetStatusEvent::clone() method exists");
	} else {
	    DejaGnu.fail("NetStatusEvent::clone() method doesn't exist");
	}
	if (Type.typeof(x1.toString) == ValueType.TFunction) {
	    DejaGnu.pass("NetStatusEvent::toString() method exists");
	} else {
	    DejaGnu.fail("NetStatusEvent::toString() method doesn't exist");
	}
	if (Std.string(flash.events.NetStatusEvent.NET_STATUS) == "netStatus") {
	    DejaGnu.pass("NetStatusEvent.NET_STATUS property exists");
	} else {
	    DejaGnu.fail("NetStatusEvent.NET_STATUS property doesn't exist");
	}
	#end
        // Call this after finishing all tests. It prints out the totals.
        DejaGnu.done();
    }
}

// local Variables:
// mode: C++
// indent-tabs-mode: t
// End:

