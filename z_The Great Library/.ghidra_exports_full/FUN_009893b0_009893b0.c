// FUN_009893b0 @ 009893b0 body=[[009893b0, 00989422]]


undefined1 * FUN_009893b0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0098a150(&DAT_00e378b0,2);
  iVar2 = FUN_0098a1c0(&DAT_00e378b0,2);
  if ((iVar1 != -1) && (iVar2 != -1)) {
    FUN_009895f0(iVar2 + 1);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return param_1;
}

