// FUN_00469ee0 @ 00469ee0 body=[[00469ee0, 00469fbb]]


int FUN_00469ee0(int param_1)

{
  int iVar1;
  uint extraout_ECX;
  undefined1 *puStack_38;
  uint local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0x469ef7;
  iVar1 = FUN_00467240();
  local_24 = *(undefined4 *)(param_1 + 0x50);
  uStack_1c = 0;
  uStack_28 = *(undefined4 *)(param_1 + 0x4c);
  local_20 = 0x2d2d2d;
  iStack_30 = iVar1 + 0x24;
  uStack_2c = 0;
  local_34 = 0x469f1c;
  FUN_00465e90();
  puStack_38 = (undefined1 *)0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = extraout_ECX & 0xffffff00;
  FUN_00408ed0(*(int *)(param_1 + 0x54) + 0xc,0);
  puStack_38 = (undefined1 *)0x3;
  FUN_00464b30(iVar1,0);
  puStack_38 = (undefined1 *)&local_34;
  (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  FUN_00464b30(iVar1,0,2);
  FUN_00979160(param_1);
  FUN_00464b30(iVar1,0,1);
  FUN_009790b0(param_1,&puStack_38);
  FUN_00464b30(iVar1,0,0);
  local_20 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_24 = 0;
  uStack_28 = 0x469fb1;
  FUN_00464bd0();
  return iVar1;
}

