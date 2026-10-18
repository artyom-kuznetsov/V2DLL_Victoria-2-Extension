// FUN_00855780 @ 00855780 body=[[00855780, 0085593f]]


void FUN_00855780(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_1c [4];
  int local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb7c48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x1b4))();
  piVar3 = (int *)*puVar2;
  while (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    piVar3 = (int *)piVar3[2];
    if (((*(int *)(iVar5 + 0xec) < 1) && (*(int *)(iVar5 + 0x74) == 0)) &&
       (*(int *)(*(int *)(iVar5 + 0xdc) + 0x58) != *(int *)(in_ECX[0x2b] + 0x58))) {
      local_8 = 0;
      local_14 = CSafePathFind::vftable;
      FUN_00826aa0(in_ECX,iVar5,in_ECX[0x2b],&local_14);
      local_8 = 0xffffffff;
      FUN_00849e90();
    }
  }
  piVar3 = (int *)(**(code **)(*in_ECX + 0x1b4))();
  piVar3 = (int *)*piVar3;
  if (piVar3 != (int *)0x0) {
    iVar5 = 0;
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar5 = iVar5 + *(int *)(iVar1 + 0x40);
    } while (piVar3 != (int *)0x0);
    if (0 < iVar5) {
      puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x1b4))();
      iVar5 = 0;
      for (piVar3 = (int *)*puVar2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        iVar5 = iVar5 + *(int *)(*piVar3 + 0x40);
      }
      puVar6 = local_1c;
      uVar4 = (**(code **)(*in_ECX + 0x1b4))(puVar6);
      local_14 = (undefined **)FUN_005dc180(uVar4,puVar6);
      FUN_00401000(((float)iVar5 * 0.33 + 0.0005) * 1000.0);
      iVar5 = FUN_00b31c00();
      if (iVar5 <= (int)*local_14) {
        local_18 = in_ECX[0xd];
        iVar5 = *in_ECX;
        if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0x67c) != '\0') {
          iVar5 = (**(code **)(iVar5 + 0xe8))();
          FUN_00824f30(*(undefined4 *)(iVar5 + 0x210),in_ECX);
          in_ECX[0xc] = 2;
          ExceptionList = local_10;
          return;
        }
        goto LAB_00855927;
      }
    }
  }
  iVar5 = *in_ECX;
LAB_00855927:
  (**(code **)(iVar5 + 0xd4))();
  ExceptionList = local_10;
  return;
}

