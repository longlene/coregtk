/*
 * CGTKCheckMenuItem.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2014 - Tyler Burton
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2014. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CGTKMenuItem.h"

@interface CGTKCheckMenuItem : CGTKMenuItem
{
	
}

/*
 * Gets internal GtkCheckMenuItem
 */
-(GtkCheckMenuItem *)CHECK_MENU_ITEM;

/*
 * Forwards message to:
 * GtkWidget* gtk_check_menu_item_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_check_menu_item_new_with_label (const gchar* label)
 */
-(id)initWithLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_check_menu_item_new_with_mnemonic (const gchar* label)
 */
-(id)initWithMnemonic:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_check_menu_item_set_active (GtkCheckMenuItem* check_menu_item, gboolean is_active)
 */
-(void)setActive:(BOOL)isActive;

/*
 * Forwards message to:
 * gboolean gtk_check_menu_item_get_active (GtkCheckMenuItem* check_menu_item)
 */
-(BOOL)getActive;

/*
 * Forwards message to:
 * void gtk_check_menu_item_toggled (GtkCheckMenuItem* check_menu_item)
 */
-(void)toggled;

/*
 * Forwards message to:
 * void gtk_check_menu_item_set_inconsistent (GtkCheckMenuItem* check_menu_item, gboolean setting)
 */
-(void)setInconsistent:(BOOL)setting;

/*
 * Forwards message to:
 * gboolean gtk_check_menu_item_get_inconsistent (GtkCheckMenuItem* check_menu_item)
 */
-(BOOL)getInconsistent;

/*
 * Forwards message to:
 * void gtk_check_menu_item_set_draw_as_radio (GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio)
 */
-(void)setDrawAsRadio:(BOOL)drawAsRadio;

/*
 * Forwards message to:
 * gboolean gtk_check_menu_item_get_draw_as_radio (GtkCheckMenuItem* check_menu_item)
 */
-(BOOL)getDrawAsRadio;

@end
