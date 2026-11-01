void Draw()
{
    SetWorkingImage(&Map);
    cleardevice();
    for (int i = 0; i < FNUM; i++)
        food[i].draw();
    for (int i = 0; i < AINUM; i++)
        ai[i].draw();
    player->draw();

    setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 20);   改笔的颜色、状态
    setlinecolor(RGB(0, 100, 0));
    line((int)lx - 20, (int)ly - 20, (int)lx - 20, (int)ry + 20);     左竖
    line((int)lx - 20, (int)ly - 20, (int)rx + 20, (int)ly - 20);     上横
    line((int)lx - 20, (int)ry + 20, (int)rx + 20, (int)ry + 20);     下横
    line((int)rx + 20, (int)ly - 20, (int)rx + 20, (int)ry + 20);     右竖
    setlinestyle(PS_NULL);

    IMAGE map2;
    const float asptime = 1;
    getimage(&map2, (int)(player->x - WIDTH * .5 - player->r * asptime), (int)(player->y - HEIGHT * .5 - player->r * asptime),
        (int)(WIDTH + player->r * asptime * 2), (int)(HEIGHT + player->r * asptime * 2));
    float aspx = WIDTH / (WIDTH + player->r * 2);
    float aspy = HEIGHT / (HEIGHT + player->r * 2);
    SetWorkingImage();
    setaspectratio(aspx, aspy);
    putimage(0, 0, &map2);

    const int mapw = 180;
    const int maph = 130;
    IMAGE map((int)(mapw / aspx), (int)(maph / aspy));             小地图
    SetWorkingImage(&map);
    setbkcolor(RGB(120, 165, 209));    浅灰色背景
    cleardevice();

    for (int i = 0; i < AINUM; i++)   画 AI
    {
        if (ai[i].life == 0) continue;
        setfillcolor(ai[i].color);
        fillcircle((int)(ai[i].x * mapw / WIDTH / 4 / aspx), (int)(ai[i].y * maph / HEIGHT / 4 / aspy),
            int(((ai[i].r * 2) / (aspx + aspy)) / ((MAPH / HEIGHT) * (MAPH / HEIGHT)) - 0.5));
    }

    setfillcolor(player->color);      画玩家
    fillcircle((int)(player->x * mapw / WIDTH / 4 / aspx), (int)(player->y * maph / HEIGHT / 4 / aspy),
        int(((player->r * 2) / (aspx + aspy)) / ((MAPH / HEIGHT) * (MAPH / HEIGHT) - 0.5)));

    SetWorkingImage();
    putimage((int)(WIDTH - map.getwidth() + player->r * asptime * 2), 0, &map);
    setlinecolor(LIGHTGRAY);     改笔颜色   状态
    setlinestyle(PS_SOLID | PS_JOIN_BEVEL, (int)(3 / aspx));
    line(map2.getwidth() - map.getwidth(), 0, map2.getwidth() - map.getwidth(), map.getheight());
    line(map2.getwidth() - map.getwidth(), map.getheight(), map2.getwidth(), map.getheight());

    setlinestyle(PS_NULL);       恢复笔
    settextstyle((int)(40 / (aspx + aspy)), 0, _T("宋体"));
    TCHAR str[16];
    _stprintf_s(str, _T("质量:%.1f kg"), (float)(player->r * player->r * PI / 300));
    settextcolor(BLUE);          改字体
    outtextxy(0, 0, str);

}