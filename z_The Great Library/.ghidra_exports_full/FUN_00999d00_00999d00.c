// FUN_00999d00 @ 00999d00 body=[[00999d00, 00999d55] [00999d60, 00999f7d] [00999f81, 00999f91]]


/* WARNING: Removing unreachable block (ram,0x00999dc4) */

void FUN_00999d00(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 ***local_40 [4];
  uint local_30;
  uint local_2c;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41128;
  local_10 = ExceptionList;
  local_14 = (int *)0x0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = (undefined4 ***)((uint)local_40[0] & 0xffffff00);
  local_8 = 0;
  local_1c = 0;
  local_24 = *(int *)(param_1 + 0xfc) - *(int *)(param_1 + 0xf8) >> 2;
  ExceptionList = &local_10;
  if (0 < local_24) {
    do {
      piVar3 = local_14;
      piVar1 = *(int **)(*(int *)(param_1 + 0xf8) + local_1c * 4);
      piVar8 = (int *)piVar1[1];
      if (piVar8 == (int *)0x0) {
        if (piVar1[9] == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)(piVar1[9] + 0x24);
        }
      }
      if ((piVar1[6] == 0) && (piVar1[9] != 0)) {
        local_18 = (int *)(piVar1[9] + 0x28);
      }
      else {
        local_18 = piVar1 + 2;
      }
      if (piVar8 == (int *)0x0) {
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 0x108))(local_14);
          (**(code **)(*piVar3 + 0x10c))(piVar3);
          local_14 = (int *)0x0;
          FUN_00409350(&DAT_00ded94d,0);
        }
      }
      else {
        if (piVar8 == local_14) {
          uVar2 = local_18[4];
          uVar5 = local_30;
          if (uVar2 < local_30) {
            uVar5 = uVar2;
          }
          iVar6 = FUN_00414bd0(uVar5);
          if (((iVar6 == 0) && (local_30 <= uVar2)) && (uVar2 == local_30)) goto LAB_00999ea2;
        }
        piVar3 = local_14;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 0x108))(local_14);
          (**(code **)(*piVar3 + 0x10c))(piVar3);
        }
        local_14 = piVar8;
        FUN_00408ed0(local_18,0,0xffffffff);
        ppppuVar7 = (undefined4 ****)local_40[0];
        if (local_2c < 0x10) {
          ppppuVar7 = local_40;
        }
        (**(code **)(*piVar8 + 0xe8))(piVar8,ppppuVar7);
        local_20 = 0;
        (**(code **)(*piVar8 + 0xfc))(piVar8,&local_20,0);
        (**(code **)(*piVar8 + 0x100))(piVar8,0);
      }
LAB_00999ea2:
      if (local_14 == (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 100) + 0xb0))
                  (*(int **)(param_1 + 100),0x100,piVar1 + 0x25);
      }
      if ((char)piVar1[0x3c] != '\0') {
        (**(code **)(**(int **)(param_1 + 100) + 0xe4))(*(int **)(param_1 + 100),0xae,1);
        (**(code **)(**(int **)(param_1 + 100) + 300))(*(int **)(param_1 + 100),param_1 + 0x6bce0);
      }
      iVar6 = *piVar1;
      uVar4 = (**(code **)(iVar6 + 0x68))(0);
      fVar9 = (float10)(**(code **)(*piVar1 + 0x58))(uVar4);
      (**(code **)(iVar6 + 0x28))(param_1,*(undefined4 *)(param_1 + 100),piVar1 + 0x25,(float)fVar9)
      ;
      if ((char)piVar1[0x3c] != '\0') {
        (**(code **)(**(int **)(param_1 + 100) + 0xe4))(*(int **)(param_1 + 100),0xae,0);
      }
      piVar1 = local_14;
      local_1c = local_1c + 1;
    } while (local_1c < local_24);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0x108))(local_14);
      (**(code **)(*piVar1 + 0x10c))(piVar1);
    }
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

