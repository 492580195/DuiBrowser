/*
 * This file is part of the HTML DOM implementation for KDE.
 *
 * Copyright (C) 2005, 2006 Apple Computer, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#ifndef HTMLElementFactory_h
#define HTMLElementFactory_h

#include <wtf/FastAllocBase.h>
#include <wtf/Forward.h>

namespace WebCore {

class AtomicString;
class Document;
class Element;
class HTMLElement;
class HTMLFormElement;
class QualifiedName;

// The idea behind this class is that there will eventually be a mapping from namespace URIs to ElementFactories that can dispense elements.
// In a compound document world, the generic createElement function (will end up being virtual) will be called.
class HTMLElementFactory/*: public WTF::FastAllocBase*/ {
public:
    PassRefPtr<Element> createElement(const QualifiedName&, Document*, bool createdByParser = true);
    static PassRefPtr<HTMLElement> createHTMLElement(const AtomicString& tagName, Document*, HTMLFormElement* = 0, bool createdByParser = true);
    static void staticFinalize();

};

}

#endif
