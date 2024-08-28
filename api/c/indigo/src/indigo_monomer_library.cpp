/****************************************************************************
 * Copyright (C) from 2009 to Present EPAM Systems.
 *
 * This file is part of Indigo toolkit.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ***************************************************************************/

#include "indigo_monomer_library.h"

//
// IndigoMonomerLibrary
//

IndigoMonomerLibrary::IndigoMonomerLibrary() : IndigoObject(MONOMER_LIBRARY), library()
{
}

IndigoMonomerLibrary::~IndigoMonomerLibrary()
{
}

bool IndigoMonomerLibrary::is(const IndigoObject& object)
{
    return object.type == MONOMER_LIBRARY;
}

MonomerTemplateLibrary& IndigoMonomerLibrary::get(IndigoObject& obj)
{
    if (obj.type != MONOMER_LIBRARY)
        throw IndigoError("%s is not a monomer library", obj.debugInfo());
    return reinterpret_cast<IndigoMonomerLibrary&>(obj).library;
}

const char* IndigoMonomerLibrary::debugInfo() const
{
    return "<MonomerLibrary>";
}

MonomerTemplateLibrary& IndigoMonomerLibrary::getMonomerLibrary()
{
    return library;
}