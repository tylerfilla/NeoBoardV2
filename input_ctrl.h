/*
 * NeoBoardV2 - LED Panel Controller
 * Dedicated to FIRST Tech Challenge team #5703
 *
 * Copyright (c) 2017 Tyler Filla
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INPUT_CTRL_H
#define INPUT_CTRL_H

namespace neo
{

/**
 * A representation of the input control array (the physicall arrangement of
 * buttons on the shield).
 */
class input_ctrl
{
    /** The current state of the d-pad up button. */
    bool btn_up_m;

    /** The current state of the d-pad down button. */
    bool btn_down_m;

    /** The current state of the d-pad left button. */
    bool btn_left_m;

    /** The current state of the d-pad right button. */
    bool btn_right_m;

    /** The current state of the select button. */
    bool btn_select_m;

public:
    /**
     * Get whether the up button is pressed.
     */
    inline bool btn_up() const
    { return btn_up_m; }

    /**
     * Indicate whether the up button is pressed.
     */
    input_ctrl& btn_up(bool btn_up_p);

    /**
     * Get whether the down button is pressed.
     */
    inline bool btn_down() const
    { return btn_down_m; }

    /**
     * Indicate whether the down button is pressed.
     */
    input_ctrl& btn_down(bool btn_down_p);

    /**
     * Get whether the left button is pressed.
     */
    inline bool btn_left() const
    { return btn_left_m; }

    /**
     * Indicate whether the left button is pressed.
     */
    input_ctrl& btn_left(bool btn_left_p);

    /**
     * Get whether the right button is pressed.
     */
    inline bool btn_right() const
    { return btn_right_m; }

    /**
     * Indicate whether the right button is pressed.
     */
    input_ctrl& btn_right(bool btn_right_p);

    /**
     * Get whether the select button is pressed.
     */
    inline bool btn_select() const
    { return btn_select_m; }

    /**
     * Indicate whether the select button is pressed.
     */
    input_ctrl& btn_select(bool btn_select_p);
};

} // namespace neo

#endif // #ifndef INPUT_CTRL_H
