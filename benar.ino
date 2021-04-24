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
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(2),60,
  ID_NUM_4,de2pos_MX28(-6),60,
  ID_NUM_5,de2pos_MX28(30),60,
  ID_NUM_6,de2pos_MX28(19),60,
  ID_NUM_7,de2pos_MX28(0),60,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(-2),60,
  ID_NUM_10,de2pos_MX28(6),60,
  ID_NUM_11,de2pos_MX28(-30),60,
  ID_NUM_12,de2pos_MX28(-19),60,
  ID_NUM_13,de2pos_MX28(0),60,
  ID_NUM_15,de2pos_AX12(5),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(-5),60,
  ID_NUM_18,de2pos_AX12(-5),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(4),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(-25),60,};
word bangun_Terlentang_2[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),60,
  ID_NUM_4,de2pos_MX28(21),60,
  ID_NUM_5,de2pos_MX28(49),60,
  ID_NUM_6,de2pos_MX28(49),60,
  ID_NUM_7,de2pos_MX28(0),60,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),60,
  ID_NUM_10,de2pos_MX28(-21),60,
  ID_NUM_11,de2pos_MX28(-49),60,
  ID_NUM_12,de2pos_MX28(-49),60,
  ID_NUM_13,de2pos_MX28(0),60,
  ID_NUM_15,de2pos_AX12(32),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(0),60,
  ID_NUM_18,de2pos_AX12(-32),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(0),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(14),60,};
word bangun_Terlentang_3[60]=
{ 
    ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),50,
  ID_NUM_4,de2pos_MX28(105),50,
  ID_NUM_5,de2pos_MX28(108),50,
  ID_NUM_6,de2pos_MX28(47),50,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-105),50,
  ID_NUM_11,de2pos_MX28(-108),50,
  ID_NUM_12,de2pos_MX28(-47),50,
  ID_NUM_13,de2pos_MX28(0),60,
  ID_NUM_15,de2pos_AX12(32),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(0),60,
  ID_NUM_18,de2pos_AX12(-32),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(0),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(14),60,};
word bangun_Terlentang_4[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),50,
  ID_NUM_4,de2pos_MX28(109),50,
  ID_NUM_5,de2pos_MX28(111),50,
  ID_NUM_6,de2pos_MX28(35),50,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-109),50,
  ID_NUM_11,de2pos_MX28(-111),50,
  ID_NUM_12,de2pos_MX28(-35),50,
  ID_NUM_13,de2pos_MX28(0),50,
  ID_NUM_15,de2pos_AX12(-36),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(148),60,
  ID_NUM_18,de2pos_AX12(36),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(-148),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(14),60,};
word bangun_Terlentang_5[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),50,
  ID_NUM_4,de2pos_MX28(109),50,
  ID_NUM_5,de2pos_MX28(111),50,
  ID_NUM_6,de2pos_MX28(35),50,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-109),50,
  ID_NUM_11,de2pos_MX28(-111),50,
  ID_NUM_12,de2pos_MX28(-35),50,
  ID_NUM_13,de2pos_MX28(0),50,
  ID_NUM_15,de2pos_AX12(36),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(148),60,
  ID_NUM_18,de2pos_AX12(-36),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(-148),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(14),60,};
word bangun_Terlentang_6[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),50,
  ID_NUM_4,de2pos_MX28(109),50,
  ID_NUM_5,de2pos_MX28(105),50,
  ID_NUM_6,de2pos_MX28(35),50,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-109),50,
  ID_NUM_11,de2pos_MX28(-105),50,
  ID_NUM_12,de2pos_MX28(-35),50,
  ID_NUM_13,de2pos_MX28(0),50,
  ID_NUM_15,de2pos_AX12(36),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(148),60,
  ID_NUM_18,de2pos_AX12(-36),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(-148),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(14),60,};
word bangun_Terlentang_7[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),50,
  ID_NUM_4,de2pos_MX28(109),50,
  ID_NUM_5,de2pos_MX28(105),50,
  ID_NUM_6,de2pos_MX28(35),50,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-109),50,
  ID_NUM_11,de2pos_MX28(-105),50,
  ID_NUM_12,de2pos_MX28(-35),50,
  ID_NUM_13,de2pos_MX28(0),50,
  ID_NUM_15,de2pos_AX12(50),255,
  ID_NUM_16,de2pos_AX12(10),255,
  ID_NUM_17,de2pos_AX12(0),255,
  ID_NUM_18,de2pos_AX12(-50),255,
  ID_NUM_19,de2pos_AX12(-10),255,
  ID_NUM_20,de2pos_AX12(0),255,
  ID_NUM_21,de2pos_AX12(0),255,
  ID_NUM_22,de2pos_AX12(14),255,};
word bangun_Terlentang_8[60]=
{ 
  ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),30,
  ID_NUM_4,de2pos_MX28(85),50,
  ID_NUM_5,de2pos_MX28(105),50,
  ID_NUM_6,de2pos_MX28(35),50,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-85),50,
  ID_NUM_11,de2pos_MX28(-105),50,
  ID_NUM_12,de2pos_MX28(-35),50,
  ID_NUM_13,de2pos_MX28(0),30,
  ID_NUM_15,de2pos_AX12(50),60,
  ID_NUM_16,de2pos_AX12(10),60,
  ID_NUM_17,de2pos_AX12(0),60,
  ID_NUM_18,de2pos_AX12(-50),60,
  ID_NUM_19,de2pos_AX12(-10),60,
  ID_NUM_20,de2pos_AX12(0),60,
  ID_NUM_21,de2pos_AX12(0),60,
  ID_NUM_22,de2pos_AX12(14),60,};
word bangun_Terlentang_9[60]=
{ 
    ID_NUM_2,de2pos_AX12(0),60,
  ID_NUM_3,de2pos_MX28(0),30,
  ID_NUM_4,de2pos_MX28(55),25,
  ID_NUM_5,de2pos_MX28(61),45,
  ID_NUM_6,de2pos_MX28(25),15,
  ID_NUM_7,de2pos_MX28(0),50,
  ID_NUM_8,de2pos_AX12(0),60,
  ID_NUM_9,de2pos_MX28(0),50,
  ID_NUM_10,de2pos_MX28(-55),25,
  ID_NUM_11,de2pos_MX28(-61),45,
  ID_NUM_12,de2pos_MX28(-25),15,
  ID_NUM_13,de2pos_MX28(0),30,
  ID_NUM_15,de2pos_AX12(0),50,
  ID_NUM_16,de2pos_AX12(10),50,
  ID_NUM_17,de2pos_AX12(0),50,
  ID_NUM_18,de2pos_AX12(0),50,
  ID_NUM_19,de2pos_AX12(-10),50,
  ID_NUM_20,de2pos_AX12(0),50,
  ID_NUM_21,de2pos_AX12(0),50,
  ID_NUM_22,de2pos_AX12(14),50,};
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
  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_4,60);
  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_5,60);
  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_6,60);
  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_7,60);
  delay(4500);
  Dxl.syncWrite(30,2,bangun_Terlentang_8,60);
  delay(3000);
  Dxl.syncWrite(30,2,bangun_Terlentang_9,60);
  delay(5000);

}




