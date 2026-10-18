// FUN_006d7180 @ 006d7180 body=[[006d7180, 006d72a0] [006d72a4, 006d72b4]]


void FUN_006d7180(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uStack_58;
  undefined1 auStack_54 [16];
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  uint uStack_28;
  undefined4 uStack_24;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_006d79f0(in_ECX);
  FUN_006dd7a0(in_ECX);
  FUN_006d96f0(in_ECX);
  FUN_006db2e0(in_ECX);
  FUN_006dd080(in_ECX);
  FUN_006ddd10();
  iVar1 = *(int *)(in_ECX + 0x2d0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) &&
     (*(char *)(*(int *)(iVar1 + 0x20) + 0x67) != '\0')) {
    FUN_006d2030(iVar1);
  }
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x12d0)
      == '\0') {
    uStack_24 = 0xf;
    uStack_28 = 0;
    auStack_38[0] = 0;
    FUN_00409350("unciv_overlay",0xd);
    puStack_10 = (undefined1 *)0x1;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x44))(auStack_38);
    (**(code **)(*piVar3 + 0x34))();
    uVar2 = uStack_28;
  }
  else {
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = 0;
    FUN_00409350("unciv_overlay",0xd);
    puStack_10 = (undefined1 *)0x0;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x44))(auStack_54);
    (**(code **)(*piVar3 + 0x38))();
    uStack_3c = uStack_58;
    uVar2 = uStack_44;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
  ExceptionList = pvStack_1c;
  return;
}

