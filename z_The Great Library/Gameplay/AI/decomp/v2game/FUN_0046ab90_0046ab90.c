// FUN_0046ab90 @ 0046ab90 body=[[0046ab90, 0046ac1e]]


int FUN_0046ab90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = FUN_00467240(in_EAX);
  FUN_00465e90(iVar1 + 0x24,1,*param_2,param_2[1],0x2d2d2d,0);
  FUN_00465e90(iVar1 + 0x24,0,*param_1,param_1[1],0x2d2d2d,0);
  FUN_00466050(iVar1 + 0x34,0,param_3);
  FUN_00464bd0(0,*(undefined4 *)(DAT_012588e8 + 0xb0c));
  return iVar1;
}

