// FUN_00458030 @ 00458030 body=[[00458030, 00458069] [00458070, 0045814f] [00458153, 004581de] [004581e2, 004581f1]]


void FUN_00458030(undefined4 param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  char local_24c [256];
  undefined4 local_14c;
  char local_148 [256];
  undefined4 local_48 [5];
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  iVar3 = *(int *)(in_ECX + 8);
  iVar5 = 0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (0 < (int)(*(int *)(in_ECX + 0xc) - iVar3 & 0xfffffffcU)) {
    do {
      ExceptionList = ppvVar2;
      piVar1 = *(int **)(iVar3 + iVar5 * 4);
      FUN_009a0940(param_1);
      (**(code **)(*piVar1 + 4))(param_1);
      iVar3 = *(int *)(in_ECX + 8);
      iVar5 = iVar5 + 1;
      ppvVar2 = ExceptionList;
    } while (iVar5 < *(int *)(in_ECX + 0xc) - iVar3 >> 2);
  }
  iVar3 = *(int *)(in_ECX + 0x18);
  if (0 < (int)(*(int *)(in_ECX + 0x1c) - iVar3 & 0xfffffffcU)) {
    iVar5 = 0;
    do {
      piVar1 = *(int **)(iVar3 + iVar5 * 4);
      FUN_009a0940(param_1);
      (**(code **)(*piVar1 + 4))(param_1);
      iVar3 = *(int *)(in_ECX + 0x18);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1c) - iVar3 >> 2);
  }
  if (0 < (*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28)) / 0x1c) {
    FUN_00457540(0x40d,in_ECX + 0x28,1);
  }
  FUN_0043acd0(in_ECX + 0x38,local_48);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (local_34 < 0x10) {
    uVar6 = *(undefined4 *)(in_ECX + 0x3c);
    FUN_009a0940(param_1);
    local_14c = 0xc;
    _sprintf(local_148,"%d",uVar6);
    FUN_0099ff90(param_1);
    puVar4 = (undefined4 *)FUN_00990880();
    local_8 = 1;
    uVar6 = 0x10;
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    __snprintf(local_24c,0xff,"%s",puVar4);
    FUN_0099ff90(param_1);
    if (local_18 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

