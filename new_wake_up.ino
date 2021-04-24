/*  Dynamixel SyncWrite
 
 This example shows same movement as previous syncwrite
 
                 Compatibility
 CM900                  O
 OpenCM9.04             O
 
                  Dynamixel Compatibility
               AX    MX      RX    XL-320    Pro
 CM900          O      O      O        O      X
 OpenCM9.04     O      O      O        O      X
 **** OpenCM 485 EXP board is needed to use 4 pin Dynamixel and Pro Series ****  
 
 created 16 Nov 2012
 by ROBOTIS CO,.LTD.
 */
/* Dynamixel ID defines */
#define ID_NUM_2  2
#define ID_NUM_3  3
#define ID_NUM_4  4
#define ID_NUM_5  5
#define ID_NUM_6  6
#define ID_NUM_7  7
#define ID_NUM_8  8
#define ID_NUM_9  9
#define ID_NUM_10  10
#define ID_NUM_11  11
#define ID_NUM_12  12
#define ID_NUM_13  13

#define ID_NUM_15  15
#define ID_NUM_16  16
#define ID_NUM_17  17
#define ID_NUM_18  18
#define ID_NUM_19  19
#define ID_NUM_20  20
#define ID_NUM_21  21
#define ID_NUM_22  22

/* Control table defines */
#define P_GOAL_POSITION    30
#define P_GOAL_SPEED    32

/********* Sync write data  **************
 * ID1, DATA1, DATA2..., ID2, DATA1, DATA2,...
 ******************************************
 */
 /* Serial device defines for dxl bus */
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP

int de2pos_AX12(float _angle){
  int ret;
  float D2R = 3.14f/180.0f;
  _angle = _angle * D2R;
  ret = _angle * 197;
  ret = ret + 512;
  
  return ret;
}

int de2pos_MX28(float _angle){
  int ret;
  float D2R = 3.14f/180.0f;
  _angle = _angle * D2R;
  ret = _angle * 788;
  ret = ret + 2048;
  
  return ret;
}

Dynamixel Dxl(DXL_BUS_SERIAL1);

word keadaan_awal[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),60,
  ID_NUM_4,de2pos_MX28(0),60,
  ID_NUM_5,de2pos_MX28(0),60,
  ID_NUM_6,de2pos_MX28(0),60,
  ID_NUM_7,de2pos_MX28(0),60,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),60,
  ID_NUM_10,de2pos_MX28(0),60,
  ID_NUM_11,de2pos_MX28(0),60,
  ID_NUM_12,de2pos_MX28(0),60,
  ID_NUM_13,de2pos_MX28(0),60,
  ID_NUM_15,de2pos_AX12(0),60,
  ID_NUM_16,de2pos_AX12(0),60,
  ID_NUM_17,de2pos_AX12(0),60,
  ID_NUM_18,de2pos_AX12(0),60,
  ID_NUM_19,de2pos_AX12(0),60,
  ID_NUM_20,de2pos_AX12(0),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(0),60,};
word bangun_Terlentang_1[60]=
{   
  ID_NUM_2,500,50,  
  ID_NUM_3,2067,50,
  ID_NUM_4,2947,50,
  ID_NUM_5,3181,50,
  ID_NUM_6,2466,50,
  ID_NUM_7,2049,50,
  ID_NUM_8,500,50,
  ID_NUM_9,1994,50,
  ID_NUM_10,1160,50,
  ID_NUM_11,1014,50,
  ID_NUM_12,1900,50,
  ID_NUM_13,2097,50,
  ID_NUM_15,154,50,
  ID_NUM_16,519,50,
  ID_NUM_17,de2pos_AX12(118),50,
  ID_NUM_18,871,50,
  ID_NUM_19,490,50,
  ID_NUM_20,de2pos_AX12(-118),50,
  ID_NUM_21,511,50,
  ID_NUM_22,607,50,}; 
