// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::CmptLocator>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::CmptLocator>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{Name::constructor, WrapConstructor<Ubpa::UECS::CmptLocator(const Ubpa::UECS::CmptAccessType *, size_t)>()},
        Field{Name::constructor, WrapConstructor<Ubpa::UECS::CmptLocator()>()},
        Field{"HashCode", &Ubpa::UECS::CmptLocator::HashCode},
        Field{"CmptAccessTypes", &Ubpa::UECS::CmptLocator::CmptAccessTypes},
        Field{"operator==", &Ubpa::UECS::CmptLocator::operator==},
    };
};
