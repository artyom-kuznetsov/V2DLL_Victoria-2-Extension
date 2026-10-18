// FUN_00800d60 @ 00800d60 body=[[00800d60, 008010c5]]


void FUN_00800d60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_bc;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_88;
  int iStack_84;
  undefined1 auStack_24 [32];
  
  local_bc = 0;
  local_b8 = 0;
  iVar4 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
  if (*(char *)(*(int *)(iVar1 + 0x20) + 0x67) != '\0') {
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if (((*(int *)(iVar1 + 0x24) != 0) &&
        (local_bc = FUN_004b9520(*(int *)(iVar1 + 0x24)), local_bc != 0)) && (iVar1 = 1, 1 < iVar4))
    {
      do {
        iVar2 = FUN_004b9520(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) + 0xc));
        if ((iVar2 != 0) && (*(int *)(local_bc + 8) == *(int *)(iVar2 + 8))) {
          FUN_004c25b0();
          FUN_004c1180();
          if ((local_b8._4_4_ <= iStack_ac) &&
             ((local_b8._4_4_ < iStack_ac || ((uint)local_b8 < uStack_b0)))) {
            local_b8 = CONCAT44(iStack_ac,uStack_b0);
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
  }
  iVar1 = 1;
  if (1 < iVar4) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) + 0xc);
      if (DAT_01258728 == (int *)0x0) {
        DAT_01258728 = (int *)FUN_00aae9af(0x14);
        if (DAT_01258728 == (int *)0x0) {
          DAT_01258728 = (int *)0x0;
        }
        else {
          *DAT_01258728 = 0;
          DAT_01258728[1] = 0;
          DAT_01258728[2] = 0;
          *(undefined1 *)(DAT_01258728 + 4) = 0;
        }
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x58) * 0xb0 + 0xc + *DAT_01258728);
      if (((((local_bc == 0) || (iVar2 == 0)) || (*(int *)(local_bc + 8) != *(int *)(iVar2 + 8))) ||
          (FUN_004c1180(), iStack_84 < 0)) ||
         (((iStack_84 < 1 && (uStack_88 == 0)) ||
          ((local_b8 < 0 || ((local_b8._4_4_ < 1 && ((uint)local_b8 == 0)))))))) {
        FUN_007ebb80();
      }
      else {
        __alldiv(uStack_88 << 0xf,iStack_84 << 0xf | uStack_88 >> 0x11,(uint)local_b8,local_b8._4_4_
                );
        FUN_009b7270(auStack_24);
      }
      uVar3 = FUN_009b6df0();
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar1 * 4) = uVar3;
      iVar2 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 4) = uVar3;
    } while (iVar1 < iVar4);
  }
  return;
}

