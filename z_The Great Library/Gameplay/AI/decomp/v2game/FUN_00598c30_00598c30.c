// FUN_00598c30 @ 00598c30 body=[[00598c30, 00598c7d] [00598c80, 00598d93]]


void FUN_00598c30(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = in_ECX;
  FUN_005944b0(param_1);
  if (param_1 == 0) {
    local_24 = (int *)0x0;
  }
  else {
    local_24 = (int *)(param_1 + 0x38);
  }
  local_24 = (int *)*local_24;
  if (local_24 != (int *)0x0) {
    puVar1 = (uint *)(in_ECX + 0x6c);
    iVar5 = in_ECX;
    do {
      local_20 = *local_24;
      piVar2 = (int *)(*(int *)(iVar5 + 0x44) + *(int *)(*(int *)(local_20 + 0x38) + 0x24) * 4);
      *piVar2 = *piVar2 + 1000;
      iVar5 = 0;
      if (0 < (int)(*(int *)(in_ECX + 0x70) - *puVar1 & 0xfffffffc)) {
        do {
          iVar4 = FUN_00967f50();
          if ((iVar4 != 0) && (iVar4 == local_20)) {
            if (*(int *)(*puVar1 + iVar5 * 4) != 0) goto LAB_00598d6d;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(*(int *)(in_ECX + 0x70) - *puVar1) >> 2);
      }
      local_28 = FUN_00aae9af(0xac);
      iVar5 = 0;
      local_c = 0;
      if (local_28 != 0) {
        iVar5 = FUN_00595f60(local_28);
      }
      local_c = 0xffffffff;
      local_28 = iVar5;
      FUN_00596120();
      piVar2 = *(int **)(in_ECX + 0x70);
      if (&local_28 < piVar2) {
        piVar3 = (int *)*puVar1;
        if (&local_28 < piVar3) goto LAB_00598d54;
        if (piVar2 == *(int **)(in_ECX + 0x74)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(in_ECX + 0x70) != (undefined4 *)0x0) {
          **(undefined4 **)(in_ECX + 0x70) =
               *(undefined4 *)(*puVar1 + ((int)&local_28 - (int)piVar3 >> 2) * 4);
        }
      }
      else {
LAB_00598d54:
        if (piVar2 == *(int **)(in_ECX + 0x74)) {
          FUN_00a513f0();
        }
        if (*(int **)(in_ECX + 0x70) != (int *)0x0) {
          **(int **)(in_ECX + 0x70) = iVar5;
        }
      }
      *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 4;
LAB_00598d6d:
      local_24 = (int *)local_24[2];
      iVar5 = local_1c;
    } while (local_24 != (int *)0x0);
  }
  ExceptionList = local_14;
  return;
}

