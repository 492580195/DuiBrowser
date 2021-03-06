/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSStyleSheetList.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "AtomicString.h"
#include "JSStyleSheet.h"
#include "StyleSheet.h"
#include "StyleSheetList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSStyleSheetListTableValues[3] =
{
    { "length", (intptr_t)JSStyleSheetList::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSStyleSheetList::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetListTable = { 15, JSStyleSheetListTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSStyleSheetListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetListConstructorTable = { 0, JSStyleSheetListConstructorTableValues, 0 };

class JSStyleSheetListConstructor : public DOMObject {
public:
    JSStyleSheetListConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSStyleSheetListPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSStyleSheetListConstructor::s_info = { "StyleSheetListConstructor", 0, &JSStyleSheetListConstructorTable, 0 };

bool JSStyleSheetListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSStyleSheetListConstructor, DOMObject>(exec, &JSStyleSheetListConstructorTable, this, propertyName, slot);
}

JSValue* JSStyleSheetListConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSStyleSheetListPrototypeTableValues[2] =
{
    { "item", (intptr_t)jsStyleSheetListPrototypeFunctionItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetListPrototypeTable = { 0, JSStyleSheetListPrototypeTableValues, 0 };

const ClassInfo JSStyleSheetListPrototype::s_info = { "StyleSheetListPrototype", 0, &JSStyleSheetListPrototypeTable, 0 };

JSObject* JSStyleSheetListPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSStyleSheetList.prototype]]");
    return KJS::cacheGlobalObject<JSStyleSheetListPrototype>(exec, prototypeIdentifier);
}

bool JSStyleSheetListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSStyleSheetListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSStyleSheetList::s_info = { "StyleSheetList", 0, &JSStyleSheetListTable , 0 };

JSStyleSheetList::JSStyleSheetList(JSObject* prototype, StyleSheetList* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSStyleSheetList::~JSStyleSheetList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSStyleSheetList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSStyleSheetListTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSStyleSheetList>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<StyleSheetList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<StyleSheetList*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSStyleSheetList, Base>(exec, &JSStyleSheetListTable, this, propertyName, slot);
}

bool JSStyleSheetList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<StyleSheetList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSStyleSheetList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        StyleSheetList* imp = static_cast<StyleSheetList*>(impl());
        return jsNumber(exec, imp->length());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSStyleSheetList::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<StyleSheetList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSStyleSheetList::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[StyleSheetList.constructor]]");
    return KJS::cacheGlobalObject<JSStyleSheetListConstructor>(exec, constructorIdentifier);
}

JSValue* jsStyleSheetListPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSStyleSheetList::s_info))
        return throwError(exec, TypeError);
    JSStyleSheetList* castedThisObj = static_cast<JSStyleSheetList*>(thisValue);
    StyleSheetList* imp = static_cast<StyleSheetList*>(castedThisObj->impl());
    unsigned index = args[0]->toInt32(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->item(index)));
    return result;
}


JSValue* JSStyleSheetList::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSStyleSheetList* thisObj = static_cast<JSStyleSheetList*>(slot.slotBase());
    return toJS(exec, static_cast<StyleSheetList*>(thisObj->impl())->item(slot.index()));
}
KJS::JSValue* toJS(KJS::ExecState* exec, StyleSheetList* obj)
{
    return cacheDOMObject<StyleSheetList, JSStyleSheetList, JSStyleSheetListPrototype>(exec, obj);
}
StyleSheetList* toStyleSheetList(KJS::JSValue* val)
{
    return val->isObject(&JSStyleSheetList::s_info) ? static_cast<JSStyleSheetList*>(val)->impl() : 0;
}

}