word bangun_Terlentang_2[60]=
{ 
  ID_NUM_2,500,60,
  ID_NUM_3,2069,60,
  ID_NUM_4,2839,60,
  ID_NUM_5,3179,60,
  ID_NUM_6,1735,60,
  ID_NUM_7,2058,60,
  ID_NUM_8,500,60,
  ID_NUM_9,2005,60,
  ID_NUM_10,1240,60,
  ID_NUM_11,922,60,
  ID_NUM_12,2365,60,
  ID_NUM_13,2072,60,
  ID_NUM_15,154,60,
  ID_NUM_16,519,60,
  ID_NUM_17,de2pos_AX12(51),60,
  ID_NUM_18,867,60,
  ID_NUM_19,490,60,
  ID_NUM_20,de2pos_AX12(-51),60,
  ID_NUM_21,511,60,
  ID_NUM_22,607,60,};
word bangun_Terlentang_3[60]=
{ 
  ID_NUM_2,500,60,
  ID_NUM_3,2059,60,
  ID_NUM_4,2836,60,
  ID_NUM_5,3162,60,
  ID_NUM_6,1697,60,
  ID_NUM_7,2039,60,
  ID_NUM_8,500,60,
  ID_NUM_9,1996,60,
  ID_NUM_10,1232,60,
  ID_NUM_11,922,60,
  ID_NUM_12,2381,60,
  ID_NUM_13,2087,60,
  ID_NUM_15,116,60,
  ID_NUM_16,519,60,
  ID_NUM_17,de2pos_AX12(51),60,
  ID_NUM_18,905,60,
  ID_NUM_19,489,60,
  ID_NUM_20,de2pos_AX12(-51),60,
  ID_NUM_21,511,60,
  ID_NUM_22,607,60,};
word bangun_Terlentang_4[60]=
{ 
  ID_NUM_2,500,60,
  ID_NUM_3,2077,60,
  ID_NUM_4,2032,60,
  ID_NUM_5,3093,60,
  ID_NUM_6,2087,60,
  ID_NUM_7,2019,60,
  ID_NUM_8,500,60,
  ID_NUM_9,2012,60,
  ID_NUM_10,2079,60,
  ID_NUM_11,1076,60,
  ID_NUM_12,2059,60,
  ID_NUM_13,1978,60,
  ID_NUM_15,0,60,
  ID_NUM_16,519,60,
  ID_NUM_17,de2pos_AX12(62),60,
  ID_NUM_18,1023,60,
  ID_NUM_19,489,60,
  ID_NUM_20,de2pos_AX12(-62),60,
  ID_NUM_21,511,60,
  ID_NUM_22,607,60,};

word bangun_Terlentang_5[60]=
{ 
  ID_NUM_2,500,60,
  ID_NUM_3,2057,60,
  ID_NUM_4,1649,60,
  ID_NUM_5,3264,60,
  ID_NUM_6,2945,60,
  ID_NUM_7,2046,60,
  ID_NUM_8,500,60,
  ID_NUM_9,2046,60,
  ID_NUM_10,2479,60,
  ID_NUM_11,857,60,
  ID_NUM_12,1162,60,
  ID_NUM_13,2034,60,
  ID_NUM_15,219,60,
  ID_NUM_16,531,60,
  ID_NUM_17,de2pos_AX12(27),60,
  ID_NUM_18,801,60,
  ID_NUM_19,506,60,
  ID_NUM_20,de2pos_AX12(-27),60,
  ID_NUM_21,511,60,
  ID_NUM_22,606,60,};
word bangun_Terlentang_6[60]=
{ 
  ID_NUM_2,500,80,
  ID_NUM_3,2108,80,
  ID_NUM_4,2147,80,
  ID_NUM_5,3251,80,
  ID_NUM_6,3038,80,
  ID_NUM_7,2063,80,
  ID_NUM_8,500,80,
  ID_NUM_9,2038,80,
  ID_NUM_10,1978,80,
  ID_NUM_11,888,80,
  ID_NUM_12,1083,80,
  ID_NUM_13,1995,80,
  ID_NUM_15,512,80,
  ID_NUM_16,529,80,
  ID_NUM_17,de2pos_AX12(27),80,
  ID_NUM_18,512,80,
  ID_NUM_19,505,80,
  ID_NUM_20,de2pos_AX12(-27),80,
  ID_NUM_21,511,80,
  ID_NUM_22,606,80,};
