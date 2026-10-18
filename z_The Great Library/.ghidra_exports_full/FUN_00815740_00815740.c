// FUN_00815740 @ 00815740 body=[[00815740, 008157ab] [008157af, 0081580c] [00815810, 00815887]]


void FUN_00815740(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("RiverShader",0xb);
  local_8 = 0;
  FUN_009bec30(local_48,*(undefined4 *)(*in_ECX + 100));
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("RiverShader",0xb);
  local_8 = 1;
  iVar1 = *in_ECX;
  piVar2 = (int *)FUN_00a45090(local_2c);
  iVar3 = 0;
  if (*piVar2 != 0) {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x6bd00) + -4 + *piVar2 * 4);
  }
  local_8 = 0xffffffff;
  in_ECX[0x1c] = iVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_009bd030(*in_ECX + 0x158,in_ECX[0x20]);
  FUN_009bd030(*in_ECX + 0x158,in_ECX[0x21]);
  FUN_009bd030(*in_ECX + 0x158,in_ECX[0x1f]);
  FUN_009bd030(*in_ECX + 0x158,in_ECX[0x22]);
  FUN_00815890();
  ExceptionList = local_10;
  return;
}

