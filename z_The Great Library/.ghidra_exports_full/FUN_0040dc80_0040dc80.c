// FUN_0040dc80 @ 0040dc80 body=[[0040dc80, 0040dd9e]]


void FUN_0040dc80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4dd96;
  local_10 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x364) - *(int *)(in_ECX + 0x360) >> 2;
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_ECX + 0x360);
    while (*piVar3 != param_1) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_00aae9af(0x48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0x18d;
      *puVar2 = CCommand::vftable;
      puVar2[7] = 0xf;
      puVar2[6] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      local_8 = 1;
      puVar2[0xb] = 0xa16;
      puVar2[0xc] = 0xa16;
      *(undefined2 *)(puVar2 + 0xd) = 0xffff;
      FUN_00409350(&DAT_00ded94d,0);
      puVar2[9] = 0;
      *(undefined2 *)(puVar2 + 10) = 0;
      *(undefined2 *)((int)puVar2 + 0x36) = 0;
      puVar2[0xe] = 0;
      *puVar2 = CBattlePlanDeleteCommand::vftable;
      puVar2[0xf] = *(undefined4 *)(param_1 + 0x214);
      puVar2[0x10] = *(undefined4 *)(param_1 + 0x218);
      puVar2[0x11] = iVar4;
    }
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(puVar2);
  }
  ExceptionList = local_10;
  return;
}

