// FUN_0073ba60 @ 0073ba60 body=[[0073ba60, 0073bac7] [0073bacb, 0073bb72]]


void FUN_0073ba60(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fe98;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("progress_button",0xf);
  local_8 = 0;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_38);
  iVar1 = DAT_012588e8;
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  puVar4 = (undefined4 *)(DAT_012588e8 + 0xb5c);
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  cVar2 = FUN_004bbd60(*(undefined4 *)(in_ECX + 0x30));
  if (cVar2 != '\0') {
    if ((*(int *)(*(int *)(in_ECX + 0x30) + 0x164) != 0) &&
       (**(int **)(*(int *)(in_ECX + 0x30) + 0x15c) != 0)) {
      local_1c = *puVar4;
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xb60) * 4);
      iVar3 = FUN_004cd300(puVar4);
      cVar2 = iVar3 <= *(int *)(iVar1 + 0x15c4) - *(int *)(iVar1 + 0x15c0);
    }
    if (cVar2 != '\0') {
      (**(code **)(*local_14 + 0xb8))();
      ExceptionList = local_10;
      return;
    }
  }
  (**(code **)(*local_14 + 0xbc))();
  ExceptionList = local_10;
  return;
}

