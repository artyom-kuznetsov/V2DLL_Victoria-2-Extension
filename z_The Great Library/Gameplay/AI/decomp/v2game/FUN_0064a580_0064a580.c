// FUN_0064a580 @ 0064a580 body=[[0064a580, 0064a688] [0064a692, 0064a6c3]]


void FUN_0064a580(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b455b6;
  puVar1 = *(undefined4 **)(in_ECX + 0xa0);
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  while (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    puVar1 = (undefined4 *)puVar1[3];
    puVar4 = (undefined4 *)FUN_00aae9af(0x44);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0x18d;
      *puVar4 = CCommand::vftable;
      puVar4[7] = 0xf;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      local_c = 1;
      puVar4[0xb] = 0x496;
      puVar4[0xc] = 0x496;
      *(undefined2 *)(puVar4 + 0xd) = 0xffff;
      FUN_00409350(&DAT_00ded94d,0);
      puVar4[9] = 0;
      *(undefined2 *)(puVar4 + 10) = 0;
      *(undefined2 *)((int)puVar4 + 0x36) = 0;
      puVar4[0xe] = 0;
      *puVar4 = CStartAICommand::vftable;
      puVar4[0xf] = uVar2;
      puVar4[0x10] = uVar3;
    }
    local_c = 0xffffffff;
    iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(puVar4);
  }
  if (*(int *)(in_ECX + 0xa0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0xa0));
  }
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x38))();
  ExceptionList = pvStack_14;
  return;
}

