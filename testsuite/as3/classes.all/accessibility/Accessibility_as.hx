// Accessibility_as.hx:  ActionScript 3 "Accessibility" class, for Gnash.
//
// Generated by gen-as3.sh on: 20090514 by "rob". Remove this
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

// These tests were in the ming test files, but have not yet been included
// in the haxe cases
// Possible internal tests that need to be written
// check_equals (typeof(Accessibility.__proto__), 'object');
// check_equals (Accessibility.__proto__, Object.prototype);
// sendEvent may be a function that is undocumented in the Adobe specs
// check_equals ( typeof(Accessibility.sendEvent), 'function' );
// check(Accessibility.hasOwnProperty("sendEvent"));

#if flash9
import flash.accessibility.Accessibility;
import flash.display.MovieClip;
#else
import flash.Accessibility;
import flash.MovieClip;
#end
import flash.Lib;
import Type;
import Reflect;

// import our testing API
import DejaGnu;

// Class must be named with the _as suffix, as that's the same name as the file.
class Accessibility_as {
    static function main() {

// Tests to see if all the properties exist. All these do is test for
// existance of a property, and don't test the functionality at all. This
// is primarily useful only to test completeness of the API implementation.
#if flash9
// Should be:
// 	    TBool
// 	    null
// 	    false
// 	    false
// 	    flash.accessibility.Accessibility
// 	    sendEvent
 	DejaGnu.note("ME1 "   + Type.typeof(Accessibility.active));
 	DejaGnu.note("ME2 "   + Type.getClass(Accessibility.active));
 	DejaGnu.note("ME3 "   + Std.string(Accessibility.active));
  	DejaGnu.note("ME4 "   + Std.is(Accessibility.active,ValueType.TObject));
   	DejaGnu.note("ME5 "   + Type.getClassName(Accessibility));
   	DejaGnu.note("ME6 "   + Type.getClassFields(Accessibility)[0]);
	
	if (Type.typeof(Accessibility.active) == ValueType.TBool) {
	    DejaGnu.pass("Accessibility::active property exists");
	} else {
	    DejaGnu.fail("Accessibility::active property doesn't exist");
	}

	// Test for existence of updateProperties method
	// updateProperties throws error if Capabilities.hasAccessability == false
	if ( flash.system.Capabilities.hasAccessibility != false ) {
		if (Accessibility.updateProperties() != null) {
	    	    DejaGnu.pass("Accessibility::updateProperties() method exists");
		} else {
	    	    DejaGnu.fail("Accessibility::updateProperties() method doesn't exist");
		}
 	}
	
#else
  	DejaGnu.note("ME1 "   + Type.typeof(Accessibility.isActive()));	
  	DejaGnu.note("ME2 "   + Type.getClass(Accessibility.isActive));
  	DejaGnu.note("ME3 "   + Std.string(Accessibility.isActive));
  	DejaGnu.note("ME4 "   + Std.is(Accessibility.isActive,ValueType.TFunction));
 	DejaGnu.note("ME5 "   + Type.getClassName(Type.getClass(Accessibility)));
// 	DejaGnu.note("ME6 "   + Type.getClassFields(Accessibility.isActive));
  	DejaGnu.note("ME7 "   + Reflect.isFunction(Accessibility.isActive));
  	DejaGnu.note("ME8 "   + Reflect.isObject(Accessibility.isActive));

 	if (Type.typeof(Accessibility.isActive) == ValueType.TFunction) {
 	    DejaGnu.pass("Accessibility::isActive method exists");
 	} else {
 	    DejaGnu.fail("Accessibility::isActive method doesn't exist");
 	}
	
	// Tests to see if all the methods exist. All these do is test for
	// existance of a method, and don't test the functionality at all. This
	// is primarily useful only to test completeness of the API implementation.
	DejaGnu.note("ME1A "   + Type.typeof(Accessibility.updateProperties()));

	if (Type.typeof(Accessibility.updateProperties) == ValueType.TFunction) {
	    DejaGnu.pass("Accessibility::updateProperties() method exists");
	} else {
	    DejaGnu.fail("Accessibility::updateProperties() method doesn't exist");
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

