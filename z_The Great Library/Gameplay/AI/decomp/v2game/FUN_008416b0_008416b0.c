// FUN_008416b0 @ 008416b0  (requested 008416B0, first bytes: 55 8B EC 6A FF 68 38 FE)


int FUN_008416b0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bafe38;
  local_10 = ExceptionList;
  uVar1 = *(undefined4 *)(in_ECX + 8);
  iVar2 = *(int *)(in_ECX + 0xc);
  uVar3 = *(undefined4 *)(in_ECX + 0x10);
  iVar4 = *(int *)(in_ECX + 0x14);
  local_8 = 0;
  local_20 = *(undefined4 *)(in_ECX + 8);
  local_1c = *(undefined4 *)(in_ECX + 0xc);
  ExceptionList = &local_10;
  local_18 = uVar3;
  local_14 = iVar4;
  cVar6 = FUN_0092ede0(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4)
                                 + 0xbe8) + *(int *)(in_ECX + 0x14) * 4),&local_20,&local_18);
  if (cVar6 == '\0') {
    iVar8 = *(int *)(DAT_012587e4 + 4);
    iVar5 = *(int *)(*(int *)(iVar8 + *(int *)(in_ECX + 0xc) * 4) + 0x156c);
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x14) != *(int *)(in_ECX + 0x14))) ||
       (*(char *)(iVar5 + 0x18) == '\0')) goto LAB_00841813;
  }
  iVar8 = *(int *)(DAT_012587e4 + 4);
  if (*(char *)(*(int *)(iVar8 + *(int *)(in_ECX + 0xc) * 4) + 0x67c) == '\0') {
    piVar7 = *(int **)(*(int *)(iVar8 + *(int *)(in_ECX + 0xc) * 4) + 0x9f8);
    local_14 = 0;
    if (piVar7 != (int *)0x0) {
      do {
        iVar5 = *piVar7;
        piVar7 = (int *)piVar7[2];
        if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4) + 300) ==
            *(int *)(in_ECX + 0x14)) {
          local_14 = local_14 + 1;
        }
      } while (piVar7 != (int *)0x0);
      if (2 < local_14) {
        ExceptionList = local_10;
        return 100;
      }
    }
  }
LAB_00841813:
  local_14 = 0;
  local_20 = uVar3;
  local_1c = iVar4;
  if (iVar2 != param_2) {
    local_20 = uVar1;
    local_1c = iVar2;
  }
  FUN_0083ec10(*(undefined4 *)(iVar8 + param_2 * 4),*(undefined4 *)(iVar8 + local_1c * 4),&local_14,
               0);
  ExceptionList = local_10;
  return 0x32 - local_14;
}

