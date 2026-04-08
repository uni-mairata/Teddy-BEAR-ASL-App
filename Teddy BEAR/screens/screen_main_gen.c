/**
 * @file screen_main_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_main_gen.h"
#include "../Teddy_BEAR.h"

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
    lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0xe1c786), 0);

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_width(lv_button_0, 40);
    lv_obj_set_height(lv_button_0, 40);
    lv_obj_set_x(lv_button_0, 15);
    lv_obj_set_y(lv_button_0, 8);
    lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0xf4a261), 0);
    lv_obj_set_style_border_color(lv_button_0, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_0, 2, 0);
    lv_obj_set_style_border_opa(lv_button_0, 80, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "");
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_1, "Tap a button to practice the ASL sign!");
    lv_obj_set_align(lv_label_1, LV_ALIGN_TOP_MID);
    lv_obj_set_x(lv_label_1, 25);
    lv_obj_set_y(lv_label_1, 16);
    lv_obj_set_width(lv_label_1, 240);
    lv_obj_set_height(lv_label_1, 40);
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x264653), 0);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_align(lv_obj_1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_width(lv_obj_1, 320);
    lv_obj_set_height(lv_obj_1, 190);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xe1c786), 0);
    lv_obj_set_style_border_color(lv_obj_1, lv_color_hex(0xe1c786), 0);
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_1, 0);
    lv_obj_set_y(lv_button_1, 5);
    lv_obj_set_width(lv_button_1, 50);
    lv_obj_set_height(lv_button_1, 50);
    lv_obj_set_style_bg_color(lv_button_1, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_1, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_1, 2, 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_2, "A");
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_1, &selected_letter, LV_EVENT_CLICKED, "A");
    lv_obj_add_screen_create_event(lv_button_1, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_2 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_2, 60);
    lv_obj_set_y(lv_button_2, 5);
    lv_obj_set_width(lv_button_2, 50);
    lv_obj_set_height(lv_button_2, 50);
    lv_obj_set_style_bg_color(lv_button_2, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_2, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_2, 2, 0);
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_2);
    lv_label_set_text(lv_label_3, "B");
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_2, &selected_letter, LV_EVENT_CLICKED, "B");
    lv_obj_add_screen_create_event(lv_button_2, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_3 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_3, 120);
    lv_obj_set_y(lv_button_3, 5);
    lv_obj_set_width(lv_button_3, 50);
    lv_obj_set_height(lv_button_3, 50);
    lv_obj_set_style_bg_color(lv_button_3, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_3, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_3, 2, 0);
    lv_obj_t * lv_label_4 = lv_label_create(lv_button_3);
    lv_label_set_text(lv_label_4, "C");
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_3, &selected_letter, LV_EVENT_CLICKED, "C");
    lv_obj_add_screen_create_event(lv_button_3, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_4 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_4, 180);
    lv_obj_set_y(lv_button_4, 5);
    lv_obj_set_width(lv_button_4, 50);
    lv_obj_set_height(lv_button_4, 50);
    lv_obj_set_style_bg_color(lv_button_4, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_4, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_4, 2, 0);
    lv_obj_t * lv_label_5 = lv_label_create(lv_button_4);
    lv_label_set_text(lv_label_5, "D");
    lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_4, &selected_letter, LV_EVENT_CLICKED, "D");
    lv_obj_add_screen_create_event(lv_button_4, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_5 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_5, 240);
    lv_obj_set_y(lv_button_5, 5);
    lv_obj_set_width(lv_button_5, 50);
    lv_obj_set_height(lv_button_5, 50);
    lv_obj_set_style_bg_color(lv_button_5, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_5, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_5, 2, 0);
    lv_obj_t * lv_label_6 = lv_label_create(lv_button_5);
    lv_label_set_text(lv_label_6, "E");
    lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_5, &selected_letter, LV_EVENT_CLICKED, "E");
    lv_obj_add_screen_create_event(lv_button_5, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_6 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_6, 0);
    lv_obj_set_y(lv_button_6, 60);
    lv_obj_set_width(lv_button_6, 50);
    lv_obj_set_height(lv_button_6, 50);
    lv_obj_set_style_bg_color(lv_button_6, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_6, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_6, 2, 0);
    lv_obj_t * lv_label_7 = lv_label_create(lv_button_6);
    lv_label_set_text(lv_label_7, "F");
    lv_obj_set_align(lv_label_7, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_6, &selected_letter, LV_EVENT_CLICKED, "F");
    lv_obj_add_screen_create_event(lv_button_6, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_7 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_7, 60);
    lv_obj_set_y(lv_button_7, 60);
    lv_obj_set_width(lv_button_7, 50);
    lv_obj_set_height(lv_button_7, 50);
    lv_obj_set_style_bg_color(lv_button_7, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_7, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_7, 2, 0);
    lv_obj_t * lv_label_8 = lv_label_create(lv_button_7);
    lv_label_set_text(lv_label_8, "G");
    lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_7, &selected_letter, LV_EVENT_CLICKED, "G");
    lv_obj_add_screen_create_event(lv_button_7, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_8 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_8, 120);
    lv_obj_set_y(lv_button_8, 60);
    lv_obj_set_width(lv_button_8, 50);
    lv_obj_set_height(lv_button_8, 50);
    lv_obj_set_style_bg_color(lv_button_8, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_8, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_8, 2, 0);
    lv_obj_t * lv_label_9 = lv_label_create(lv_button_8);
    lv_label_set_text(lv_label_9, "H");
    lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_8, &selected_letter, LV_EVENT_CLICKED, "H");
    lv_obj_add_screen_create_event(lv_button_8, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_9 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_9, 180);
    lv_obj_set_y(lv_button_9, 60);
    lv_obj_set_width(lv_button_9, 50);
    lv_obj_set_height(lv_button_9, 50);
    lv_obj_set_style_bg_color(lv_button_9, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_9, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_9, 2, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_button_9);
    lv_label_set_text(lv_label_10, "I");
    lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_9, &selected_letter, LV_EVENT_CLICKED, "I");
    lv_obj_add_screen_create_event(lv_button_9, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_10 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_10, 240);
    lv_obj_set_y(lv_button_10, 60);
    lv_obj_set_width(lv_button_10, 50);
    lv_obj_set_height(lv_button_10, 50);
    lv_obj_set_style_bg_color(lv_button_10, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_10, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_10, 2, 0);
    lv_obj_t * lv_label_11 = lv_label_create(lv_button_10);
    lv_label_set_text(lv_label_11, "J");
    lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_10, &selected_letter, LV_EVENT_CLICKED, "J");
    lv_obj_add_screen_create_event(lv_button_10, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_11 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_11, 0);
    lv_obj_set_y(lv_button_11, 115);
    lv_obj_set_width(lv_button_11, 50);
    lv_obj_set_height(lv_button_11, 50);
    lv_obj_set_style_bg_color(lv_button_11, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_11, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_11, 2, 0);
    lv_obj_t * lv_label_12 = lv_label_create(lv_button_11);
    lv_label_set_text(lv_label_12, "K");
    lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_11, &selected_letter, LV_EVENT_CLICKED, "K");
    lv_obj_add_screen_create_event(lv_button_11, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_12 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_12, 60);
    lv_obj_set_y(lv_button_12, 115);
    lv_obj_set_width(lv_button_12, 50);
    lv_obj_set_height(lv_button_12, 50);
    lv_obj_set_style_bg_color(lv_button_12, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_12, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_12, 2, 0);
    lv_obj_t * lv_label_13 = lv_label_create(lv_button_12);
    lv_label_set_text(lv_label_13, "L");
    lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_12, &selected_letter, LV_EVENT_CLICKED, "L");
    lv_obj_add_screen_create_event(lv_button_12, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_13 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_13, 120);
    lv_obj_set_y(lv_button_13, 115);
    lv_obj_set_width(lv_button_13, 50);
    lv_obj_set_height(lv_button_13, 50);
    lv_obj_set_style_bg_color(lv_button_13, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_13, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_13, 2, 0);
    lv_obj_t * lv_label_14 = lv_label_create(lv_button_13);
    lv_label_set_text(lv_label_14, "M");
    lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_13, &selected_letter, LV_EVENT_CLICKED, "M");
    lv_obj_add_screen_create_event(lv_button_13, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_14 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_14, 180);
    lv_obj_set_y(lv_button_14, 115);
    lv_obj_set_width(lv_button_14, 50);
    lv_obj_set_height(lv_button_14, 50);
    lv_obj_set_style_bg_color(lv_button_14, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_14, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_14, 2, 0);
    lv_obj_t * lv_label_15 = lv_label_create(lv_button_14);
    lv_label_set_text(lv_label_15, "N");
    lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_14, &selected_letter, LV_EVENT_CLICKED, "N");
    lv_obj_add_screen_create_event(lv_button_14, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_15 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_15, 240);
    lv_obj_set_y(lv_button_15, 115);
    lv_obj_set_width(lv_button_15, 50);
    lv_obj_set_height(lv_button_15, 50);
    lv_obj_set_style_bg_color(lv_button_15, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_15, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_15, 2, 0);
    lv_obj_t * lv_label_16 = lv_label_create(lv_button_15);
    lv_label_set_text(lv_label_16, "O");
    lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_15, &selected_letter, LV_EVENT_CLICKED, "O");
    lv_obj_add_screen_create_event(lv_button_15, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_16 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_16, 0);
    lv_obj_set_y(lv_button_16, 170);
    lv_obj_set_width(lv_button_16, 50);
    lv_obj_set_height(lv_button_16, 50);
    lv_obj_set_style_bg_color(lv_button_16, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_16, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_16, 2, 0);
    lv_obj_t * lv_label_17 = lv_label_create(lv_button_16);
    lv_label_set_text(lv_label_17, "P");
    lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_16, &selected_letter, LV_EVENT_CLICKED, "P");
    lv_obj_add_screen_create_event(lv_button_16, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_17 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_17, 60);
    lv_obj_set_y(lv_button_17, 170);
    lv_obj_set_width(lv_button_17, 50);
    lv_obj_set_height(lv_button_17, 50);
    lv_obj_set_style_bg_color(lv_button_17, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_17, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_17, 2, 0);
    lv_obj_t * lv_label_18 = lv_label_create(lv_button_17);
    lv_label_set_text(lv_label_18, "Q");
    lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_17, &selected_letter, LV_EVENT_CLICKED, "Q");
    lv_obj_add_screen_create_event(lv_button_17, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_18 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_18, 120);
    lv_obj_set_y(lv_button_18, 170);
    lv_obj_set_width(lv_button_18, 50);
    lv_obj_set_height(lv_button_18, 50);
    lv_obj_set_style_bg_color(lv_button_18, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_18, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_18, 2, 0);
    lv_obj_t * lv_label_19 = lv_label_create(lv_button_18);
    lv_label_set_text(lv_label_19, "R");
    lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_18, &selected_letter, LV_EVENT_CLICKED, "R");
    lv_obj_add_screen_create_event(lv_button_18, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_19 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_19, 180);
    lv_obj_set_y(lv_button_19, 170);
    lv_obj_set_width(lv_button_19, 50);
    lv_obj_set_height(lv_button_19, 50);
    lv_obj_set_style_bg_color(lv_button_19, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_19, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_19, 2, 0);
    lv_obj_t * lv_label_20 = lv_label_create(lv_button_19);
    lv_label_set_text(lv_label_20, "S");
    lv_obj_set_align(lv_label_20, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_19, &selected_letter, LV_EVENT_CLICKED, "S");
    lv_obj_add_screen_create_event(lv_button_19, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_20 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_20, 240);
    lv_obj_set_y(lv_button_20, 170);
    lv_obj_set_width(lv_button_20, 50);
    lv_obj_set_height(lv_button_20, 50);
    lv_obj_set_style_bg_color(lv_button_20, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_20, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_20, 2, 0);
    lv_obj_t * lv_label_21 = lv_label_create(lv_button_20);
    lv_label_set_text(lv_label_21, "T");
    lv_obj_set_align(lv_label_21, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_20, &selected_letter, LV_EVENT_CLICKED, "T");
    lv_obj_add_screen_create_event(lv_button_20, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_21 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_21, 0);
    lv_obj_set_y(lv_button_21, 225);
    lv_obj_set_width(lv_button_21, 50);
    lv_obj_set_height(lv_button_21, 50);
    lv_obj_set_style_bg_color(lv_button_21, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_21, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_21, 2, 0);
    lv_obj_t * lv_label_22 = lv_label_create(lv_button_21);
    lv_label_set_text(lv_label_22, "U");
    lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_21, &selected_letter, LV_EVENT_CLICKED, "U");
    lv_obj_add_screen_create_event(lv_button_21, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_22 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_22, 60);
    lv_obj_set_y(lv_button_22, 225);
    lv_obj_set_width(lv_button_22, 50);
    lv_obj_set_height(lv_button_22, 50);
    lv_obj_set_style_bg_color(lv_button_22, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_22, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_22, 2, 0);
    lv_obj_t * lv_label_23 = lv_label_create(lv_button_22);
    lv_label_set_text(lv_label_23, "V");
    lv_obj_set_align(lv_label_23, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_22, &selected_letter, LV_EVENT_CLICKED, "V");
    lv_obj_add_screen_create_event(lv_button_22, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_23 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_23, 120);
    lv_obj_set_y(lv_button_23, 225);
    lv_obj_set_width(lv_button_23, 50);
    lv_obj_set_height(lv_button_23, 50);
    lv_obj_set_style_bg_color(lv_button_23, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_23, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_23, 2, 0);
    lv_obj_t * lv_label_24 = lv_label_create(lv_button_23);
    lv_label_set_text(lv_label_24, "W");
    lv_obj_set_align(lv_label_24, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_23, &selected_letter, LV_EVENT_CLICKED, "W");
    lv_obj_add_screen_create_event(lv_button_23, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_24 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_24, 180);
    lv_obj_set_y(lv_button_24, 225);
    lv_obj_set_width(lv_button_24, 50);
    lv_obj_set_height(lv_button_24, 50);
    lv_obj_set_style_bg_color(lv_button_24, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_24, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_24, 2, 0);
    lv_obj_t * lv_label_25 = lv_label_create(lv_button_24);
    lv_label_set_text(lv_label_25, "X");
    lv_obj_set_align(lv_label_25, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_24, &selected_letter, LV_EVENT_CLICKED, "X");
    lv_obj_add_screen_create_event(lv_button_24, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_25 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_25, 240);
    lv_obj_set_y(lv_button_25, 225);
    lv_obj_set_width(lv_button_25, 50);
    lv_obj_set_height(lv_button_25, 50);
    lv_obj_set_style_bg_color(lv_button_25, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_25, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_25, 2, 0);
    lv_obj_t * lv_label_26 = lv_label_create(lv_button_25);
    lv_label_set_text(lv_label_26, "Y");
    lv_obj_set_align(lv_label_26, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_25, &selected_letter, LV_EVENT_CLICKED, "Y");
    lv_obj_add_screen_create_event(lv_button_25, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * lv_button_26 = lv_button_create(lv_obj_1);
    lv_obj_set_x(lv_button_26, 0);
    lv_obj_set_y(lv_button_26, 280);
    lv_obj_set_width(lv_button_26, 50);
    lv_obj_set_height(lv_button_26, 50);
    lv_obj_set_style_bg_color(lv_button_26, lv_color_hex(0x2a9d8f), 0);
    lv_obj_set_style_border_color(lv_button_26, lv_color_hex(0x264653), 0);
    lv_obj_set_style_border_width(lv_button_26, 2, 0);
    lv_obj_t * lv_label_27 = lv_label_create(lv_button_26);
    lv_label_set_text(lv_label_27, "Z");
    lv_obj_set_align(lv_label_27, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_string_event(lv_button_26, &selected_letter, LV_EVENT_CLICKED, "Z");
    lv_obj_add_screen_create_event(lv_button_26, LV_EVENT_CLICKED, screen_feedback_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

