// FUN_0071eab0 @ 0071eab0 body=[[0071eab0, 0071eb5b] [0071eb5f, 0071ebb7] [0071ebbb, 0071ec13] [0071ec17, 0071ed09]]


void FUN_0071eab0(int param_1)

{
  uint *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52f73;
  local_10 = ExceptionList;
  puVar1 = (uint *)(param_1 + 0x308);
  _Dst = (void *)*puVar1;
  ExceptionList = &local_10;
  if (_Dst != *(void **)(param_1 + 0x30c)) {
    ExceptionList = &local_10;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x30c),0);
    *(void **)(iVar4 + 0x30c) = _Dst;
  }
  iVar5 = param_1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("stockpile_sort_by_goods",0x17);
  local_8 = 0;
  iVar6 = (**(code **)(**(int **)(iVar5 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(iVar5 + 0x31c);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("stockpile_sort_by_value",0x17);
  local_8 = 1;
  iVar6 = (**(code **)(**(int **)(iVar5 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(iVar5 + 0x348);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("stockpile_sort_by_change",0x18);
  local_8 = 2;
  iVar6 = (**(code **)(**(int **)(iVar5 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(iVar5 + 0x374);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_14 = (uint *)(DAT_012587f0 + 0xc);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  piVar7 = (int *)*local_14;
  puVar8 = local_14;
  while (((int *)*puVar8 <= piVar7 && (piVar7 < (int *)puVar8[1]))) {
    iVar6 = *piVar7;
    local_1c = piVar7 + 1;
    piVar7 = local_1c;
    if (*(char *)(iVar6 + 0x3c) == '\0') {
      param_1 = FUN_00aae9af(0x38);
      local_8 = 3;
      if (param_1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0071a2e0(param_1,*(undefined4 *)(iVar5 + 0x54),iVar6,iVar5 + 0x464);
      }
      local_8 = 0xffffffff;
      puVar2 = *(undefined4 **)(iVar4 + 0x30c);
      param_1 = iVar6;
      if ((&param_1 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= &param_1)) {
        if (puVar2 == *(undefined4 **)(iVar4 + 0x310)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(iVar4 + 0x30c) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar4 + 0x30c) =
               *(undefined4 *)(*puVar1 + ((int)&param_1 - (int)puVar3 >> 2) * 4);
        }
        *(int *)(iVar4 + 0x30c) = *(int *)(iVar4 + 0x30c) + 4;
        piVar7 = local_1c;
        puVar8 = local_14;
      }
      else {
        if (puVar2 == *(undefined4 **)(iVar4 + 0x310)) {
          FUN_00a513f0();
        }
        if (*(int **)(iVar4 + 0x30c) != (int *)0x0) {
          **(int **)(iVar4 + 0x30c) = iVar6;
        }
        *(int *)(iVar4 + 0x30c) = *(int *)(iVar4 + 0x30c) + 4;
        piVar7 = local_1c;
        puVar8 = local_14;
      }
    }
  }
  FUN_00723e70();
  ExceptionList = local_10;
  return;
}

