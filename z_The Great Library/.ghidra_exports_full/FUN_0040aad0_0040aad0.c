// FUN_0040aad0 @ 0040aad0 body=[[0040aad0, 0040acef] [0040acf3, 0040ad45]]


void FUN_0040aad0(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  uint *puVar9;
  int local_48 [4];
  int local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  iVar7 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x218);
  piVar1 = (int *)(in_ECX + 0x3c);
  if (*(int *)(DAT_012588e8 + 0xb60) != iVar7) {
    local_38 = *(int *)(DAT_012588e8 + 0xb24);
    iVar4 = *(int *)(in_ECX + 0x40);
    local_48[1] = *(int *)(local_38 + 0x1e24);
    puVar9 = (uint *)(iVar7 * 0x10 + *(int *)(local_48[1] + 0x350));
    iVar7 = (int)(puVar9[1] - *puVar9) >> 2;
    if (iVar7 <= iVar4) {
      local_48[2] = 0;
      ExceptionList = &local_14;
      if (iVar4 != iVar7 && -1 < iVar4 - iVar7) {
        local_48[0] = 0;
        ExceptionList = &local_14;
        local_48[3] = in_ECX;
        do {
          piVar5 = (int *)puVar9[1];
          if (local_48 < piVar5) {
            piVar6 = (int *)*puVar9;
            if (local_48 < piVar6) goto LAB_0040ab98;
            if (piVar5 == (int *)puVar9[2]) {
              FUN_00a513f0();
            }
            in_ECX = local_48[3];
            if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar9[1] =
                   *(undefined4 *)(*puVar9 + ((int)local_48 - (int)piVar6 >> 2) * 4);
            }
          }
          else {
LAB_0040ab98:
            if (piVar5 == (int *)puVar9[2]) {
              FUN_00a513f0();
            }
            if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar9[1] = 0;
            }
          }
          puVar9[1] = puVar9[1] + 4;
          local_48[2] = local_48[2] + 1;
        } while (local_48[2] < *(int *)(in_ECX + 0x40) - ((int)(puVar9[1] - *puVar9) >> 2));
      }
      piVar5 = (int *)puVar9[1];
      if ((piVar1 < piVar5) && (piVar6 = (int *)*puVar9, piVar6 <= piVar1)) {
        if (piVar5 == (int *)puVar9[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar9[1] = *(undefined4 *)(*puVar9 + ((int)piVar1 - (int)piVar6 >> 2) * 4)
          ;
        }
      }
      else {
        if (piVar5 == (int *)puVar9[2]) {
          FUN_00a513f0();
        }
        if ((int *)puVar9[1] != (int *)0x0) {
          *(int *)puVar9[1] = *piVar1;
        }
      }
      puVar9[1] = puVar9[1] + 4;
      *(int *)(*piVar1 + 0x1d0) = local_38;
      FUN_00407b10();
      iVar7 = local_48[1];
      *(undefined1 *)(*piVar1 + 0x21c) = 0;
      FUN_004123a0(local_48[1]);
      if (*(int *)(iVar7 + 0x34c) == 0) {
        FUN_0040d870();
        FUN_0040f740();
        FUN_0040f4d0();
      }
      *piVar1 = 0;
      ExceptionList = local_14;
      return;
    }
    iVar7 = *(int *)(*puVar9 + iVar4 * 4);
    ExceptionList = &local_14;
    FUN_00401a30();
    FUN_00406ee0(iVar7,*piVar1);
    FUN_00407b10();
    cVar2 = *(char *)(*piVar1 + 0x21d);
    cVar3 = *(char *)(iVar7 + 0x21d);
    *(char *)(iVar7 + 0x21d) = cVar2;
    *(bool *)(iVar7 + 0x21c) = cVar2 != cVar3;
    uVar8 = FUN_00405af0(*piVar1);
    local_c = 0;
    FUN_00408ed0(uVar8,0,0xffffffff);
    iVar4 = local_48[1];
    local_c = 0xffffffff;
    *(undefined1 *)(iVar7 + 0x21c) = 1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    *(undefined1 *)(iVar7 + 0x21c) = 0;
    FUN_004123a0(local_48[1]);
    if (*(int *)(iVar4 + 0x34c) == 0) {
      FUN_0040d870();
      FUN_0040f740();
      FUN_0040f4d0();
    }
  }
  ExceptionList = local_14;
  return;
}

