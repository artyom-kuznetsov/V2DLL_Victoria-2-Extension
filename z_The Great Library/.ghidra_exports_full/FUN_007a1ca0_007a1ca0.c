// FUN_007a1ca0 @ 007a1ca0 body=[[007a1ca0, 007a1d73] [007a1d77, 007a1df1] [007a1df5, 007a1e96]]


void FUN_007a1ca0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EDI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43662;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_14 = puVar2;
    FUN_00409350("chat_message",0xc);
    uVar3 = *(undefined4 *)(unaff_EDI + 200);
    piVar1 = *(int **)(unaff_EDI + 0xc4);
    local_18 = 1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[7] = &PTR_FUN_00e39158;
    local_8 = 5;
    *puVar2 = &PTR_FUN_00e392f0;
    puVar2[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(puVar2 + 9) = 0;
    uVar3 = (**(code **)(*piVar1 + 0x2c))(local_34,uVar3);
    puVar2[8] = uVar3;
    local_14 = puVar2;
  }
  local_8 = 0xffffffff;
  if ((local_18 & 1) != 0) {
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("ChatMemberText",0xe);
  local_8 = 7;
  (**(code **)(*(int *)local_14[8] + 0x3c))(local_50);
  FUN_00408ed0(param_1,0,0xffffffff);
  FUN_00a5ecc0(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  (**(code **)(**(int **)(unaff_EDI + 0x40) + 0x10))(local_14,1);
  iVar4 = (**(code **)(**(int **)(unaff_EDI + 0x40) + 0x2c))();
  if (500 < *(int *)(iVar4 + 8)) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(unaff_EDI + 0x40) + 0x2c))();
    puVar2 = *(undefined4 **)*puVar2;
    (**(code **)(**(int **)(unaff_EDI + 0x40) + 0x20))(puVar2,1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  if ((*(int *)(*(int *)(unaff_EDI + 0x34) + 0x75c) == 5) && (*(char *)(unaff_EDI + 0x30) != '\0'))
  {
    (**(code **)(**(int **)(unaff_EDI + 0x40) + 0x50))();
    ExceptionList = local_10;
    return;
  }
  (**(code **)(**(int **)(unaff_EDI + 0x40) + 0x54))();
  ExceptionList = local_10;
  return;
}

