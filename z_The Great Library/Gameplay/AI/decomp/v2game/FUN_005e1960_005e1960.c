// FUN_005e1960 @ 005e1960 body=[[005e1960, 005e19aa]]


void FUN_005e1960(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b53233;
  local_14 = ExceptionList;
  if (param_2 != 0x2f9) {
    ExceptionList = &local_14;
    FUN_009a2620();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_005ab780();
  uStack_c = 0;
  FUN_0072d580();
  iVar1 = *(int *)(in_ECX + 0x40);
  puVar3 = (undefined4 *)FUN_00aae9af();
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = uStack_40;
    puVar3[1] = uStack_3c;
    puVar3[2] = uStack_38;
    puVar3[8] = 0xf;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    FUN_00408ed0();
    puVar3[10] = iVar1;
    puVar3[0xb] = 0;
    *(undefined1 *)(puVar3 + 0xc) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x44);
  *(undefined4 **)(in_ECX + 0x40) = puVar3;
  *(int *)(in_ECX + 0x44) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 0x3c) = puVar3;
  }
  else {
    *(undefined4 **)(iVar1 + 0x2c) = puVar3;
  }
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

