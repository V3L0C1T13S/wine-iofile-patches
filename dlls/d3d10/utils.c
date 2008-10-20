/*
 * Copyright 2008 Henri Verbeet for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 */

#include "config.h"
#include "wine/port.h"

#include "d3d10_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(d3d10);

#define WINE_D3D10_TO_STR(x) case x: return #x

const char *debug_d3d10_driver_type(D3D10_DRIVER_TYPE driver_type)
{
    switch(driver_type)
    {
        WINE_D3D10_TO_STR(D3D10_DRIVER_TYPE_HARDWARE);
        WINE_D3D10_TO_STR(D3D10_DRIVER_TYPE_REFERENCE);
        WINE_D3D10_TO_STR(D3D10_DRIVER_TYPE_NULL);
        WINE_D3D10_TO_STR(D3D10_DRIVER_TYPE_SOFTWARE);
        default:
            FIXME("Unrecognized D3D10_DRIVER_TYPE %#x\n", driver_type);
            return "unrecognized";
    }
}

const char *debug_d3d10_primitive_topology(D3D10_PRIMITIVE_TOPOLOGY topology)
{
    switch (topology)
    {
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_UNDEFINED);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_POINTLIST);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_LINELIST);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_LINESTRIP);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_LINELIST_ADJ);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST_ADJ);
        WINE_D3D10_TO_STR(D3D10_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ);
        default:
            FIXME("Unrecognized D3D10_PRIMITIVE_TOPOLOGY %#x\n", topology);
            return "unrecognized";
    }
}

const char *debug_dxgi_format(DXGI_FORMAT format)
{
    switch(format)
    {
        WINE_D3D10_TO_STR(DXGI_FORMAT_UNKNOWN);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32A32_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32A32_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32A32_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32A32_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32B32_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16B16A16_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16B16A16_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16B16A16_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16B16A16_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16B16A16_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16B16A16_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G32_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32G8X24_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_D32_FLOAT_S8X24_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_X32_TYPELESS_G8X24_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R10G10B10A2_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R10G10B10A2_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R10G10B10A2_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R11G11B10_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8B8A8_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8B8A8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8B8A8_UNORM_SRGB);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8B8A8_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8B8A8_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8B8A8_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16G16_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_D32_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R32_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R24G8_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_D24_UNORM_S8_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R24_UNORM_X8_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_X24_TYPELESS_G8_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16_FLOAT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_D16_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R16_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8_UINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8_SINT);
        WINE_D3D10_TO_STR(DXGI_FORMAT_A8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R1_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R9G9B9E5_SHAREDEXP);
        WINE_D3D10_TO_STR(DXGI_FORMAT_R8G8_B8G8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_G8R8_G8B8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC1_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC1_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC1_UNORM_SRGB);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC2_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC2_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC2_UNORM_SRGB);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC3_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC3_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC3_UNORM_SRGB);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC4_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC4_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC4_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC5_TYPELESS);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC5_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_BC5_SNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_B5G6R5_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_B5G5R5A1_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_B8G8R8A8_UNORM);
        WINE_D3D10_TO_STR(DXGI_FORMAT_B8G8R8X8_UNORM);
        default:
            FIXME("Unrecognized DXGI_FORMAT %#x\n", format);
            return "unrecognized";
    }
}

#undef WINE_D3D10_TO_STR
