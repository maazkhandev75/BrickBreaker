#include<iostream>
#include <conio.h>
#include"yourgraphics.h"
#include <fstream>
using namespace std;
//for initial stage.
void yellow_corners() {
	drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
	drawRectangle(588, 25, 613, 50, 0, 0, 0, 255, 200, 0);
	drawRectangle(588, 536, 613, 560, 0, 0, 0, 255, 200, 0);
	drawRectangle(0, 538, 25, 560, 0, 0, 0, 255, 200, 0);
}

void top_wall() {
	for (int i = 3; i < 63; i++) {
		drawRectangle(10 * i - 6, 25, 20 * i - 6, 50, 0, 0, 0, 140, 0, 0);
		delay(1);
	}
}
void left_wall() {
	for (int i = 55; i > -1; i--) {

		drawRectangle(0, 10 * i + 25, 25, 10 * i + 50, 0, 0, 0, 140, 0, 0);
		delay(3);
	}
}
void right_wall() {
	for (int i = 0; i < 54; i++) {
		drawRectangle(588, 10 * i + 25, 613, 10 * i + 50, 0, 0, 0, 140, 0, 0);
		delay(3);
	}
}

//for slate printing and removal.//divided into two normal and and small slate in middle.
void draw_slate(int m) {
	drawRectangle(m * 10 - 5, 531, m * 10 + 35, 537, 100, 100, 100, 100, 100, 100);
	drawRectangle(m * 10 + 35, 531, m * 10 + 37, 537, 100, 100, 100, 100, 100, 100);
	drawRectangle(m * 10 + 37, 531, m * 10 + 77, 537, 100, 100, 100, 100, 100, 100);
}
void remove_slate(int m) {
	drawRectangle(m * 10 - 5, 531, m * 10 + 35, 537, 12, 12, 12, 12, 12, 12);
	drawRectangle(m * 10 + 35, 531, m * 10 + 37, 537, 12, 12, 12, 12, 12, 12);
	drawRectangle(m * 10 + 37, 531, m * 10 + 77, 537, 12, 12, 12, 12, 12, 12);
}
//for ball printing and removal.
void ellipse_draw(int o, int p) {
	drawEllipse(o * 10 + 36, p * 10, o * 10 + 46, p * 10 + 10, 200, 200, 200, 200, 200, 200);
}
void ellipse_remove(int o, int p) {
	drawEllipse(o * 10 + 36, p * 10, o * 10 + 46, p * 10 + 10, 12, 12, 12, 12, 12, 12);
}
//for printing bricks.
void R1() {
	drawRectangle(26, 50, 82, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(83, 50, 139, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(140, 50, 196, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(197, 50, 253, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(254, 50, 310, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(311, 50, 367, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(368, 50, 424, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(425, 50, 481, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(482, 50, 538, 67, 100, 100, 100, 220, 190, 220);
	drawRectangle(539, 50, 587, 67, 100, 100, 100, 220, 190, 220);
}
void R2() {
	drawRectangle(26, 68, 82, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(83, 68, 139, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(140, 68, 196, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(197, 68, 253, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(254, 68, 310, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(311, 68, 367, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(368, 68, 424, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(425, 68, 481, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(482, 68, 538, 85, 100, 100, 100, 240, 0, 0);
	drawRectangle(539, 68, 587, 85, 100, 100, 100, 240, 0, 0);
}
void R3() {
	drawRectangle(26, 86, 82, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(83, 86, 139, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(140, 86, 196, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(197, 86, 253, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(254, 86, 310, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(311, 86, 367, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(368, 86, 424, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(425, 86, 481, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(482, 86, 538, 103, 100, 100, 100, 20, 210, 120);
	drawRectangle(539, 86, 587, 103, 100, 100, 100, 20, 210, 120);
}
void R4() {
	drawRectangle(26, 101, 82, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(83, 101, 139, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(140, 101, 196, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(197, 101, 253, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(254, 101, 310, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(311, 101, 367, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(368, 101, 424, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(425, 101, 481, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(482, 101, 538, 118, 100, 100, 100, 12, 50, 220);
	drawRectangle(539, 101, 587, 118, 100, 100, 100, 12, 50, 220);
}
void R5() {
	drawRectangle(26, 119, 82, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(83, 119, 139, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(140, 119, 196, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(197, 119, 253, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(254, 119, 310, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(311, 119, 367, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(368, 119, 424, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(425, 119, 481, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(482, 119, 538, 136, 100, 100, 100, 12, 210, 220);
	drawRectangle(539, 119, 587, 136, 100, 100, 100, 12, 210, 220);
}
//for breaking of bricks.
void remove_brick(int x1, int y1, int x2, int y2) {
	drawRectangle(x1, y1, x2, y2, 12, 12, 12, 12, 12, 12);
}







int main()
{

	int w = 0, h = 0;
	getWindowDimensions(w, h);
	cls();
	showConsoleCursor(false);
	cout << "\n\n\n\n\n\n\n\n\n\n\n                   --------------------------\n                   |   BRICK SMASHER GAME   |                   \n                   --------------------------";

	delay(2200);
	cls();
	gotoxy(0, 0);
	bool flag = true;
	char option;

	//menu while loop.
	while (flag) {
		cout << "\n\n\n\n\n\n              ---------------(MAIN MENU)---------------";
		cout << "\n\n\nSELECT AN OPTION : \n";
		cout << "         1) PLAY GAME\n";
		cout << "         2) HIGH SCORE RECORD\n";
		cout << "         3) CONTROLS AND INSTRUCTIONS\n";
		cout << "         4) CREDIT\n";
		cout << "         5) EXIT GAME\n\n\n";
		delay(900);

		cout << "OPTION : ";
		cin >> option;
		while (option != '1' && option != '2' && option != '3' && option != '4' && option != '5') {
			cout << "// invalid input....";
			cout << "\n\n\nSELECT AN OPTION : \n";
			cout << "         1) PLAY GAME\n";
			cout << "         2) HIGH SCORE RECORD\n";
			cout << "         3) CONTROLS AND INSTRUCTIONS\n";
			cout << "         4) CREDIT\n";
			cout << "         5) EXIT GAME\n\n\n";
			delay(100);

			cout << "option : ";
			cin >> option;
		}

		if (option == '1') {

			cls();
			gotoxy(0, 0);
			for (int i = 0; i < 700; i++) {
				drawRectangle(0, 0, 1+ i, 700,0,200,0,0,200,0);
				
			}
			cls();
			cout << "\n\n\n                           (PRESS)";
			cout << "\n\n\n\n         n => NEW GAME\n ";
			cout << "\n         l => LOAD GAME\n ";

			delay(2500);

			cls();
			gotoxy(0, 0);
			int score = 0;
			bool sign = false;
			bool banner = false;
			bool mark = false;
			int lives = 3;
			int death_count = 0;

			char load = _getch();
		

			cls();
			gotoxy(0, 0);
			//outlining lives
			drawRectangle(553, 2, 612, 22, 20, 90, 22, 20, 90, 22);
			if (load == 'n') {
				cout << "Score = " << score;
			}
			if (load == 'l') {
				cout << "score = " << "calculating.....";
			}

			//boundary walls.
			left_wall();
			top_wall();
			right_wall();
			//bottom most line.
			drawLine(24, 556, 588, 556, 160);
			//corners of yellow colour.
			yellow_corners();
			//printing bricks.
			R1();
			R2();
			R3();
			R4();
			R5();

			//all bools.
			bool game_play = true;
			bool left_wall = false;
			bool right_wall = false;
			bool top_wall = false;
			bool left_def = false;
			bool right_def = false;
			bool top_def = false;
			bool ball_up = false;
			bool ball_down = true;
			bool bat = false;
			bool left_hit_roof = false;   //roof se left pr hit kara gi
			bool right_hit_roof = false;  //roof se right pr hit kara gi
			bool straight_hit_roof = false;
			bool lose = false;
			bool left_brick = false;
			bool right_brick = false;
			bool down_brick = false;
			bool up_brick = false;
			bool def_left_brick = false;
			bool def_right_brick = false;
			bool history_brick_11 = true;
			bool history_brick_12 = true;
			bool history_brick_13 = true;
			bool history_brick_14 = true;
			bool history_brick_15 = true;
			bool history_brick_16 = true;
			bool history_brick_17 = true;
			bool history_brick_18 = true;
			bool history_brick_19 = true;
			bool history_brick_110 = true;
			bool history_brick_21 = true;
			bool history_brick_22 = true;
			bool history_brick_23 = true;
			bool history_brick_24 = true;
			bool history_brick_25 = true;
			bool history_brick_26 = true;
			bool history_brick_27 = true;
			bool history_brick_28 = true;
			bool history_brick_29 = true;
			bool history_brick_210 = true;
			bool history_brick_31 = true;
			bool history_brick_32 = true;
			bool history_brick_33 = true;
			bool history_brick_34 = true;
			bool history_brick_35 = true;
			bool history_brick_36 = true;
			bool history_brick_37 = true;
			bool history_brick_38 = true;
			bool history_brick_39 = true;
			bool history_brick_310 = true;
			bool history_brick_41 = true;
			bool history_brick_42 = true;
			bool history_brick_43 = true;
			bool history_brick_44 = true;
			bool history_brick_45 = true;
			bool history_brick_46 = true;
			bool history_brick_47 = true;
			bool history_brick_48 = true;
			bool history_brick_49 = true;
			bool history_brick_410 = true;
			bool history_brick_51 = true;
			bool history_brick_52 = true;
			bool history_brick_53 = true;
			bool history_brick_54 = true;
			bool history_brick_55 = true;
			bool history_brick_56 = true;
			bool history_brick_57 = true;
			bool history_brick_58 = true;
			bool history_brick_59 = true;
			bool history_brick_510 = true;

			//variables for bat and ball respectively.
			int m = 25;   //for slate 
			int o = 25, p = 20;   //for ball
			int c1 = 4;
			int c2 = 4;
			int c3 = 4;
			int c4 = 4;
			int c5 = 4;
			int c6 = 4;
			int c7 = 4;
			int c8 = 4;
			int c9 = 4;
			int c10 = 4;
			bool signal1 = true;
			bool signal2 = true;
			bool signal3 = true;
			bool signal4 = true;
			bool signal5 = true;
			bool signal6 = true;
			bool signal7 = true;
			bool signal8 = true;
			bool signal9 = true;
			bool signal10 = true;


			if (load == 'n') {
				ifstream data_output("new.txt");
				data_output >> history_brick_11;
				data_output >> history_brick_12;
				data_output >> history_brick_13;
				data_output >> history_brick_14;
				data_output >> history_brick_15;
				data_output >> history_brick_16;
				data_output >> history_brick_17;
				data_output >> history_brick_18;
				data_output >> history_brick_19;
				data_output >> history_brick_110;
				data_output >> history_brick_21;
				data_output >> history_brick_22;
				data_output >> history_brick_23;
				data_output >> history_brick_24;
				data_output >> history_brick_25;
				data_output >> history_brick_26;
				data_output >> history_brick_27;
				data_output >> history_brick_28;
				data_output >> history_brick_29;
				data_output >> history_brick_210;
				data_output >> history_brick_31;
				data_output >> history_brick_32;
				data_output >> history_brick_33;
				data_output >> history_brick_34;
				data_output >> history_brick_35;
				data_output >> history_brick_36;
				data_output >> history_brick_37;
				data_output >> history_brick_38;
				data_output >> history_brick_39;
				data_output >> history_brick_310;
				data_output >> history_brick_41;
				data_output >> history_brick_42;
				data_output >> history_brick_43;
				data_output >> history_brick_44;
				data_output >> history_brick_45;
				data_output >> history_brick_46;
				data_output >> history_brick_47;
				data_output >> history_brick_48;
				data_output >> history_brick_49;
				data_output >> history_brick_410;
				data_output >> history_brick_51;
				data_output >> history_brick_52;
				data_output >> history_brick_53;
				data_output >> history_brick_54;
				data_output >> history_brick_55;
				data_output >> history_brick_56;
				data_output >> history_brick_57;
				data_output >> history_brick_58;
				data_output >> history_brick_59;
				data_output >> history_brick_510;
				data_output >> lives;
				data_output >> score;
				data_output >> death_count;
				data_output >> lose;
				data_output >> o;
				data_output >> p;
				data_output >> m;
				data_output >> left_wall;
				data_output >> right_wall;
				data_output >> top_wall;
				data_output >> left_def;
				data_output >> right_def;
				data_output >> top_def;
				data_output >> ball_up;
				data_output >> ball_down;
				data_output >> bat;
				data_output >> left_hit_roof;   //roof se left pr hit kara gi
				data_output >> right_hit_roof;  //roof se right pr hit kara gi
				data_output >> straight_hit_roof;
				data_output >> lose;
				data_output >> left_brick;
				data_output >> right_brick;
				data_output >> down_brick;
				data_output >> up_brick;
				data_output >> def_left_brick;
				data_output >> def_right_brick;
			}
			//loading game(reading a file).
			if (load == 'l')
			{
				ifstream data_output("save.txt");
				data_output >> history_brick_11;
				data_output >> history_brick_12;
				data_output >> history_brick_13;
				data_output >> history_brick_14;
				data_output >> history_brick_15;
				data_output >> history_brick_16;
				data_output >> history_brick_17;
				data_output >> history_brick_18;
				data_output >> history_brick_19;
				data_output >> history_brick_110;
				data_output >> history_brick_21;
				data_output >> history_brick_22;
				data_output >> history_brick_23;
				data_output >> history_brick_24;
				data_output >> history_brick_25;
				data_output >> history_brick_26;
				data_output >> history_brick_27;
				data_output >> history_brick_28;
				data_output >> history_brick_29;
				data_output >> history_brick_210;
				data_output >> history_brick_31;
				data_output >> history_brick_32;
				data_output >> history_brick_33;
				data_output >> history_brick_34;
				data_output >> history_brick_35;
				data_output >> history_brick_36;
				data_output >> history_brick_37;
				data_output >> history_brick_38;
				data_output >> history_brick_39;
				data_output >> history_brick_310;
				data_output >> history_brick_41;
				data_output >> history_brick_42;
				data_output >> history_brick_43;
				data_output >> history_brick_44;
				data_output >> history_brick_45;
				data_output >> history_brick_46;
				data_output >> history_brick_47;
				data_output >> history_brick_48;
				data_output >> history_brick_49;
				data_output >> history_brick_410;
				data_output >> history_brick_51;
				data_output >> history_brick_52;
				data_output >> history_brick_53;
				data_output >> history_brick_54;
				data_output >> history_brick_55;
				data_output >> history_brick_56;
				data_output >> history_brick_57;
				data_output >> history_brick_58;
				data_output >> history_brick_59;
				data_output >> history_brick_510;
				data_output >> lives;
				data_output >> score;
				data_output >> death_count;
				data_output >> lose;
				data_output >> o;
				data_output >> p;
				data_output >> m;
				data_output >> c1;
				data_output >> c2;
				data_output >> c3;
				data_output >> c4;
				data_output >> c5;
				data_output >> c6;
				data_output >> c7;
				data_output >> c8;
				data_output >> c9;
				data_output >> c10;
				data_output >> signal1;
				data_output >> signal2;
				data_output >> signal3;
				data_output >> signal4;
				data_output >> signal5;
				data_output >> signal6;
				data_output >> signal7;
				data_output >> signal8;
				data_output >> signal9;
				data_output >> signal10;
				data_output >> left_wall;
				data_output >> right_wall;
				data_output >> top_wall;
				data_output >> left_def;
				data_output >> right_def;
				data_output >> top_def;
				data_output >> ball_up;
				data_output >> ball_down;
				data_output >> bat;
				data_output >> left_hit_roof;   //roof se left pr hit kara gi
				data_output >> right_hit_roof;  //roof se right pr hit kara gi
				data_output >> straight_hit_roof;
				data_output >> lose;
				data_output >> left_brick;
				data_output >> right_brick;
				data_output >> down_brick;
				data_output >> up_brick;
				data_output >> def_left_brick;
				data_output >> def_right_brick;
			}

			//----------------------------------------------------------------
			if (!history_brick_11) {
				remove_brick(26, 50, 82, 67);
			}
			if (!history_brick_12) {
				remove_brick(83, 50, 139, 67);
			}
			if (!history_brick_13) {
				remove_brick(140, 50, 196, 67);
			}
			if (!history_brick_14) {
				remove_brick(197, 50, 253, 67);
			}
			if (!history_brick_15) {
				remove_brick(254, 50, 310, 67);
			}
			if (!history_brick_16) {
				remove_brick(311, 50, 367, 67);
			}
			if (!history_brick_17) {
				remove_brick(368, 50, 424, 67);
			}
			if (!history_brick_18) {
				remove_brick(425, 50, 481, 67);
			}
			if (!history_brick_19) {
				remove_brick(482, 50, 538, 67);
			}
			if (!history_brick_110) {
				remove_brick(539, 50, 587, 67);
			}
			if (!history_brick_21) {
				remove_brick(26, 68, 82, 85);
			}
			if (!history_brick_22) {
				remove_brick(83, 68, 139, 85);
			}
			if (!history_brick_23) {
				remove_brick(140, 68, 196, 85);
			}
			if (!history_brick_24) {
				remove_brick(197, 68, 253, 85);
			}
			if (!history_brick_25) {
				remove_brick(254, 68, 310, 85);
			}
			if (!history_brick_26) {
				remove_brick(311, 68, 367, 85);
			}
			if (!history_brick_27) {
				remove_brick(368, 68, 424, 85);
			}
			if (!history_brick_28) {
				remove_brick(425, 68, 481, 85);
			}
			if (!history_brick_29) {
				remove_brick(482, 68, 538, 85);
			}
			if (!history_brick_210) {
				remove_brick(539, 68, 587, 85);
			}
			if (!history_brick_31) {
				remove_brick(26, 86, 82, 103);
			}
			if (!history_brick_32) {
				remove_brick(83, 86, 139, 103);
			}
			if (!history_brick_33) {
				remove_brick(140, 86, 196, 103);
			}
			if (!history_brick_34) {
				remove_brick(197, 86, 253, 103);
			}
			if (!history_brick_35) {
				remove_brick(254, 86, 310, 103);
			}
			if (!history_brick_36) {
				remove_brick(311, 86, 367, 103);
			}
			if (!history_brick_37) {
				remove_brick(368, 86, 424, 103);
			}
			if (!history_brick_38) {
				remove_brick(425, 86, 481, 103);
			}
			if (!history_brick_39) {
				remove_brick(482, 86, 538, 103);
			}
			if (!history_brick_310) {
				remove_brick(539, 86, 587, 103);
			}
			if (!history_brick_41) {
				remove_brick(26, 101, 82, 118);
			}

			if (!history_brick_42) {
				remove_brick(83, 101, 139, 118);
			}
			if (!history_brick_43) {
				remove_brick(140, 101, 196, 118);
			}
			if (!history_brick_44) {
				remove_brick(197, 101, 253, 118);
			}
			if (!history_brick_45) {
				remove_brick(254, 101, 310, 118);
			}
			if (!history_brick_46) {
				remove_brick(311, 101, 367, 118);
			}
			if (!history_brick_47) {
				remove_brick(368, 101, 424, 118);
			}
			if (!history_brick_48) {
				remove_brick(425, 101, 481, 118);
			}
			if (!history_brick_49) {
				remove_brick(482, 101, 538, 118);
			}
			if (!history_brick_410) {
				remove_brick(539, 101, 587, 118);
			}
			if (!history_brick_51) {
				remove_brick(26, 119, 82, 136);
			}
			if (!history_brick_52) {
				remove_brick(83, 119, 139, 136);
			}
			if (!history_brick_53) {
				remove_brick(140, 119, 196, 136);
			}
			if (!history_brick_54) {
				remove_brick(197, 119, 253, 136);
			}
			if (!history_brick_55) {
				remove_brick(254, 119, 310, 136);
			}
			if (!history_brick_56) {
				remove_brick(311, 119, 367, 136);
			}
			if (!history_brick_57) {
				remove_brick(368, 119, 424, 136);
			}
			if (!history_brick_58) {
				remove_brick(425, 119, 481, 136);
			}
			if (!history_brick_59) {
				remove_brick(482, 119, 538, 136);
			}
			if (!history_brick_510) {
				remove_brick(539, 119, 587, 136);
			}


			if (c1 == 3 && signal1 == false) {
				drawRectangle(26, 119, 82, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c1 == 2 && signal1 == false) {
				drawRectangle(26, 119, 82, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c1 == 1 && signal1 == false) {
				drawRectangle(26, 119, 82, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c2 == 3 && signal2 == false) {
				drawRectangle(83, 119, 139, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c2 == 2 && signal2 == false) {
				drawRectangle(83, 119, 139, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c2 == 1 && signal2 == false) {
				drawRectangle(83, 119, 139, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c3 == 3 && signal3 == false) {
				drawRectangle(140, 119, 196, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c3 == 2 && signal3 == false) {
				drawRectangle(140, 119, 196, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c3 == 1 && signal3 == false) {
				drawRectangle(140, 119, 196, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c4 == 3 && signal4 == false) {
				drawRectangle(197, 119, 253, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c4 == 2 && signal4 == false) {
				drawRectangle(197, 119, 253, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c4 == 1 && signal4 == false) {
				drawRectangle(197, 119, 253, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c5 == 3 && signal5 == false) {
				drawRectangle(254, 119, 310, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c5 == 2 && signal5 == false) {
				drawRectangle(254, 119, 310, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c5 == 1 && signal5 == false) {
				drawRectangle(254, 119, 310, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c6 == 3 && signal6 == false) {
				drawRectangle(311, 119, 367, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c6 == 2 && signal6 == false) {
				drawRectangle(311, 119, 367, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c6 == 1 && signal6 == false) {
				drawRectangle(311, 119, 367, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c7 == 3 && signal7 == false) {
				drawRectangle(368, 119, 424, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c7 == 2 && signal7 == false) {
				drawRectangle(368, 119, 424, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c7 == 1 && signal7 == false) {
				drawRectangle(368, 119, 424, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c8 == 3 && signal8 == false) {
				drawRectangle(425, 119, 481, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c8 == 2 && signal8 == false) {
				drawRectangle(425, 119, 481, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c8 == 1 && signal8 == false) {
				drawRectangle(425, 119, 481, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c9 == 3 && signal9 == false) {
				drawRectangle(482, 119, 538, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c9 == 2 && signal9 == false) {
				drawRectangle(482, 119, 538, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c9 == 1 && signal9 == false) {
				drawRectangle(482, 119, 538, 136, 100, 100, 100, 112, 150, 20);
			}
			if (c10 == 3 && signal10 == false) {
				drawRectangle(539, 119, 587, 136, 100, 100, 100, 112, 250, 20);
			}
			if (c10 == 2 && signal10 == false) {
				drawRectangle(539, 119, 587, 136, 100, 100, 100, 212, 50, 220);
			}
			if (c10 == 1 && signal10 == false) {
				drawRectangle(539, 119, 587, 136, 100, 100, 100, 112, 150, 20);
			}





			draw_slate(m);
			ellipse_draw(o, p);
			draw_slate(m);
			//fundamental while loop.
			while (game_play) {
				ellipse_draw(o, p);
				delay(43);   //controler for speed of ball

				if (lives == 3 && death_count == 0) {
					drawEllipse(555, 5, 570, 20, 20, 12, 12, 120, 194, 40);
					drawEllipse(575, 5, 590, 20, 20, 12, 12, 120, 194, 40);
					drawEllipse(595, 5, 610, 20, 20, 12, 12, 120, 194, 40);
				}
				else if (lives == 2 && death_count == 1) {
					drawEllipse(555, 5, 570, 20, 12, 12, 12, 120, 194, 40);
					drawEllipse(575, 5, 590, 20, 12, 12, 12, 120, 194, 40);
					drawEllipse(595, 5, 610, 20, 12, 12, 12, 12, 12, 12);
				}
				else if (lives == 1 && death_count == 2) {
					drawEllipse(555, 5, 570, 20, 20, 12, 12, 120, 194, 40);
					drawEllipse(575, 5, 590, 20, 12, 12, 12, 12, 12, 12);
					drawEllipse(595, 5, 610, 20, 12, 12, 12, 12, 12, 12);

				}
				else if (lives == 0 && death_count == 3) {
					drawEllipse(555, 5, 570, 20, 12, 12, 12, 12, 12, 12);
					delay(100);
					gotoxy(0, 0);
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(553, 2, 612, 22, 12, 12, 12, 12, 12, 12);
					cout << "                                                 lives =>  `No Life`";

					delay(2000);
					drawRectangle(533, 2, 615, 22, 12, 12, 12, 12, 12, 12);
					gotoxy(0, 0);
					cls();
					cout << "`NEVER GIVE UP`.....................\n";
					delay(1300);
					for (int i = 0; i < 15; i++) {
						cout << "                                   .\n";
						delay(70);
					}
					cout << "                   -----{ better luck next time }----- \n";
					delay(2300);
					cls();

					game_play = false;
					mark = true;
				}


				//touching sides.
				if (o == 54) {
					right_wall = true;
					bat = false;
					straight_hit_roof = false;
					if (right_def) {
						right_hit_roof = true;
						left_hit_roof = false;
						ball_up = true;
						left_def = false;
						left_wall = false;
						top_def = false;
						ball_down = false;
						right_brick = true;
						up_brick = false;
					}
					if (top_wall) {
						left_hit_roof = false;
						right_hit_roof = false;
						ball_down = true;
						left_def = false;
						left_wall = false;
						top_def = false;
						ball_up = false;
					}


				}

				if (p == 5) {

					top_wall = true;
					ball_down = true;
					bat = false;
					up_brick = true;
					left_brick = false;
					right_brick = false;
					if (top_def && ball_up) {
						straight_hit_roof = true;
						left_hit_roof = false;
						right_hit_roof = false;
						top_wall = true;
						ball_down = true;
						left_def = false;
						right_def = false;
						top_def = false;
					}
					if (right_wall) {
						straight_hit_roof = false;
						right_hit_roof = true;
						left_hit_roof = false;
						ball_up = false;
						right_def = false;
						left_def = false;
						top_def = false;
					}
					if (left_wall) {
						straight_hit_roof = false;
						left_hit_roof = true;
						right_hit_roof = false;
						ball_up = false;
						right_def = false;
						left_def = false;
						top_def = false;
					}

				}

				if (o == -1) {
					left_wall = true;
					bat = false;
					straight_hit_roof = false;

					if (left_def) {
						left_brick = true;
						up_brick = false;
						left_hit_roof = true;
						right_hit_roof = false;
						ball_up = true;
						right_def = false;
						right_wall = false;
						top_def = false;
						ball_down = false;
					}
					if (top_wall) {
						ball_down = true;
						left_hit_roof = false;
						right_hit_roof = false;
						right_def = false;
						right_wall = false;
						top_def = false;
						ball_up = false;
					}
				}
				//bat def's.
				if (p == 52 && (o >= (m + 1) && o <= (m + 5))) {
					right_def = true;
					left_def = false;
					top_def = false;
					ball_up = true;
					ball_down = false;
					left_wall = false;
					right_wall = false;
					top_wall = false;
					bat = true;
					straight_hit_roof = false;
					def_right_brick = true;

				}
				if (p == 52 && (o == m)) {
					top_def = true;
					left_def = false;
					right_def = false;
					ball_up = true;
					ball_down = false;
					left_wall = false;
					right_wall = false;
					top_wall = false;
					bat = true;
					straight_hit_roof = true;
					down_brick = true;
					left_brick = false;
					right_brick = false;


				}
				if (p == 52 && (o >= m - 5 && o <= (m - 1))) {
					left_def = true;
					top_def = false;
					right_def = false;
					ball_up = true;
					ball_down = false;
					top_wall = false;
					left_wall = false;
					right_wall = false;
					bat = true;
					straight_hit_roof = false;
					def_left_brick = true;
				}
				//diff scenarios.
				if (top_def && ball_up) {//
					//cout << "1";
					ellipse_remove(o, p);
					p--;

				}
				if (top_wall == true && ball_down == true && top_def == false && left_def == false && right_def == false && left_hit_roof == false && right_hit_roof == false && straight_hit_roof == true) {//
					//cout << "2";
					ellipse_remove(o, p);
					p++;
				}
				if (right_def && ball_up && bat) {//
					//cout << "3";
					ellipse_remove(o, p);
					p--;
					o++;

				}
				if (left_def && ball_up && bat) {//
					//cout << "4";
					ellipse_remove(o, p);
					p--;
					o--;
				}
				if (right_wall && right_def && ball_up) {//
					//cout << "5";
					ellipse_remove(o, p);
					p--;
					o--;
				}
				if (right_wall && top_wall && ball_down) {//
					//cout << "6";
					ellipse_remove(o, p);
					p++;
					o--;

				}
				if (right_wall && top_wall && ball_down && left_hit_roof) {//

					//cout << "7";
					ellipse_remove(o, p);
					p++;
					o--;

				}
				if (left_wall && left_def && ball_up) {//
					//cout << "8";
					ellipse_remove(o, p);
					p--;
					o++;
				}
				if (left_wall && top_wall && ball_down) {//
					//cout << "9";
					ellipse_remove(o, p);
					p++;
					o++;
				}
				if (left_wall && top_wall && ball_down && right_hit_roof) {//
					//	cout << "10";
					ellipse_remove(o, p);
					p++;
					o++;

				}



				if (right_def && top_wall && ball_up) {
					//cout << "11";
					//fixing unique case.
					ellipse_remove(o, p);
					p++;
					o++;
				}


				if (left_def && top_wall && ball_up) {
					//cout << "12";
					//fixing unique case.
					ellipse_remove(o, p);
					p++;
					o--;
				}

				//down case and intital case also(without anything).
				else if (left_wall == false && right_wall == false && left_def == false && right_def == false && top_wall == false && top_def == false && ball_down == true) {
					ellipse_remove(o, p);
					p++;
				}

				//for bricks breakage
				//(jo apko kam(movement of ball) lena wo wala kam ka switches on krdo ur baqi sara switches band krdo ,where switches = bools).
				//alphabets such as a,b,c,d,e,f are used for the sake of debugging

				if ((p == 13 || p == 14) && (o * 10 + 36) >= 26 && (o * 10 + 36) <= 82 && history_brick_51) {//b51
					signal1 = true;
					if (c1 == 4 && signal1 == true && history_brick_51) {
						drawRectangle(26, 119, 82, 136, 100, 100, 100, 112, 250, 20);
						c1--;
						signal1 = false;
					}

					else	if (c1 == 3 && signal1 == true && history_brick_51) {
						drawRectangle(26, 119, 82, 136, 100, 100, 100, 212, 50, 220);
						c1--;
						signal1 = false;
					}

					else	if (c1 == 2 && signal1 == true && history_brick_51) {
						drawRectangle(26, 119, 82, 136, 100, 100, 100, 112, 150, 20);
						c1--;
						signal1 = false;
					}

					else	if (c1 == 1 && signal1 == true && history_brick_51) {

						history_brick_51 = false;
						remove_brick(26, 119, 82, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";   //printing huge space helps in removing calculating statement...
						signal1 = false;
					}

					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 255, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {//
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {//
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}
				}

				if ((p == 13 || p == 14) && (o * 10 + 36) >= 83 && (o * 10 + 36) <= 139 && history_brick_52) {//b52
					signal2 = true;
					if (c2 == 4 && signal2 == true && history_brick_52) {
						drawRectangle(83, 119, 139, 136, 100, 100, 100, 112, 250, 20);
						c2--;
						signal2 = false;
					}

					else	if (c2 == 3 && signal2 == true && history_brick_52) {
						drawRectangle(83, 119, 139, 136, 100, 100, 100, 212, 50, 220);
						c2--;
						signal2 = false;
					}

					else	if (c2 == 2 && signal2 == true && history_brick_52) {
						drawRectangle(83, 119, 139, 136, 100, 100, 100, 112, 150, 20);
						c2--;
						signal2 = false;
					}

					else	if (c2 == 1 && signal2 == true && history_brick_52) {
						history_brick_52 = false;
						remove_brick(83, 119, 139, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}

					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";


						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}




				}
				if ((p == 13 || p == 14) && (o * 10 + 36) >= 140 && (o * 10 + 36) <= 196 && history_brick_53) {//b53
					signal3 = true;
					if (c3 == 4 && signal3 == true && history_brick_53) {
						drawRectangle(140, 119, 196, 136, 100, 100, 100, 112, 250, 20);
						c3--;
						signal3 = false;
					}

					else	if (c3 == 3 && signal3 == true && history_brick_53) {
						drawRectangle(140, 119, 196, 136, 100, 100, 100, 212, 50, 220);
						c3--;
						signal3 = false;
					}

					else	if (c3 == 2 && signal3 == true && history_brick_53) {
						drawRectangle(140, 119, 196, 136, 100, 100, 100, 112, 150, 20);
						c3--;
						signal3 = false;
					}

					else	if (c3 == 1 && signal3 == true && history_brick_53) {

						history_brick_53 = false;
						remove_brick(140, 119, 196, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}

					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 13 || p == 14) && (o * 10 + 36) >= 197 && (o * 10 + 36) <= 253 && history_brick_54) {//b54
					signal4 = true;
					if (c4 == 4 && signal4 == true && history_brick_54) {
						drawRectangle(197, 119, 253, 136, 100, 100, 100, 112, 250, 20);
						c4--;
						signal4 = false;
					}

					else	if (c4 == 3 && signal4 == true && history_brick_54) {
						drawRectangle(197, 119, 253, 136, 100, 100, 100, 212, 50, 220);
						c4--;
						signal4 = false;
					}

					else	if (c4 == 2 && signal4 == true && history_brick_54) {
						drawRectangle(197, 119, 253, 136, 100, 100, 100, 112, 150, 20);
						c4--;
						signal4 = false;
					}

					else	if (c4 == 1 && signal4 == true && history_brick_54) {

						history_brick_54 = false;
						remove_brick(197, 119, 253, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}

					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 13 || p == 14) && (o * 10 + 36) >= 254 && (o * 10 + 36) <= 310 && history_brick_55) {//b55
					signal5 = true;
					if (c5 == 4 && signal5 == true && history_brick_55) {
						drawRectangle(254, 119, 310, 136, 100, 100, 100, 112, 250, 20);
						c5--;
						signal5 = false;
					}

					else	if (c5 == 3 && signal5 == true && history_brick_55) {
						drawRectangle(254, 119, 310, 136, 100, 100, 100, 212, 50, 220);
						c5--;
						signal5 = false;
					}

					else	if (c5 == 2 && signal5 == true && history_brick_55) {
						drawRectangle(254, 119, 310, 136, 100, 100, 100, 112, 150, 20);
						c5--;
						signal5 = false;
					}

					else	if (c5 == 1 && signal5 == true && history_brick_55) {
						history_brick_55 = false;
						remove_brick(254, 119, 310, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);


						cout << "Score = " << score << "                       ";
					}
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 13 || p == 14) && (o * 10 + 36) >= 311 && (o * 10 + 36) <= 367 && history_brick_56) {//b56
					signal6 = true;
					if (c6 == 4 && signal6 == true && history_brick_56) {
						drawRectangle(311, 119, 367, 136, 100, 100, 100, 112, 250, 20);
						c6--;
						signal6 = false;
					}

					else	if (c6 == 3 && signal6 == true && history_brick_56) {
						drawRectangle(311, 119, 367, 136, 100, 100, 100, 212, 50, 220);
						c6--;
						signal6 = false;
					}

					else	if (c6 == 2 && signal6 == true && history_brick_56) {
						drawRectangle(311, 119, 367, 136, 100, 100, 100, 112, 150, 20);
						c6--;
						signal6 = false;
					}

					else	if (c6 == 1 && signal6 == true && history_brick_56) {

						history_brick_56 = false;
						remove_brick(311, 119, 367, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}

					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 13 || p == 14) && (o * 10 + 36) >= 368 && (o * 10 + 36) <= 424 && history_brick_57) {//b57
					signal7 = true;
					if (c7 == 4 && signal7 == true && history_brick_57) {
						drawRectangle(368, 119, 424, 136, 100, 100, 100, 112, 250, 20);
						c7--;
						signal7 = false;
					}

					else	if (c7 == 3 && signal7 == true && history_brick_57) {
						drawRectangle(368, 119, 424, 136, 100, 100, 100, 212, 50, 220);
						c7--;
						signal7 = false;
					}

					else	if (c7 == 2 && signal7 == true && history_brick_57) {
						drawRectangle(368, 119, 424, 136, 100, 100, 100, 112, 150, 20);
						c7--;
						signal7 = false;
					}

					else	if (c7 == 1 && signal7 == true && history_brick_57) {

						history_brick_57 = false;
						remove_brick(368, 119, 424, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 13 || p == 14) && (o * 10 + 36) >= 425 && (o * 10 + 36) <= 481 && history_brick_58) {//b58
					signal8 = true;
					if (c8 == 4 && signal8 == true && history_brick_58) {
						drawRectangle(425, 119, 481, 136, 100, 100, 100, 112, 250, 20);
						c8--;
						signal8 = false;
					}

					else	if (c8 == 3 && signal8 == true && history_brick_58) {
						drawRectangle(425, 119, 481, 136, 100, 100, 100, 212, 50, 220);
						c8--;
						signal8 = false;
					}

					else	if (c8 == 2 && signal8 == true && history_brick_58) {
						drawRectangle(425, 119, 481, 136, 100, 100, 100, 112, 150, 20);
						c8--;
						signal8 = false;
					}

					else	if (c8 == 1 && signal8 == true && history_brick_58) {

						history_brick_58 = false;
						remove_brick(425, 119, 481, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 13 || p == 14) && (o * 10 + 36) >= 482 && (o * 10 + 36) <= 538 && history_brick_59) {//b59
					signal9 = true;
					if (c9 == 4 && signal9 == true && history_brick_59) {
						drawRectangle(482, 119, 538, 136, 100, 100, 100, 112, 250, 20);
						c9--;
						signal9 = false;
					}

					else	if (c9 == 3 && signal9 == true && history_brick_59) {
						drawRectangle(482, 119, 538, 136, 100, 100, 100, 212, 50, 220);
						c9--;
						signal9 = false;
					}

					else	if (c9 == 2 && signal9 == true && history_brick_59) {
						drawRectangle(482, 119, 538, 136, 100, 100, 100, 112, 150, 20);
						c9--;
						signal9 = false;
					}

					else	if (c9 == 1 && signal9 == true && history_brick_59) {

						history_brick_59 = false;
						remove_brick(482, 119, 538, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 13 || p == 14) && (o * 10 + 36) >= 539 && (o * 10 + 36) <= 587 && history_brick_510) {//b510
					signal10 = true;
					if (c10 == 4 && signal10 == true && history_brick_510) {
						drawRectangle(539, 119, 587, 136, 100, 100, 100, 112, 250, 20);
						c10--;
						signal10 = false;
					}

					else	if (c10 == 3 && signal10 == true && history_brick_510) {
						drawRectangle(539, 119, 587, 136, 100, 100, 100, 212, 50, 220);
						c10--;
						signal10 = false;
					}

					else	if (c10 == 2 && signal10 == true && history_brick_510) {
						drawRectangle(539, 119, 587, 136, 100, 100, 100, 112, 150, 20);
						c10--;
						signal10 = false;
					}

					else	if (c10 == 1 && signal10 == true && history_brick_510) {

						history_brick_510 = false;
						remove_brick(539, 119, 587, 136);
						score = score + 100;
						drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
						gotoxy(0, 0);
						cout << "Score = " << score << "                       ";
					}


					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


				if ((p == 11 || p == 12) && (o * 10 + 36) >= 26 && (o * 10 + 36) <= 82 && history_brick_41) {//b41
					history_brick_41 = false;
					remove_brick(26, 101, 82, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {//
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {//
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}
				}

				if ((p == 11 || p == 12) && (o * 10 + 36) >= 83 && (o * 10 + 36) <= 139 && history_brick_42) {//b42
					history_brick_42 = false;
					remove_brick(83, 101, 139, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";


						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}




				}
				if ((p == 11 || p == 12) && (o * 10 + 36) >= 140 && (o * 10 + 36) <= 196 && history_brick_43) {//b43
					history_brick_43 = false;
					remove_brick(140, 101, 196, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 11 || p == 12) && (o * 10 + 36) >= 197 && (o * 10 + 36) <= 253 && history_brick_44) {//b44
					history_brick_44 = false;
					remove_brick(197, 101, 253, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 11 || p == 12) && (o * 10 + 36) >= 254 && (o * 10 + 36) <= 310 && history_brick_45) {//b45
					history_brick_45 = false;
					remove_brick(254, 101, 310, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);


					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 11 || p == 12) && (o * 10 + 36) >= 311 && (o * 10 + 36) <= 367 && history_brick_46) {//b46
					history_brick_46 = false;
					remove_brick(311, 101, 367, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 11 || p == 12) && (o * 10 + 36) >= 368 && (o * 10 + 36) <= 424 && history_brick_47) {//b47
					history_brick_47 = false;
					remove_brick(368, 101, 424, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 11 || p == 12) && (o * 10 + 36) >= 425 && (o * 10 + 36) <= 481 && history_brick_48) {//b48
					history_brick_48 = false;
					remove_brick(425, 101, 481, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 11 || p == 12) && (o * 10 + 36) >= 482 && (o * 10 + 36) <= 538 && history_brick_49) {//b49
					history_brick_49 = false;
					remove_brick(482, 101, 538, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 11 || p == 12) && (o * 10 + 36) >= 539 && (o * 10 + 36) <= 587 && history_brick_410) {//b410
					history_brick_410 = false;
					remove_brick(539, 101, 587, 118);
					score = score + 300;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////




				if ((p == 9 || p == 10) && (o * 10 + 36) >= 26 && (o * 10 + 36) <= 82 && history_brick_31) {//b31
					history_brick_31 = false;
					remove_brick(26, 86, 82, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
				
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {//
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {//
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}
				}

				if ((p == 9 || p == 10) && (o * 10 + 36) >= 83 && (o * 10 + 36) <= 139 && history_brick_32) {//b32
					history_brick_32 = false;
					remove_brick(83, 86, 139, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";


						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}




				}
				if ((p == 9 || p == 10) && (o * 10 + 36) >= 140 && (o * 10 + 36) <= 196 && history_brick_33) {//b33
					history_brick_33 = false;
					remove_brick(140, 86, 196, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 9 || p == 10) && (o * 10 + 36) >= 197 && (o * 10 + 36) <= 253 && history_brick_34) {//b34
					history_brick_34 = false;
					remove_brick(197, 86, 253, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 9 || p == 10) && (o * 10 + 36) >= 254 && (o * 10 + 36) <= 310 && history_brick_35) {//b35
					history_brick_35 = false;
					remove_brick(254, 86, 310, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);


					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 9 || p == 10) && (o * 10 + 36) >= 311 && (o * 10 + 36) <= 367 && history_brick_36) {//b36
					history_brick_36 = false;
					remove_brick(311, 86, 367, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 9 || p == 10) && (o * 10 + 36) >= 368 && (o * 10 + 36) <= 424 && history_brick_37) {//b37
					history_brick_37 = false;
					remove_brick(368, 86, 424, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 9 || p == 10) && (o * 10 + 36) >= 425 && (o * 10 + 36) <= 481 && history_brick_38) {//b38
					history_brick_38 = false;
					remove_brick(425, 86, 481, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 9 || p == 10) && (o * 10 + 36) >= 482 && (o * 10 + 36) <= 538 && history_brick_39) {//b39
					history_brick_39 = false;
					remove_brick(482, 86, 538, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 9 || p == 10) && (o * 10 + 36) >= 539 && (o * 10 + 36) <= 587 && history_brick_310) {//b310
					history_brick_310 = false;
					remove_brick(539, 86, 587, 103);
					score = score + 500;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////




				if ((p == 7 || p == 8) && (o * 10 + 36) >= 26 && (o * 10 + 36) <= 82 && history_brick_21) {//b21
					history_brick_21 = false;
					remove_brick(26, 68, 82, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {//
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {//
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}
				}

				if ((p == 7 || p == 8) && (o * 10 + 36) >= 83 && (o * 10 + 36) <= 139 && history_brick_22) {//b22
					history_brick_22 = false;
					remove_brick(83, 68, 139, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";


						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}




				}
				if ((p == 7 || p == 8) && (o * 10 + 36) >= 140 && (o * 10 + 36) <= 196 && history_brick_23) {//b23
					history_brick_23 = false;
					remove_brick(140, 68, 196, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 7 || p == 8) && (o * 10 + 36) >= 197 && (o * 10 + 36) <= 253 && history_brick_24) {//b24
					history_brick_24 = false;
					remove_brick(197, 68, 253, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 7 || p == 8) && (o * 10 + 36) >= 254 && (o * 10 + 36) <= 310 && history_brick_25) {//b25
					history_brick_25 = false;
					remove_brick(254, 68, 310, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);


					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 7 || p == 8) && (o * 10 + 36) >= 311 && (o * 10 + 36) <= 367 && history_brick_26) {//b26
					history_brick_26 = false;
					remove_brick(311, 68, 367, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 7 || p == 8) && (o * 10 + 36) >= 368 && (o * 10 + 36) <= 424 && history_brick_27) {//b27
					history_brick_27 = false;
					remove_brick(368, 68, 424, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 7 || p == 8) && (o * 10 + 36) >= 425 && (o * 10 + 36) <= 481 && history_brick_28) {//b28
					history_brick_28 = false;
					remove_brick(425, 68, 481, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if ((p == 7 || p == 8) && (o * 10 + 36) >= 482 && (o * 10 + 36) <= 538 && history_brick_29) {//b29
					history_brick_29 = false;
					remove_brick(482, 68, 538, 85);
					score = score + 100;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if ((p == 7 || p == 8) && (o * 10 + 36) >= 539 && (o * 10 + 36) <= 587 && history_brick_210) {//b210
					history_brick_210 = false;
					remove_brick(539, 68, 587, 85);
					score = score + 700;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				if (p == 7 && (o * 10 + 36) >= 26 && (o * 10 + 36) <= 82 && history_brick_11) {//b11
					history_brick_11 = false;
					remove_brick(26, 50, 82, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);

					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {//
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {//
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}
				}

				if (p == 7 && (o * 10 + 36) >= 83 && (o * 10 + 36) <= 139 && history_brick_12) {//b12

					history_brick_12 = false;
					remove_brick(83, 50, 139, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";


						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;

					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f"
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}




				}
				if (p == 7 && (o * 10 + 36) >= 140 && (o * 10 + 36) <= 196 && history_brick_13) {//b13

					history_brick_13 = false;
					remove_brick(140, 50, 196, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);


					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if (p == 7 && (o * 10 + 36) >= 197 && (o * 10 + 36) <= 253 && history_brick_14) {//b14

					history_brick_14 = false;
					remove_brick(197, 50, 253, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if (p == 7 && (o * 10 + 36) >= 254 && (o * 10 + 36) <= 310 && history_brick_15) {//b15

					history_brick_15 = false;
					remove_brick(254, 50, 310, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if (p == 7 && (o * 10 + 36) >= 311 && (o * 10 + 36) <= 367 && history_brick_16) {//b16

					history_brick_16 = false;
					remove_brick(311, 50, 367, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if (p == 7 && (o * 10 + 36) >= 368 && (o * 10 + 36) <= 424 && history_brick_17) {//b17
					history_brick_17 = false;
					remove_brick(368, 50, 424, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout<<"f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if (p == 7 && (o * 10 + 36) >= 425 && (o * 10 + 36) <= 481 && history_brick_18) {//b18

					history_brick_18 = false;
					remove_brick(425, 50, 481, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140 , 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}

				if (p == 7 && (o * 10 + 36) >= 482 && (o * 10 + 36) <= 538 && history_brick_19) {//b19
					history_brick_19 = false;
					remove_brick(482, 50, 538, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);


					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140 , 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}


				if (p == 7 && (o * 10 + 36) >= 539 && (o * 10 + 36) <= 587 && history_brick_110) {//b110

					history_brick_110 = false;
					remove_brick(539, 50, 587, 67);
					score = score + 1000;
					drawRectangle(0, 0, 100, 10, 0, 0, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "Score = " << score << "                       ";
					drawRectangle(0, 25, 25, 50, 0, 0, 0, 255, 200, 0);
					drawRectangle(0, 50, 25, 60, 0, 0, 0, 140, 0, 0);
					if (right_brick) {
						//cout << "a";

						right_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						left_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (left_brick) {
						//cout << "b";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						left_hit_roof = false;
						ball_up = false;
						right_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						bat = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;


					}
					if (down_brick) {
						//cout << "c";

						left_wall = false;
						right_wall = false;
						top_wall = true;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = true;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (up_brick) {
						//cout << "d";
						top_def = true;
						ball_up = true;
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						ball_down = false;
						bat = false;
						left_brick = false;
						right_brick = false;
						down_brick = false;
						up_brick = false;
						def_left_brick = false;
						def_right_brick = false;
					}
					if (def_left_brick && left_brick == false && right_brick == false) {//
						//cout << "e";
						right_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						left_wall = false;
					}
					if (def_right_brick && right_brick == false && left_brick == false) {//
						//cout << "f";
						left_wall = true;
						top_wall = true;
						ball_down = true;
						ball_up = false;
						right_wall = false;
					}

				}
				/////////////////////////all bricks  angle treatment had been done.

				if (lose) {                         //for redrawing ball and bat after death....(only two times redraw).
					if (death_count == 1) {
						m = 25, o = 25, p = 20;
						draw_slate(m);
						delay(20);
						ellipse_draw(o, p);
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						lose = false;                       //restatus the lose 
					}
					if (death_count == 2) {
						m = 25, o = 25, p = 20;
						draw_slate(m);
						delay(20);
						ellipse_draw(o, p);
						left_wall = false;
						right_wall = false;
						top_wall = false;
						left_def = false;
						right_def = false;
						top_def = false;
						ball_up = false;
						ball_down = true;
						bat = false;
						left_hit_roof = false;
						right_hit_roof = false;
						straight_hit_roof = false;
						lose = false;                    //restatus the lose 
					}

				}
				//losing cases...
				if (death_count == 0 && p > 55) {       //p is the vertical length of the ball
					drawLine(24, 556, 588, 556, 160);
					remove_slate(m);
					ellipse_remove(o, p);
					m = 25, o = 25, p = 20;
					lose = true;
					lives--;
					death_count++;
				}
				if (death_count == 1 && p > 55) {               //p is the vertical length of the ball
					drawLine(24, 556, 588, 556, 160);
					remove_slate(m);
					ellipse_remove(o, p);
					m = 25, o = 25, p = 20;
					lose = true;
					lives--;
					death_count++;
				}
				if (death_count == 2 && p > 55) {               //p is the vertical length of the ball        
					drawLine(24, 556, 588, 556, 160);
					remove_slate(m);
					ellipse_remove(o, p);
					m = 25, o = 25, p = 20;
					lose = true;
					lives--;
					death_count++;
				}
				// for clear cut understanding (need in save game scenario...)
				if (lives == 3) {
					death_count = 0;
				}
				if (lives == 2) {
					death_count = 1;
				}
				if (lives == 1) {
					death_count = 2;
				}
				if (lives == 0) {
					death_count = 3;
				}

				char move_slate = getKey();
				//for right movement of the slate
				if (move_slate == 'd') {
					if (m * 10 + 77 < 587) {     //restricted in the domain of movement from right side
						remove_slate(m);
						m++;
						draw_slate(m);
					}

				}
				//for left movement of the slate
				if (move_slate == 'a') {
					if (m * 10 > 30) {     //restricted in the domain of movement from left side
						remove_slate(m);
						m--;
						draw_slate(m);
					}
				}
				//exit game.
				if (move_slate == 27) {         //will move in the menu
					cls();
					gotoxy(0, 0);
					game_play = false;
					banner = true;
				}
				//pause game.
				if (move_slate == 'p') {           //game will automatically start if you move the slate 
					char input = _getch();
				}
				//saving game.(writing in file all the essential progress)
				if (move_slate == 's')
				{
					ofstream data_output("save.txt");
					data_output << history_brick_11 << endl;
					data_output << history_brick_12 << endl;
					data_output << history_brick_13 << endl;
					data_output << history_brick_14 << endl;
					data_output << history_brick_15 << endl;
					data_output << history_brick_16 << endl;
					data_output << history_brick_17 << endl;
					data_output << history_brick_18 << endl;
					data_output << history_brick_19 << endl;
					data_output << history_brick_110 << endl;
					data_output << history_brick_21 << endl;
					data_output << history_brick_22 << endl;
					data_output << history_brick_23 << endl;
					data_output << history_brick_24 << endl;
					data_output << history_brick_25 << endl;
					data_output << history_brick_26 << endl;
					data_output << history_brick_27 << endl;
					data_output << history_brick_28 << endl;
					data_output << history_brick_29 << endl;
					data_output << history_brick_210 << endl;
					data_output << history_brick_31 << endl;
					data_output << history_brick_32 << endl;
					data_output << history_brick_33 << endl;
					data_output << history_brick_34 << endl;
					data_output << history_brick_35 << endl;
					data_output << history_brick_36 << endl;
					data_output << history_brick_37 << endl;
					data_output << history_brick_38 << endl;
					data_output << history_brick_39 << endl;
					data_output << history_brick_310 << endl;
					data_output << history_brick_41 << endl;
					data_output << history_brick_42 << endl;
					data_output << history_brick_43 << endl;
					data_output << history_brick_44 << endl;
					data_output << history_brick_45 << endl;
					data_output << history_brick_46 << endl;
					data_output << history_brick_47 << endl;
					data_output << history_brick_48 << endl;
					data_output << history_brick_49 << endl;
					data_output << history_brick_410 << endl;
					data_output << history_brick_51 << endl;
					data_output << history_brick_52 << endl;
					data_output << history_brick_53 << endl;
					data_output << history_brick_54 << endl;
					data_output << history_brick_55 << endl;
					data_output << history_brick_56 << endl;
					data_output << history_brick_57 << endl;
					data_output << history_brick_58 << endl;
					data_output << history_brick_59 << endl;
					data_output << history_brick_510 << endl;
					data_output << lives << endl;
					data_output << score << endl;
					data_output << death_count << endl;
					data_output << lose << endl;
					data_output << o << endl;
					data_output << p << endl;
					data_output << m << endl;
					data_output << c1 << endl;
					data_output << c2 << endl;
					data_output << c3 << endl;
					data_output << c4 << endl;
					data_output << c5 << endl;
					data_output << c6 << endl;
					data_output << c7 << endl;
					data_output << c8 << endl;
					data_output << c9 << endl;
					data_output << c10 << endl;
					data_output << signal1 << endl;
					data_output << signal2 << endl;
					data_output << signal3 << endl;
					data_output << signal4 << endl;
					data_output << signal5 << endl;
					data_output << signal6 << endl;
					data_output << signal7 << endl;
					data_output << signal8 << endl;
					data_output << signal9 << endl;
					data_output << signal10 << endl;
					data_output << left_wall << endl;
					data_output << right_wall << endl;
					data_output << top_wall << endl;
					data_output << left_def << endl;
					data_output << right_def << endl;
					data_output << top_def << endl;
					data_output << ball_up << endl;
					data_output << ball_down << endl;
					data_output << bat << endl;
					data_output << left_hit_roof << endl;
					data_output << right_hit_roof << endl;
					data_output << straight_hit_roof << endl;
					data_output << lose << endl;
					data_output << left_brick << endl;
					data_output << right_brick << endl;
					data_output << down_brick << endl;
					data_output << up_brick << endl;
					data_output << def_left_brick << endl;
					data_output << def_right_brick << endl;
					data_output.close();

					ofstream my_file;
					my_file.open("your_scores.txt", ios::app);              //but append is writing in the file everyting twice but i have done treatemnt for that error in end ....
					my_file << score << endl;
					my_file.close();
				}


				if (score == 26000) {          //maximum possible score have been achieved => game finished
					sign = true;
				}
			}   // one funamental continuous while ended.

			if (sign) {                 //if the player finished the game having a score of 26000
				cls();
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "                              ~~~~~~~~~~~\n                              |GAME ENDED|\n                              ~~~~~~~~~~~\n\n\n\n";
				cout << "\nYOUR SCORE = " << score;


			}


			else if (banner) {                       //if the player exited the game
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "                              ~~~~~~~~~~~~~\n                              |GAME EXITED|\n                              ~~~~~~~~~~~~~\n\n\n\n";
				cout << "\nYOUR SCORE = " << score;
			}
			else if (mark) {                               //if the player ran out of lives
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "                              ~~~~~~~~~~~\n                              |GAME OVER|\n                              ~~~~~~~~~~~\n\n\n\n";
				cout << "\nYOUR SCORE = " << score;
			}
		}


		if (option == '2') {            //high scores option

			cls();
			gotoxy(0, 0);
			for (int i = 0; i < 700; i++) {
				drawRectangle(0, 0, 1 + i, 700, 0, 130,90, 0, 200, 90);

			}
			cls();
			int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;         //real scores => five 
			int sn1 = 0, sn2 = 0, sn3 = 0, sn4 = 0, sn5 = 0;       //fixing error of twice printing while append(taken null scores)
			ifstream my_file("your_scores.txt");
			my_file >> s1;
			my_file >> sn1;
			my_file >> s2;
			my_file >> sn2;
			my_file >> s3;
			my_file >> sn3;
			my_file >> s4;
			my_file >> sn4;
			my_file >> s5;
			my_file >> sn5;
			//created an array of size 5
			int arr[5];
			arr[0] = s1;
			arr[1] = s2;
			arr[2] = s3;
			arr[3] = s4;
			arr[4] = s5;
			//with selection sort
			int m = 0;
			for (int i = 0; i < 5 - 1; i++) {
				m = i;
				for (int j = i + 1; j < 5; j++) {
					if (arr[m] < arr[j]) {
						m = j;
					}
					int temp = arr[m];
					arr[m] = arr[i];
					arr[i] = temp;
				}
			}
			gotoxy(0, 0);
			cout << "\n\n\n 5 HIGH SCORES =>  \n";
			cout << "                  ";
			for (int i = 0; i < 5; i++) {
				cout << i + 1 << ". " << arr[i] << endl;
				cout << "                  ";
			}
			cout << "\n\n(play atleast 5 games for correct numbering)";
			cout << "\n\n\n\n\n\n\n\n         .......press ENTER to return to main menu.......\n";
			cin.ignore();
			cin.get();
			cls();
			gotoxy(0, 0);
		}
		if (option == '3') {           //controls and instructions option
			cls();
			gotoxy(0, 0);
			for (int i = 0; i < 700; i++) {
				drawRectangle(0, 0, 1 + i, 700, 100, 200, 0, 100, 200, 0);

			}
			cls();
			gotoxy(0, 0);
			cout << "CONTROLS :-\n";
			cout << "         ( d for RIGHT MOVEMENT)\n";
			cout << "         ( a for LEFT MOVEMENT)\n";
			cout << "         ( p for PAUSE GAME)\n";
			cout << "         ( l for load GAME)\n";
			cout << "         ( s for SAVE GAME)\n";
			cout << "         ( esc for END GAME)\n";
			cout << "\n\nINSTRUCTIONS :-\n\n                  ~(You are given total 3 lives)~ \n\n\n\n          `CYAN BRICK`____100 points(will break by 3 multiple hits)\n          `BLUE BRICK`____300 points\n          `GREEN BRICK`____500 points\n          `RED BRICK`____700 points\n          `WHITE BRICK`____1000 points\n\n\n\n               ---------------GOOD LUCK---------------";

			cout << "\n\n           .......press ENTER to return to main menu.......\n";
			cin.ignore();
			cin.get();
			cls();
			gotoxy(0, 0);
		}
		if (option == '4') {                  //credit option
			cls();
			gotoxy(0, 0);
			for (int i = 0; i < 700; i++) {
				drawRectangle(0, 0, 1 + i, 700, 80, 50, 40, 80, 50, 40);

			}
			cls();
			cls();
			gotoxy(0, 0);


			cout << "";
			for (int i = 0; i < 68; i++) {
				cout << ".";
				delay(4);
			}
			delay(10);
			cout << "   Develop & Designer of game : maazkhan75 \n";
			for (int i = 0; i < 68; i++) {
				cout << ".";
				delay(4);
			}
			cout << "\n\n\n         .......press ENTER to return to main menu.......\n";
			cin.ignore();
			cin.get();
			cls();
			gotoxy(0, 0);
			cout << "\n\n\n\n\n\n";
		}
		if (option == '5') {            //quit game option
			cls();
			gotoxy(0, 0);
			for (int i = 0; i < 700; i++) {
				drawRectangle(0, 0, 1 + i, 700, 140, 0 , 0, 140, 0, 0);

			}
			cls();
			cout << endl << endl << endl;
			cout << "                    ";
			for (int i = 0; i < 7; i++) {

				cout << ".";
				delay(80);
			}
			cout << " EXITING GAME ";
			for (int i = 7; i > 0; i--) {
				cout << ".";
				delay(80);
			}
			delay(50);
			cout << "\n\n\n\n\n\n\n\n\n";
			cout << "              ";
			for (int i = 0; i < 6; i++) {
				cout << "~";
				delay(110);
			}
			cout << "press enter to conirm exit";
			for (int i = 6; i > 0; i--) {
				cout << "~";
				delay(110);
			}
			cout << "\n\n\n\n\n\n\n";
			flag = false;
		}

	}
	return 0;
}


