// FUN_0071ed10 @ 0071ed10 body=[[0071ed10, 0071edbb] [0071edbf, 0071ee17] [0071ee1b, 0071ee73] [0071ee77, 0071eecf] [0071eed3, 0071efeb]]


void FUN_0071ed10(int param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52f3b;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 0x3a4);
  _Dst = *(void **)(param_1 + 0x3a0);
  ExceptionList = &local_10;
  if (_Dst != (void *)*puVar1) {
    param_1 = 0;
    ExceptionList = &local_10;
    FID_conflict__memcpy(_Dst,(void *)*puVar1,0);
    *(int *)(iVar3 + 0x3a4) = param_1 + (int)_Dst;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("common_market_sort_by_goods",0x1b);
  local_8 = 0;
  iVar4 = (**(code **)(**(int **)(iVar3 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(iVar3 + 0x3b4);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("common_market_sort_by_produced",0x1e);
  local_8 = 1;
  iVar4 = (**(code **)(**(int **)(iVar3 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(iVar3 + 0x3e0);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("common_market_sort_by_diff",0x1a);
  local_8 = 2;
  iVar4 = (**(code **)(**(int **)(iVar3 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(iVar3 + 0x40c);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("common_market_sort_by_exported",0x1e);
  local_8 = 3;
  iVar4 = (**(code **)(**(int **)(iVar3 + 0x4c) + 0x34))(local_38);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(iVar3 + 0x438);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_14 = (uint *)(DAT_012587f0 + 0xc);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  piVar5 = (int *)*local_14;
  puVar6 = local_14;
  while (((int *)*puVar6 <= piVar5 && (piVar5 < (int *)puVar6[1]))) {
    iVar4 = *piVar5;
    local_1c = piVar5 + 1;
    piVar5 = local_1c;
    if (*(char *)(iVar4 + 0x3c) == '\0') {
      param_1 = FUN_00aae9af(0x2c);
      local_8 = 4;
      if (param_1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0071acd0(param_1,*(undefined4 *)(iVar3 + 0x54),iVar4,iVar3 + 0x464);
      }
      local_8 = 0xffffffff;
      puVar1 = *(undefined4 **)(iVar3 + 0x3a4);
      param_1 = iVar4;
      if ((&param_1 < puVar1) && (puVar2 = *(undefined4 **)(iVar3 + 0x3a0), puVar2 <= &param_1)) {
        if (puVar1 == *(undefined4 **)(iVar3 + 0x3a8)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(iVar3 + 0x3a4) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar3 + 0x3a4) =
               *(undefined4 *)(*(int *)(iVar3 + 0x3a0) + ((int)&param_1 - (int)puVar2 >> 2) * 4);
        }
        *(int *)(iVar3 + 0x3a4) = *(int *)(iVar3 + 0x3a4) + 4;
        piVar5 = local_1c;
        puVar6 = local_14;
      }
      else {
        if (puVar1 == *(undefined4 **)(iVar3 + 0x3a8)) {
          FUN_00a513f0();
        }
        if (*(int **)(iVar3 + 0x3a4) != (int *)0x0) {
          **(int **)(iVar3 + 0x3a4) = iVar4;
        }
        *(int *)(iVar3 + 0x3a4) = *(int *)(iVar3 + 0x3a4) + 4;
        piVar5 = local_1c;
        puVar6 = local_14;
      }
    }
  }
  FUN_00724120();
  ExceptionList = local_10;
  return;
}

