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

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEOffsetElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEOffsetElement.h"

#include <kjs/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEOffsetElement)

/* Hash table */

static const HashTableValue JSSVGFEOffsetElementTableValues[11] =
{
    { "in1", (intptr_t)JSSVGFEOffsetElement::In1AttrNum, DontDelete|ReadOnly, 0 },
    { "dx", (intptr_t)JSSVGFEOffsetElement::DxAttrNum, DontDelete|ReadOnly, 0 },
    { "dy", (intptr_t)JSSVGFEOffsetElement::DyAttrNum, DontDelete|ReadOnly, 0 },
    { "x", (intptr_t)JSSVGFEOffsetElement::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSSVGFEOffsetElement::YAttrNum, DontDelete|ReadOnly, 0 },
    { "width", (intptr_t)JSSVGFEOffsetElement::WidthAttrNum, DontDelete|ReadOnly, 0 },
    { "height", (intptr_t)JSSVGFEOffsetElement::HeightAttrNum, DontDelete|ReadOnly, 0 },
    { "result", (intptr_t)JSSVGFEOffsetElement::ResultAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGFEOffsetElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGFEOffsetElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEOffsetElementTable = { 255, JSSVGFEOffsetElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGFEOffsetElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", (intptr_t)jsSVGFEOffsetElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEOffsetElementPrototypeTable = { 0, JSSVGFEOffsetElementPrototypeTableValues, 0 };

const ClassInfo JSSVGFEOffsetElementPrototype::s_info = { "SVGFEOffsetElementPrototype", 0, &JSSVGFEOffsetElementPrototypeTable, 0 };

JSObject* JSSVGFEOffsetElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGFEOffsetElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGFEOffsetElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGFEOffsetElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEOffsetElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFEOffsetElement::s_info = { "SVGFEOffsetElement", &JSSVGElement::s_info, &JSSVGFEOffsetElementTable , 0 };

JSSVGFEOffsetElement::JSSVGFEOffsetElement(JSObject* prototype, SVGFEOffsetElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGFEOffsetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEOffsetElement, Base>(exec, &JSSVGFEOffsetElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEOffsetElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        return toJS(exec, obj.get(), imp);
    }
    case DxAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedNumber> obj = imp->dxAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case DyAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedNumber> obj = imp->dyAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ResultAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

JSValue* jsSVGFEOffsetElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFEOffsetElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEOffsetElement* castedThisObj = static_cast<JSSVGFEOffsetElement*>(thisValue);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)
