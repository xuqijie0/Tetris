namespace tc{// terminal contral
    void move_to(int row, int col);     //  光标移动到第row行，第col列
    void set_fore_color(int id);        //  设置字体颜色
    void set_back_color(int id);        //  设置背景颜色
    void clean_screen();    
    void reset_color();
}