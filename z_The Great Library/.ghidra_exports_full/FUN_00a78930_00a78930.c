// FUN_00a78930 @ 00a78930 body=[[00a78930, 00a789df] [00a789e3, 00a789f8]]


int FUN_00a78930(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_01258b44;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d748;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_00a78c90(param_1);
  if (iVar3 != *(int *)(iVar1 + 4)) {
    cVar2 = FUN_0098ab20();
    if (cVar2 == '\0') goto LAB_00a789e3;
  }
  local_18 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_30 = local_18;
  local_28 = local_18;
  local_20 = local_18;
  local_8 = 0;
  uVar4 = FUN_00a791f0(local_4c);
  FUN_00a78d20(iVar3,uVar4);
  iVar3 = param_1;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
LAB_00a789e3:
  ExceptionList = local_10;
  return iVar3 + 0x28;
}

