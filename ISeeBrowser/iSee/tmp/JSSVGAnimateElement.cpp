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


#if ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGAnimateElement.h"

#include <wtf/GetPtr.h>

#include "SVGAnimateElement.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimateElement)

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimateElementPrototypeTable = { 0, JSSVGAnimateElementPrototypeTableValues, 0 };

const ClassInfo JSSVGAnimateElementPrototype::s_info = { "SVGAnimateElementPrototype", 0, &JSSVGAnimateElementPrototypeTable, 0 };

JSObject* JSSVGAnimateElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGAnimateElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGAnimateElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGAnimateElement::s_info = { "SVGAnimateElement", &JSSVGAnimationElement::s_info, 0 , 0 };

JSSVGAnimateElement::JSSVGAnimateElement(JSObject* prototype, SVGAnimateElement* impl)
    : JSSVGAnimationElement(prototype, impl)
{
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_ANIMATION)