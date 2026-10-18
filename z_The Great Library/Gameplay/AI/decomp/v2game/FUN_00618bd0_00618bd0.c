// FUN_00618bd0 @ 00618bd0 body=[[00618bd0, 00618c4f] [00618c53, 00618cb9]]


void FUN_00618bd0(longlong *param_1)

{
  int iVar1;
  int unaff_EDI;
  float10 fVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009269a0(*(undefined4 *)(unaff_EDI + 0x6c));
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("repay_slider",0xc);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 4) + 0x4c))(local_44);
  fVar2 = (float10)(**(code **)(*(int *)(iVar1 + 0x54) + 0x10))();
  local_18 = (float)(fVar2 / (float10)100.0);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  if (local_18 < 0.0) {
    local_20 = 0xbfe0000000000000;
  }
  else {
    local_20 = 0x3fe0000000000000;
  }
  uVar3 = FUN_00b31c36();
  lVar4 = __allmul(uVar3,local_28,local_24);
  *param_1 = lVar4 >> 0xf;
  ExceptionList = local_10;
  return;
}

