// FUN_006a0600 @ 006a0600 body=[[006a0600, 006a0770]]


void FUN_006a0600(void)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  int local_1c [2];
  uint *local_14;
  int *local_10;
  
  puVar1 = (uint *)(in_ECX + 0x68);
  _Dst = (void *)*puVar1;
  local_1c[1] = in_ECX;
  if (_Dst != *(void **)(in_ECX + 0x6c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x6c),0);
    *(void **)(in_ECX + 0x6c) = _Dst;
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(local_1c[1] + 0x30) * 4);
  local_10 = *(int **)(iVar2 + 0x9d8);
  local_14 = (uint *)(iVar2 + 0x9d8);
  do {
    while( true ) {
      if ((local_10 < (int *)*local_14) || ((int *)local_14[1] <= local_10)) {
        return;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(local_1c[1] + 0x4c) + 0xacc) + *local_10 * 4);
      piVar3 = *(int **)(in_ECX + 0x6c);
      local_10 = local_10 + 1;
      local_1c[0] = iVar2;
      if ((local_1c < piVar3) && (piVar4 = (int *)*puVar1, piVar4 <= local_1c)) break;
      if (piVar3 == *(int **)(in_ECX + 0x70)) {
        uVar5 = (int)((int)piVar3 - *puVar1) >> 2;
        if (0x3ffffffe < uVar5) goto LAB_006a0760;
        uVar5 = uVar5 + 1;
        uVar6 = (int)((int)*(int **)(in_ECX + 0x70) - *puVar1) >> 2;
        if (uVar6 < uVar5) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          FUN_004bf300(uVar6);
        }
      }
      if (*(int **)(in_ECX + 0x6c) != (int *)0x0) {
        **(int **)(in_ECX + 0x6c) = iVar2;
      }
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 4;
    }
    if (piVar3 == *(int **)(in_ECX + 0x70)) {
      uVar5 = (int)piVar3 - (int)piVar4 >> 2;
      if (0x3ffffffe < uVar5) {
LAB_006a0760:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar5 = uVar5 + 1;
      uVar6 = (int)*(int **)(in_ECX + 0x70) - (int)piVar4 >> 2;
      if (uVar6 < uVar5) {
        if (0x3fffffff - (uVar6 >> 1) < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        FUN_004bf300(uVar6);
      }
    }
    if (*(undefined4 **)(in_ECX + 0x6c) != (undefined4 *)0x0) {
      **(undefined4 **)(in_ECX + 0x6c) =
           *(undefined4 *)(*puVar1 + ((int)local_1c - (int)piVar4 >> 2) * 4);
    }
    *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 4;
  } while( true );
}

