/**
 * @file screen_main_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_main_gen.h"
#include "../ui_screens.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_main_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_main_#");

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_width(lv_button_0, 50);
    lv_obj_set_height(lv_button_0, 35);
    lv_obj_set_x(lv_button_0, 7);
    lv_obj_set_y(lv_button_0, 4);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, "Choose a letter to practice the ASL sign!");
    lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_0, 3);
    lv_obj_set_width(lv_label_0, 239);
    lv_obj_set_height(lv_label_0, 38);
    lv_obj_set_x(lv_label_0, 26);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_align(lv_obj_1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_width(lv_obj_1, 310);
    lv_obj_set_height(lv_obj_1, 200);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_AUTO);
    lv_obj_set_scroll_snap_x(lv_obj_1, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xe9c46a), 0);
    lv_obj_t * lv_buttonmatrix_0 = lv_buttonmatrix_create(lv_obj_1);
    lv_obj_set_width(lv_buttonmatrix_0, 300);
    lv_obj_set_height(lv_buttonmatrix_0, 470);
    lv_obj_set_style_bg_color(lv_buttonmatrix_0, lv_color_hex(0xe9c46a), 0);
    lv_obj_set_style_border_color(lv_buttonmatrix_0, lv_color_hex(0xe9c46a), 0);
    static const char *lv_buttonmatrix_0_map_0[] = {"{'A',", "B',", "C',", "D',", "\\n',", "E',", "F',", "G',", "H',", "\\n',", "I',", "J',", "K',", "L',", "\\n',", "M',", "N',", "O',", "P',", "\\n',", "Q',", "R',", "S',", "T',", "\\n',", "U',", "V',", "W',", "X',", "\\n',", "Y',", "Z',", "NULL}", NULL};
    lv_buttonmatrix_set_map(lv_buttonmatrix_0, lv_buttonmatrix_0_map_0);
    lv_obj_set_align(lv_buttonmatrix_0, LV_ALIGN_TOP_MID);
    lv_obj_add_screen_create_event(lv_buttonmatrix_0, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

