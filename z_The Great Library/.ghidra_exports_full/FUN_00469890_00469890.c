// FUN_00469890 @ 00469890 body=[[00469890, 00469974]]


int FUN_00469890(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  uStack_20 = 0x4698a7;
  iVar1 = FUN_00467240();
  iStack_1c = 0;
  iStack_24 = param_3[1];
  uStack_28 = *param_3;
  uStack_20 = 0x2d2d2d;
  iStack_30 = iVar1 + 0x24;
  uStack_2c = 0;
  iStack_34 = 0x4698ce;
  FUN_00465e90();
  iStack_34 = param_1[9] / 1000;
  puStack_38 = (undefined1 *)0x1;
  FUN_00466050(iVar1 + 0x34);
  iStack_1c = param_2[0x16];
  uStack_20 = 0;
  uStack_28 = 0x4698fe;
  iStack_24 = iVar1 + 0x34;
  FUN_00466050();
  puStack_38 = (undefined1 *)0x469911;
  FUN_004da280();
  puStack_38 = (undefined1 *)0x2;
  FUN_00464b30(iVar1,0);
  ppuVar2 = &puStack_38;
  puStack_38 = (undefined1 *)&iStack_34;
  (**(code **)(*param_1 + 0x20))();
  FUN_00464b30(iVar1,0,1);
  (**(code **)(*param_2 + 0x1c))(&puStack_38);
  FUN_00464b30(iVar1,0,0,ppuVar2);
  iStack_24 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  uStack_28 = 0;
  uStack_2c = 0x46996a;
  FUN_00464bd0();
  return iVar1;
}

