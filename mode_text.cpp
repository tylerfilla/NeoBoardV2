/*
 * NeoBoard - LED Panel Controller
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

#include <string.h>

#include "display_pair.h"
#include "display_panel.h"
#include "font_pixely.h"
#include "mode_text.h"

neo::mode_text::mode_text(input_ctrl& input_p, display_pair& displays_p)
        : mode(input_p, displays_p)
{
}

void neo::mode_text::update()
{
    auto text = text_m.text();

    for (size_t i = 0; i < strlen(text); ++i)
    {
        // Get character bitmap data
        auto ch = neo::font::pixely[(size_t) text[i]];

        for (int column = 0; column < 3; ++column)
        {
            // Get column data
            auto column_data = ch[column];

            for (int row = 0; row < 5; ++row)
            {
                // Set pixel per the bitmap cell
                if ((column_data >> row) & 0x1)
                {
                    //display_m.set_pixel(i * 3 + column, 4 - row, i % 2 ? 0x00ff4000 : 0x00ff0000);
                }
                else
                {
                    //display_m.set_pixel(i * 3 + column, 4 - row, 0x00000010);
                }

                displays_m.panel1().set_pixel(i * 3 + column, 4 - row, 0x00ffffff);
            }
        }
    }

    displays_m.panel1().flush();
}
