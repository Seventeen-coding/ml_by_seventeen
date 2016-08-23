
#include "file_map.h"
#include "game/game_goble.h"
#include "game/game_debug.h"
#include "window/file/file_main_window.h"

struct{
    //map
    game_map_t *map;
    //window
    w_file_main_t *file_main_window;
    //window 2
    window_t *file_load_window;
    //window 3
    window_t *file_save_window;
}file_map;

int file_map_handle(void);
int file_map_show(void);
int file_map_select(char key);
int file_map_init();

game_map_t * file_map_get()
{
    if(file_map.map > 0)         return file_map.map;
    file_map_init();
    return file_map.map;
}

int file_map_init()
{
    if(file_map.map > 0) {
        return -1;
    }
    file_map.map  = (game_map_t * )malloc(sizeof(game_map_t));
    file_map.map->_init = file_map_init;
    file_map.map->_select = file_map_select;
    file_map.map->_show = file_map_show;

    file_map.file_main_window = window_create_file_main(NULL,0,0,40,40);

}
int file_map_show(void)
{
    system("cls");
    system("color 30");
    window_show_file_main(file_map.file_main_window);
}

int file_map_select(char key)
{
    return GAME_MAP_FINISH;
    return GAME_RUNNING;
}

//int file_handle(void)
//{

//}
void Show_Load_window()
{
    //应该是先读取存档表 然后显示
    system("cls");//清屏
    btdy("-","【读取档案】");
}

void Show_Save_window()
{
    system("cls");//清屏
    btdy("-","【档案存储】");
}


