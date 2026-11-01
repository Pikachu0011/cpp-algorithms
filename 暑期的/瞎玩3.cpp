//#include<stdio.h>
//#include<easyx.h>
//#include<conio.h>
//#include<time.h>
//#include<math.h>
//#include<stdlib.h>
//#include<bits/stdc++.h>
//
//struct Point {
//	double x, y;
//	COLORREF color;
//};
//COLORREF colors[256] = {
//	RGB(255, 105, 180),
//	RGB(218, 112, 214),
//	RGB(255, 182, 193),
//	RGB(238, 130, 238),
//	RGB(255, 20, 147),
//	RGB(199, 21, 133),
//	RGB(255, 160, 122)
//};
//
//const int xScreen = 1200;
//const int yScreen = 800;
//
//const double PI = 3.1415926535;
//const double e = 2.71828;
//
//const double average_distance = 0.162;//粒子间距
//const int quantity = 506;//粒子数量
//const int circles = 210;//扩散圈数
//const int frames = 20;//动画帧数
//
//Point origin_points[quantity];
//Point points[circles * quantity];
//
//IMAGE images[frames];
//double screen_x(double x) {
//	return x + xScreen / 2;
//}
//double screen_y(double y) {
//	return -y + yScreen / 2;
//}
//int create_random(int x1, int x2) {
//	if (x2 > x1)return rand() % (x2 - x1 + 1) + x1;
//	return x1;
//}
//void create_data() {
//	int index = 0;
//	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
//	for (double radian = 0.1; radian <= 2 * PI; radian += 0.005) {
//		x2 = 16 * (pow(sin(radian), 3));
//		y2 = 13 * cos(radian) - 5 * cos(2 * radian) - 2 * cos(3 * radian) - cos(4 * radian);
//		double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//		if (distance > average_distance) {
//			x1 = x2, y1 = y2;
//			origin_points[index].x = x2;
//			origin_points[index].y = y2;
//			index++;
//		}
//	}
//	index = 0;
//	for (double size = 0.1, lightness = 1.4; size <= 20; size += 0.1) {
//		double success_p = 1 / (1 + pow(e, 8 - size / 2));
//		if (lightness > 1)lightness -= 0.0025;
//
//		for (int i = 0; i < quantity; i++) {
//			if (success_p > create_random(0, 100) / 100.0) {
//				COLORREF color = colors[create_random(0, 6)];
//				points[index].color = RGB(
//					GetRValue(color) / lightness,
//					GetGValue(color) / lightness,
//					GetBValue(color) / lightness
//				);
//				points[index].x = size * origin_points[i].x + create_random(-4, 4);
//				points[index].y = size * origin_points[i].y + create_random(-4, 4);
//			}
//
//		}
//	}
//	int points_size = index;
//	for (int frame = 0; frame < frames; frame++) {
//		images[frame] = IMAGE(xScreen, yScreen);
//		SetWorkingImage(&images[frame]);
//
//		for (index = 0; index < points_size; index++) {
//			double x = points[index].x, y = points[index].y;
//			double distance = sqrt(x * x + y * y);
//			double distance_increase = -0.0009 * distance * distance + 0.35714 * distance + 5;
//
//			double x_increase = distance_increase * x / distance / frames;
//			double y_increase = distance_increase * y / distance / frames;
//
//			points[index].x += x_increase;
//			points[index].y += y_increase;
//
//			setfillcolor(points[index].color);
//			solidcircle(screen_x(points[index].x), screen_y(points[index].y), 1);
//		}
//
//		for (double size = 17; size < 23; size += 0.3) {
//			for (index = 0; index < quantity; ++index) {
//				if ((create_random(0, 100) / 100.0 > 0.6 && size >= 20) || (size < 20 && create_random(0, 100) / 100.0 > 0.95)) {
//					double x, y;
//
//					if (size > 20) {
//						x = origin_points[index].x * size + create_random(-frame * frame / 5 - 15, frame * frame / 5 - 15);
//						y = origin_points[index].y * size + create_random(-frame * frame / 5 - 15, frame * frame / 5 - 15);
//					}
//					else {
//						x = origin_points[index].x * size + create_random(-5, 5);
//						y = origin_points[index].y * size + create_random(-5, 5);
//					}
//					setfillcolor(colors[create_random(0, 6)]);
//					solidcircle(screen_x(x), screen_y(y), 1);
//				}
//			}
//		}
//	}
//	SetWorkingImage();
//
//
//
//}
//
//int main() {
//	initgraph(xScreen, yScreen);
//	BeginBatchDraw();
//	srand(time(0));
//
//	create_data();
//	
//	bool extend = true, shrink = false;
//	for (int frame = 0; !_kbhit();) {
//		putimage(0, 0, &images[frame]);
//		FlushBatchDraw();
//		Sleep(40);
//		cleardevice();
//
//		if (extend) {
//			if (frame == 19) {
//				shrink = true, extend = false;
//			}
//			else ++frame;
//		}
//		else {
//			if (frame == 0) {
//				shrink = false, extend = true;
//			}
//			else --frame;
//		}
//
//	}
//
//	EndBatchDraw();
//	closegraph();
//
//
//	return 0;
//}