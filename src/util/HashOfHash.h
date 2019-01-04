#pragma once
#include <xdr/Stellar-types.h>

namespace std
{
template <> struct hash<tang::uint256>
{
    size_t operator()(tang::uint256 const& x) const noexcept;
};
}
