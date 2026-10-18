// FUN_00924310 @ 00924310 body=[[00924310, 00924364]]


undefined1 * FUN_00924310(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x2c);
  iVar1 = *(int *)(DAT_012588e8 + 0xb60);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (iVar2 == iVar1) {
    FUN_00409350("WETARGET_DECREASEOPINION",0x18);
    return param_1;
  }
  FUN_00409350(&DAT_00ded94d,0);
  return param_1;
}

