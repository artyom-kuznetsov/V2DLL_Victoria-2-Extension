// FUN_0067a360 @ 0067a360 body=[[0067a360, 0067a569]]


void FUN_0067a360(uint param_1,undefined4 param_2)

{
  void *_Dst;
  int *piVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint uVar4;
  char cVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *local_18;
  int local_10;
  int *local_8;
  
  uVar4 = param_1;
  puVar10 = (uint *)(param_1 + 0xb8);
  _Dst = (void *)*puVar10;
  if (_Dst != *(void **)(param_1 + 0xbc)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0xbc),0);
    *(void **)(param_1 + 0xbc) = _Dst;
  }
  puVar6 = (uint *)(param_1 + 0x54);
  local_10 = 0;
  do {
    local_18 = (undefined4 *)*puVar6;
    while (((undefined4 *)*puVar6 <= local_18 && (local_18 < (undefined4 *)puVar6[1]))) {
      piVar1 = (int *)*local_18;
      local_8 = piVar1;
      cVar5 = (**(code **)(*piVar1 + 0x10))();
      if ((cVar5 == '\0') && (cVar5 = FUN_0043ef60(), cVar5 != '\0')) {
        (**(code **)(*piVar1 + 8))(param_2);
        ppiVar2 = *(int ***)(param_1 + 0xbc);
        if ((&local_8 < ppiVar2) && (ppiVar3 = (int **)*puVar10, ppiVar3 <= &local_8)) {
          if (ppiVar2 == *(int ***)(param_1 + 0xc0)) {
            uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
            if (0x3ffffffe < uVar7) {
LAB_0067a560:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            uVar7 = uVar7 + 1;
            uVar8 = (int)*(int ***)(param_1 + 0xc0) - (int)ppiVar3 >> 2;
            if (uVar8 < uVar7) {
              if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                uVar8 = 0;
              }
              else {
                uVar8 = uVar8 + (uVar8 >> 1);
              }
              if (uVar8 < uVar7) {
                uVar8 = uVar7;
              }
              FUN_004bf300(uVar8);
            }
          }
          if (*(undefined4 **)(param_1 + 0xbc) == (undefined4 *)0x0) goto LAB_0067a4bf;
          **(undefined4 **)(param_1 + 0xbc) =
               *(undefined4 *)(*puVar10 + ((int)&local_8 - (int)ppiVar3 >> 2) * 4);
          *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 4;
          local_18 = local_18 + 1;
        }
        else {
          if (ppiVar2 == *(int ***)(param_1 + 0xc0)) {
            uVar7 = (int)((int)ppiVar2 - *puVar10) >> 2;
            if (0x3ffffffe < uVar7) goto LAB_0067a560;
            uVar7 = uVar7 + 1;
            uVar8 = (int)((int)*(int ***)(param_1 + 0xc0) - *puVar10) >> 2;
            if (uVar8 < uVar7) {
              if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                uVar8 = 0;
              }
              else {
                uVar8 = uVar8 + (uVar8 >> 1);
              }
              if (uVar8 < uVar7) {
                uVar8 = uVar7;
              }
              FUN_004bf300(uVar8);
            }
          }
          if (*(undefined4 **)(param_1 + 0xbc) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xbc) = piVar1;
          }
LAB_0067a4bf:
          *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 4;
          local_18 = local_18 + 1;
        }
      }
      else {
        local_18 = local_18 + 1;
        FUN_004c94b0(piVar1);
      }
    }
    local_10 = local_10 + 1;
    puVar6 = puVar6 + 4;
    if (4 < local_10) {
      if (0 < (int)(*(int *)(param_1 + 0xbc) - *puVar10 & 0xfffffffc)) {
        piVar1 = (int *)(param_1 + 0xbc);
        param_1 = param_1 & 0xffffff00;
        FUN_0067b0c0(*puVar10,*piVar1,(int)(*piVar1 - *puVar10) >> 2,param_1);
        iVar11 = (int)(*(int *)(uVar4 + 0xbc) - *puVar10) >> 2;
        iVar9 = 0;
        if (0 < iVar11) {
          do {
            (**(code **)(**(int **)(*(int *)(*puVar10 + iVar9 * 4) + 0x10) + 0xb0))();
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar11);
        }
      }
      return;
    }
  } while( true );
}

