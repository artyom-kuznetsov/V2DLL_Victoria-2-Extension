// FUN_00b128c0 @ 00b128c0 body=[[00b128c0, 00b129df]]


undefined4 * FUN_00b128c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39ace;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)
           (*(code *)PTR_FUN_00f01b08)
                     (0x1c,0xcb,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe0);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    FUN_00b0ef10(param_1);
    *puVar3 = &PTR_FUN_00de03d4;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 6) = 0xcb;
    param_1 = puVar3;
  }
  uVar5 = *(uint *)(in_ECX + 0x10);
  uVar2 = param_1[4];
  piVar1 = param_1 + 3;
  uStack_4 = 0xffffffff;
  if ((uVar5 != uVar2) && (param_1[4] = uVar5, uVar2 < uVar5)) {
    if ((uint)param_1[5] < uVar5) {
      FUN_00adfdb0(uVar5);
    }
    if (uVar2 < uVar5) {
      iVar4 = uVar2 * 0xc;
      iVar6 = uVar5 - uVar2;
      do {
        puVar3 = (undefined4 *)(*piVar1 + iVar4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0xffffffff;
          *(undefined1 *)(puVar3 + 2) = 0;
        }
        iVar4 = iVar4 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      *(undefined4 *)(iVar4 + 4 + *piVar1) = *(undefined4 *)(iVar4 + 4 + *(int *)(in_ECX + 0xc));
      *(undefined4 *)(iVar4 + *piVar1) = *(undefined4 *)(iVar4 + *(int *)(in_ECX + 0xc));
      *(undefined1 *)(iVar4 + 8 + *piVar1) = 0;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar5 < *(uint *)(in_ECX + 0x10));
  }
  ExceptionList = local_c;
  return param_1;
}

