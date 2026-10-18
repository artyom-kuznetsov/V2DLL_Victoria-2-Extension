// FUN_007be020 @ 007be020 body=[[007be020, 007be0c7] [007be0cb, 007be12f] [007be133, 007be143]]


void FUN_007be020(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 unaff_ESI;
  bool bVar3;
  undefined4 uVar4;
  undefined1 local_50 [12];
  uint uStack_44;
  undefined4 local_40;
  uint local_3c [4];
  uint uStack_2c;
  undefined4 uStack_28;
  void *pvStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4f0d8;
  pvStack_14 = ExceptionList;
  bVar3 = *(char *)(in_ECX + 0x3c) == '\0';
  ExceptionList = &pvStack_14;
  *(bool *)(in_ECX + 0x3c) = bVar3;
  local_3c[0] = 0xf;
  local_40 = 0;
  local_50[0] = 0;
  if (bVar3) {
    FUN_00409350("expand",6);
    local_c = 0;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_50);
    uVar4 = 2;
  }
  else {
    FUN_00409350("expand",6);
    local_c = 1;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_50);
    uVar4 = 1;
  }
  (**(code **)(*piVar1 + 0x48))(uVar4);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("poplistbutton",0xd);
  pvStack_14 = (void *)0x2;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_3c);
  iVar2 = (**(code **)(*piVar1 + 0x4c))();
  FUN_007c2af0(*(undefined4 *)(in_ECX + 0x40),in_ECX,iVar2 == 2);
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
  ExceptionList = pvStack_20;
  return;
}