word bangun_Terlentang_7[60]=
{ 
  ID_NUM_2,500,50,
  ID_NUM_3,2110,50,
  ID_NUM_4,2950,50,
  ID_NUM_5,3317,50,
  ID_NUM_6,2765,50,
  ID_NUM_7,2091,50,
  ID_NUM_8,500,50,
  ID_NUM_9,2051,50,
  ID_NUM_10,1712,50,
  ID_NUM_11,783,50,
  ID_NUM_12,1394,50,
  ID_NUM_13,2080,50,
  ID_NUM_15,468,50,
  ID_NUM_16,519,50,
  ID_NUM_17,de2pos_AX12(27),50,
  ID_NUM_18,580,50,
  ID_NUM_19,489,50,
  ID_NUM_20,de2pos_AX12(-27),50,
  ID_NUM_21,511,50,
  ID_NUM_22,606,50,};
word bangun_Terlentang_8[60]=
{ 
  ID_NUM_2,512,50,
  ID_NUM_3,2048,50,
  ID_NUM_4,de2pos_MX28(43),46,
  ID_NUM_5,de2pos_MX28(59),42,
  ID_NUM_6,de2pos_MX28(29),62,
  ID_NUM_7,2048,50,
  ID_NUM_8,512,50,
  ID_NUM_9,2048,50,
  ID_NUM_10,de2pos_MX28(-43),46,
  ID_NUM_11,de2pos_MX28(-59),42,
  ID_NUM_12,de2pos_MX28(-29),62,
  ID_NUM_13,2048,50,
  ID_NUM_15,489,50,
  ID_NUM_16,554,50,
  ID_NUM_17,de2pos_AX12(27),50,
  ID_NUM_18,533,50,
  ID_NUM_19,502,50,
  ID_NUM_20,de2pos_AX12(-27),50,
  ID_NUM_21,511,50,
  ID_NUM_22,606,50,};
void setup(){
// Dynamixel 2.0 Protocol -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps 
  Serial3.begin(9600);
  Dxl.begin(3);
  Dxl.jointMode(ID_NUM_2);
  Dxl.jointMode(ID_NUM_3);
  Dxl.jointMode(ID_NUM_4);
  Dxl.jointMode(ID_NUM_5);
  Dxl.jointMode(ID_NUM_6);
  Dxl.jointMode(ID_NUM_7);
  Dxl.jointMode(ID_NUM_8);
  Dxl.jointMode(ID_NUM_9);
  Dxl.jointMode(ID_NUM_10);
  Dxl.jointMode(ID_NUM_11);
  Dxl.jointMode(ID_NUM_12);
  Dxl.jointMode(ID_NUM_13);
  Dxl.jointMode(ID_NUM_15);
  Dxl.jointMode(ID_NUM_16);
  Dxl.jointMode(ID_NUM_17);
  Dxl.jointMode(ID_NUM_18);
  Dxl.jointMode(ID_NUM_19);
  Dxl.jointMode(ID_NUM_20);
  Dxl.jointMode(ID_NUM_21);
  Dxl.jointMode(ID_NUM_22);
  
  delay(1000);
  Dxl.syncWrite(30,2,keadaan_awal,60);

}

void loop(){
/*
 * byte syncWrite(byte start_addr, byte num_of_data, int *param, int array_length);
 */
  Dxl.syncWrite(30,2,bangun_Terlentang_1,60);
  delay(2000);
  Dxl.syncWrite(30,2,bangun_Terlentang_2,60);
  delay(2000);
  Dxl.syncWrite(30,2,bangun_Terlentang_3,60);
  delay(2000);
  Dxl.syncWrite(30,2,bangun_Terlentang_4,60);
  delay(2000);
  Dxl.syncWrite(30,2,bangun_Terlentang_5,60);
  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_6,60);
  delay(3000);
//  Dxl.syncWrite(30,2,bangun_Terlentang_7,60);
//  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_8,60);
  delay(3000);

}




