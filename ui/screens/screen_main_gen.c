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

static const char * btnmap[] = {
    "A", "B", "C", "D", "\n",
    "E", "F", "G", "H", "\n",
    "I", "J", "K", "L", "\n",
    "M", "N", "O", "P", "\n",
    "Q", "R", "S", "T", "\n",
    "U", "V", "W", "X", "\n",
    "Y", "Z", "", "", "\n",
    ""
};

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

// lv_obj_t * screen_main_create(void)
// {
//     LV_TRACE_OBJ_CREATE("begin");


//     static bool style_inited = false;

//     if (!style_inited) {

//         style_inited = true;
//     }

//     if (screen_main == NULL) screen_main = lv_obj_create(NULL);
//     lv_obj_t * lv_obj_0 = screen_main;
//     lv_obj_set_name_static(lv_obj_0, "screen_main_#");

//     lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
//     lv_label_set_text(lv_label_0, "Main screen  (permanent)");
//     lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
//     lv_obj_set_y(lv_label_0, 10);
    
//     lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
//     lv_obj_set_align(lv_slider_0, LV_ALIGN_CENTER);
    
//     lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
//     lv_label_set_text(lv_label_1, "I'm on a permanent screen,\n so my state will stay");
//     lv_obj_set_y(lv_label_1, -30);
//     lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
//     lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    
//     lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
//     lv_obj_set_align(lv_button_0, LV_ALIGN_BOTTOM_MID);
//     lv_obj_set_y(lv_button_0, -10);
//     lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
//     lv_label_set_text(lv_label_2, "About");
    
//     lv_obj_add_screen_create_event(lv_button_0, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

//     LV_TRACE_OBJ_CREATE("finished");

//     return lv_obj_0;
// }

lv_obj_t * screen_main_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static bool style_inited = false;
    if (!style_inited) {
        style_inited = true;
    }
    
    if (screen_main == NULL) screen_main = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = screen_main;
    lv_obj_set_name_static(lv_obj_0, "screen_main_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, "Choose a letter to practice the ASL sign!");
    lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_0, 14);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_size(lv_obj_1, 310, 200);
    lv_obj_set_align(lv_obj_1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_AUTO);
    lv_obj_set_scroll_snap_x(lv_obj_1, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xe9c46a), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_obj_1, LV_OPA_COVER, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_buttonmatrix_0 = lv_btnmatrix_create(lv_obj_1);
    lv_btnmatrix_set_map(lv_buttonmatrix_0, btnmap);
    lv_obj_set_size(lv_buttonmatrix_0, 300, 470);
    lv_obj_set_align(lv_buttonmatrix_0, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(lv_buttonmatrix_0, lv_color_hex(0xe9c46a), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_buttonmatrix_0, LV_OPA_COVER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(lv_buttonmatrix_0, lv_color_hex(0xe9c46a), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_screen_create_event(lv_buttonmatrix_0, LV_EVENT_VALUE_CHANGED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");
    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

