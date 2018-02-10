/******************************************************************************
 * This file is part of the TouchGFX 4.9.2 distribution.
 * Copyright (C) 2017 Draupner Graphics A/S <http://www.touchgfx.com>.
 ******************************************************************************
 * This is licensed software. Any use hereof is restricted by and subject to 
 * the applicable license terms. For further information see "About/Legal
 * Notice" in TouchGFX Designer or in your TouchGFX installation directory.
 *****************************************************************************/

#ifndef LISTLAYOUT_HPP
#define LISTLAYOUT_HPP

#include <touchgfx/containers/Container.hpp>
#include <assert.h>
#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{
/**
 * @class ListLayout ListLayout.hpp touchgfx/containers/ListLayout.hpp
 *
 * @brief This class provides a layout mechanism for arranging Drawable instances adjacently in the
 *        specified Direction.
 *
 *        This class provides a layout mechanism for arranging Drawable instances adjacently in
 *        the specified Direction.  The first element in the ListLayout is positioned in the
 *        ListLayout origin (0,0). The dimension of this class is automatically expanded to
 *        cover the area of the added Drawable instances.
 *
 * @see Container
 */
class ListLayout : public Container
{
public:

    /**
     * @fn ListLayout::ListLayout(const Direction d = SOUTH)
     *
     * @brief Constructor.
     *
     *        Constructor. Constructs a ListLayout instance that arranges the added elements in
     *        the specified Direction.
     *
     * @param d The direction to grow in when adding children.
     */
    ListLayout(const Direction d = SOUTH)
        : Container(), direction(d), xOffset(0), yOffset(0)
    {
        assert((d == SOUTH || d == EAST) && "Chosen direction not supported");
    }

    /**
     * @fn virtual ListLayout::~ListLayout()
     *
     * @brief Destructor.
     *
     *        Destructor.
     */
    virtual ~ListLayout() { }

    /**
     * @fn virtual void ListLayout::add(Drawable& d);
     *
     * @brief Adds a Drawable instance to the end of the list.
     *
     *        Adds a Drawable instance to the end of the list. The Drawable dimensions shall be
     *        set prior to addition.
     *
     * @param [in] d The Drawable to add.
     */
    virtual void add(Drawable& d);

    /**
     * @fn virtual void ListLayout::remove(Drawable& d);
     *
     * @brief Removes a Drawable.
     *
     *        Removes a Drawable. Safe to call even if drawable has not been added.
     *
     * @param [in] d The drawable to remove.
     */
    virtual void remove(Drawable& d);

    /**
     * @fn virtual void ListLayout::insert(Drawable* previousElement, Drawable& d);
     *
     * @brief Inserts a Drawable.
     *
     *        Inserts a Drawable.
     *
     * @param [in] previousElement The element to insert the new element after.
     * @param [in] d               The element to insert.
     */
    virtual void insert(Drawable* previousElement, Drawable& d);

    /**
     * @fn virtual void ListLayout::removeAll();
     *
     * @brief Removes all children.
     *
     *         Removes all children by resetting their parent and sibling pointers. In addition,
     *         the geometry is reset and any parent is signaled of the change.
     */
    virtual void removeAll();

    /**
     * @fn virtual uint16_t ListLayout::getType() const
     *
     * @brief For GUI testing only.
     *
     *        For GUI testing only. Returns type of this drawable.
     *
     * @return TYPE_LISTLAYOUT.
     */
    virtual uint16_t getType() const
    {
        return (uint16_t)TYPE_LISTLAYOUT;
    }

private:
    void internalAddElement(Drawable& d, int16_t coord);
    void internalRemoveElement(Drawable& d, int16_t coord);
    const Direction direction;
    int16_t xOffset;
    int16_t yOffset;
};

} // namespace touchgfx
#endif // LISTLAYOUT_HPP