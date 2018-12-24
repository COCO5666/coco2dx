#ifndef  _GLOBAL_DEFINE_H_
#define  _GLOBAL_DEFINE_H_

#define BACKGROUND_ROW 20
#define BACKGROUND_COL 10
#define BACKGROUND_ROW_CODE ((1<<BACKGROUND_COL)-1)
#define BACKGROUND_ROW_MASK (~BACKGROUND_ROW_CODE)

enum TetrominoShape{
	TS_SQUARE = 0, //����
	TS_T      = 1, //T��
	TS_1      = 2, //1��
	TS_L      = 3, //L��
	TS_R_L    = 4, //��L��
	TS_Z      = 5, //Z��
	TS_R_Z    = 6 //��Z��

};

const int g_tetrominoShapeCode[][4][4]=
{
	{{0x3,0x3,0x0,0x0},{0x3,0x3,0x0,0x0},{0x3,0x3,0x0,0x0},{0x3,0x3,0x0,0x0}}, //����
	{{0x2,0x7,0x0,0x0},{0x1,0x3,0x1,0x0},{0x7,0x2,0x0,0x0},{0x2,0x3,0x2,0x0}}, //T��
	{{0x1,0x1,0x1,0x1},{0xf,0x0,0x0,0x0},{0x1,0x1,0x1,0x1},{0xf,0x0,0x0,0x0}}, //1��
	{{0x3,0x2,0x2,0x0},{0x4,0x7,0x0,0x0},{0x1,0x1,0x3,0x0},{0x7,0x1,0x0,0x0}}, //L��
	{{0x3,0x1,0x1,0x0},{0x7,0x4,0x0,0x0},{0x2,0x2,0x3,0x0},{0x1,0x7,0x0,0x0}}, //��L��
	{{0x3,0x6,0x0,0x0},{0x2,0x3,0x1,0x0},{0x3,0x6,0x0,0x0},{0x2,0x3,0x1,0x0}}, //Z��
	{{0x6,0x3,0x0,0x0},{0x1,0x3,0x2,0x0},{0x6,0x3,0x0,0x0},{0x1,0x3,0x2,0x0}}  //��Z��
};

//�����¼��Ĵ���ƫ��
const int g_touchCorrect[][4]=
{
	{1,1,1,1}, //����
	{1,1,1,1}, //T��
	{0,2,0,2}, //1��
	{1,1,1,1}, //L��
	{1,1,1,1}, //��L��
	{1,1,1,1}, //Z��
	{1,1,1,1}  //��Z��
};

//��ת�¼��ķ���ƫ��
const int g_rotateCorrect[][4]=
{
	{0,  0,  0, 0}, //����
	{0,  0,  0, 0}, //T��
	{-1, 1, -1, 1}, //1��
	{0,  0,  0, 0}, //L��
	{0,  0,  0, 0}, //��L��
	{0,  0,  0, 0}, //Z��
	{0,  0,  0, 0}, //��Z��
};

const char* const g_fnBlockText[7] = {
	"block.png",
	"block.png",
	"block.png",
	"block.png",
	"block.png",
	"block.png",
	"block.png"
};

#endif