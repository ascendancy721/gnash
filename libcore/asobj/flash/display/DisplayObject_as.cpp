// DisplayObject_as.cpp:  ActionScript "DisplayObject" class, for Gnash.
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

#ifdef HAVE_CONFIG_H
#include "gnashconfig.h"
#endif

#include "display/DisplayObject_as.h"
#include "log.h"
#include "fn_call.h"
#include "smart_ptr.h" // for boost intrusive_ptr
#include "builtin_function.h" // need builtin_function
#include "GnashException.h" // for ActionException

namespace gnash {

// Forward declarations
namespace {
    as_value displayobject_getRect(const fn_call& fn);
    as_value displayobject_globalToLocal(const fn_call& fn);
    as_value displayobject_hitTestObject(const fn_call& fn);
    as_value displayobject_hitTestPoint(const fn_call& fn);
    as_value displayobject_localToGlobal(const fn_call& fn);
    as_value displayobject_added(const fn_call& fn);
    as_value displayobject_addedToStage(const fn_call& fn);
    as_value displayobject_enterFrame(const fn_call& fn);
    as_value displayobject_removed(const fn_call& fn);
    as_value displayobject_removedFromStage(const fn_call& fn);
    as_value displayobject_render(const fn_call& fn);
    as_value displayobject_ctor(const fn_call& fn);
    void attachDisplayObjectInterface(as_object& o);
    void attachDisplayObjectStaticInterface(as_object& o);
    as_object* getDisplayObjectInterface();

}

class DisplayObject_as : public as_object
{

public:

    DisplayObject_as()
        :
        as_object(getDisplayObjectInterface())
    {}
};

// extern (used by Global.cpp)
void displayobject_class_init(as_object& global)
{
    static boost::intrusive_ptr<builtin_function> cl;

    if (!cl) {
        cl = new builtin_function(&displayobject_ctor, getDisplayObjectInterface());
        attachDisplayObjectStaticInterface(*cl);
    }

    // Register _global.DisplayObject
    global.init_member("DisplayObject", cl.get());
}

namespace {

void
attachDisplayObjectInterface(as_object& o)
{
    o.init_member("getRect", new builtin_function(displayobject_getRect));
    o.init_member("globalToLocal", new builtin_function(displayobject_globalToLocal));
    o.init_member("hitTestObject", new builtin_function(displayobject_hitTestObject));
    o.init_member("hitTestPoint", new builtin_function(displayobject_hitTestPoint));
    o.init_member("localToGlobal", new builtin_function(displayobject_localToGlobal));
    o.init_member("added", new builtin_function(displayobject_added));
    o.init_member("addedToStage", new builtin_function(displayobject_addedToStage));
    o.init_member("enterFrame", new builtin_function(displayobject_enterFrame));
    o.init_member("removed", new builtin_function(displayobject_removed));
    o.init_member("removedFromStage", new builtin_function(displayobject_removedFromStage));
    o.init_member("render", new builtin_function(displayobject_render));
}

void
attachDisplayObjectStaticInterface(as_object& o)
{

}

as_object*
getDisplayObjectInterface()
{
    static boost::intrusive_ptr<as_object> o;
    if ( ! o ) {
        o = new as_object();
        attachDisplayObjectInterface(*o);
    }
    return o.get();
}

as_value
displayobject_getRect(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_globalToLocal(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_hitTestObject(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_hitTestPoint(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_localToGlobal(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_added(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_addedToStage(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_enterFrame(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_removed(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_removedFromStage(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_render(const fn_call& fn)
{
    boost::intrusive_ptr<DisplayObject_as> ptr =
        ensureType<DisplayObject_as>(fn.this_ptr);
    UNUSED(ptr);
    log_unimpl (__FUNCTION__);
    return as_value();
}

as_value
displayobject_ctor(const fn_call& fn)
{
    boost::intrusive_ptr<as_object> obj = new DisplayObject_as;

    return as_value(obj.get()); // will keep alive
}

} // anonymous namespace 
} // gnash namespace

// local Variables:
// mode: C++
// indent-tabs-mode: t
// End:
