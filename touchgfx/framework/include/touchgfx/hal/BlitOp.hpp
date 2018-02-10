/******************************************************************************
 * This file is part of the TouchGFX 4.9.2 distribution.
 * Copyright (C) 2017 Draupner Graphics A/S <http://www.touchgfx.com>.
 ******************************************************************************
 * This is licensed software. Any use hereof is restricted by and subject to 
 * the applicable license terms. For further information see "About/Legal
 * Notice" in TouchGFX Designer or in your TouchGFX installation directory.
 *****************************************************************************/

#ifndef BLITOP_HPP
#define BLITOP_HPP

#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{
/**
 * @enum BlitOperations
 *
 * @brief The BlitOp operations.
 *
 *        The BlitOp operations.
 */
enum BlitOperations
{
    BLIT_OP_COPY                         = 1 << 0, ///< Copy the source to the destination
    BLIT_OP_FILL                         = 1 << 1, ///< Fill the destination with color
    BLIT_OP_COPY_WITH_ALPHA              = 1 << 2, ///< Copy the source to the destination using the given alpha
    BLIT_OP_FILL_WITH_ALPHA              = 1 << 3, ///< Fill the destination with color using the given alpha
    BLIT_OP_COPY_WITH_TRANSPARENT_PIXELS = 1 << 4, ///< Deprecated, ignored. (Copy the source to the destination, but not the transparent pixels)
    BLIT_OP_COPY_ARGB8888                = 1 << 5, ///< Copy the source to the destination, performing per-pixel alpha blending
    BLIT_OP_COPY_ARGB8888_WITH_ALPHA     = 1 << 6, ///< Copy the source to the destination, performing per-pixel alpha blending and blending the result with an image-wide alpha
    BLIT_OP_COPY_A4                      = 1 << 7, ///< Copy 4-bit source text to destination, performing per-pixel alpha blending
    BLIT_OP_COPY_A8                      = 1 << 8 ///< Copy 8-bit source text to destination, performing per-pixel alpha blending
};

/**
 * @struct BlitOp BlitOp.hpp touchgfx/hal/BlitOp.hpp
 *
 * @brief BlitOp instances carry the required information for performing operations on the LCD
 *        (frame buffer) using DMA.
 *
 *        BlitOp instances carry the required information for performing operations on the LCD
 *        (frame buffer) using DMA.
 */
struct BlitOp
{
    uint32_t        operation;  ///< The operation to perform @see BlitOperations
    const uint16_t* pSrc;          ///< Pointer to the source
    uint16_t*       pDst;          ///< Pointer to the destination
    uint16_t        nSteps;        ///< The number of pixels in a line
    uint16_t        nLoops;        ///< The number of lines
    uint16_t        srcLoopStride; ///< The number of bytes to stride the source after every loop
    uint16_t        dstLoopStride; ///< The number of bytes to stride the destination after every loop
    colortype       color;         ///< Color to fill
    uint8_t         alpha;         ///< The alpha to use
};

} // namespace touchgfx
#endif // BLITOP_HPP
