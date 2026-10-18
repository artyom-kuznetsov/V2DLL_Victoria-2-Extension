// FUN_006a1020 @ 006a1020 body=[[006a1020, 006a1098] [006a10a0, 006a118a]]


void FUN_006a1020(void)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  int local_8;
  
  puVar1 = (uint *)(in_ECX + 0x68);
  _Dst = (void *)*puVar1;
  if (_Dst != *(void **)(in_ECX + 0x6c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x6c),0);
    *(void **)(in_ECX + 0x6c) = _Dst;
  }
  piVar6 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x30) * 4) + 0xe44);
  if (piVar6 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar6;
    piVar6 = (int *)piVar6[2];
    iVar2 = *(int *)(iVar2 + 0x60);
    while (iVar2 != 0) {
      piVar3 = *(int **)(in_ECX + 0x6c);
      iVar4 = *(int *)(iVar2 + 0x224);
      local_8 = iVar2;
      if ((&local_8 < piVar3) && (piVar5 = (int *)*puVar1, piVar5 <= &local_8)) {
        if (piVar3 == *(int **)(in_ECX + 0x70)) {
          uVar7 = (int)piVar3 - (int)piVar5 >> 2;
          if (0x3ffffffe < uVar7) {
LAB_006a1181:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar7 = uVar7 + 1;
          uVar8 = (int)*(int **)(in_ECX + 0x70) - (int)piVar5 >> 2;
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
        if (*(undefined4 **)(in_ECX + 0x6c) != (undefined4 *)0x0) {
          **(undefined4 **)(in_ECX + 0x6c) =
               *(undefined4 *)(*puVar1 + ((int)&local_8 - (int)piVar5 >> 2) * 4);
        }
      }
      else {
        if (piVar3 == *(int **)(in_ECX + 0x70)) {
          uVar7 = (int)((int)piVar3 - *puVar1) >> 2;
          if (0x3ffffffe < uVar7) goto LAB_006a1181;
          uVar7 = uVar7 + 1;
          uVar8 = (int)((int)*(int **)(in_ECX + 0x70) - *puVar1) >> 2;
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
        if (*(int **)(in_ECX + 0x6c) != (int *)0x0) {
          **(int **)(in_ECX + 0x6c) = iVar2;
        }
      }
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 4;
      iVar2 = iVar4;
    }
    if (piVar6 == (int *)0x0) {
      return;
    }
  } while( true );
}

