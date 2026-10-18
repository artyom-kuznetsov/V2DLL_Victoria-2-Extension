// FUN_00a3a330 @ 00a3a330 body=[[00a3a330, 00a3a476]]


void FUN_00a3a330(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b7f6;
  local_10 = ExceptionList;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar5 = iVar1;
    do {
      if ((*(int *)(in_ECX + 0x24) < *(int *)(iVar5 + 0x24)) ||
         ((*(int *)(in_ECX + 0x24) <= *(int *)(iVar5 + 0x24) &&
          (*(uint *)(in_ECX + 0x20) <= *(uint *)(iVar5 + 0x20))))) {
        if (iVar5 != iVar1) {
          iVar1 = *(int *)(iVar5 + 0x2c);
          ExceptionList = &local_10;
          iVar3 = FUN_00aae9af(0x38);
          local_8 = 1;
          if (iVar3 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00a3a6c0(iVar5,iVar1);
          }
          *(undefined4 *)(iVar5 + 0x2c) = uVar4;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x28) = uVar4;
          }
          param_1[2] = param_1[2] + 1;
          ExceptionList = local_10;
          return;
        }
        ExceptionList = &local_10;
        puVar2 = (undefined1 *)FUN_00aae9af(0x38);
        local_8 = 0;
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          *(undefined4 *)(puVar2 + 0x14) = 0xf;
          *(undefined4 *)(puVar2 + 0x10) = 0;
          *puVar2 = 0;
          FUN_00408ed0(in_ECX,0,0xffffffff);
          *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
          *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
          *(int *)(puVar2 + 0x28) = iVar1;
          *(undefined4 *)(puVar2 + 0x2c) = 0;
          puVar2[0x30] = 0;
        }
        iVar5 = param_1[2];
        param_1[1] = puVar2;
        param_1[2] = iVar5 + 1;
        if (iVar5 != 0) {
          *(undefined1 **)(iVar1 + 0x2c) = puVar2;
          ExceptionList = local_10;
          return;
        }
        *param_1 = puVar2;
        ExceptionList = local_10;
        return;
      }
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
  }
  ExceptionList = &local_10;
  FUN_00a3aa10(in_ECX);
  ExceptionList = local_10;
  return;
}

