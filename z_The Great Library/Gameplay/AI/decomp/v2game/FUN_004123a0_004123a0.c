// FUN_004123a0 @ 004123a0 body=[[004123a0, 0041257b]]


void FUN_004123a0(int param_1)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int local_1c;
  int local_18;
  int local_14;
  
  _Dst = *(void **)(param_1 + 0x360);
  puVar1 = (uint *)(param_1 + 0x360);
  if (_Dst != *(void **)(param_1 + 0x364)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x364),0);
    *(void **)(param_1 + 0x364) = _Dst;
  }
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x3a4) * 0x10 + *(int *)(param_1 + 0x350));
  if ((*(int *)(param_1 + 0x364) - *puVar1 & 0xfffffffc) == 0) {
    FUN_009beeb0(puVar7);
  }
  else {
    FUN_00413a70(*(int *)(param_1 + 0x364),*puVar7,puVar7[1],local_14);
  }
  iVar8 = *(int *)(param_1 + 0x350);
  local_18 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x354) - iVar8 & 0xfffffff0U)) {
    local_14 = 0;
    do {
      if ((local_18 != *(int *)(param_1 + 0x3a4)) &&
         (local_1c = 0,
         0 < (int)(*(int *)(iVar8 + 4 + local_14) - *(int *)(iVar8 + local_14) & 0xfffffffcU))) {
        do {
          iVar2 = *(int *)(*(int *)(iVar8 + local_14) + local_1c * 4);
          puVar7 = (undefined4 *)(*(int *)(iVar8 + local_14) + local_1c * 4);
          if (*(char *)(iVar2 + 0x21d) != '\0') {
            iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0x218) * 4);
            uVar3 = *(uint *)(iVar8 + 0xd58);
            uVar4 = *(uint *)(iVar8 + 0xd5c);
            uVar9 = uVar3;
            if (uVar3 != uVar4) {
              do {
                if (*(int *)(uVar9 + 4) == *(int *)(param_1 + 0x3a4)) break;
                uVar9 = uVar9 + 8;
              } while (uVar9 != uVar4);
            }
            if ((uVar3 <= uVar9) && (uVar9 < uVar4)) {
              puVar5 = *(undefined4 **)(param_1 + 0x364);
              if ((puVar7 < puVar5) && (puVar6 = (undefined4 *)*puVar1, puVar6 <= puVar7)) {
                if (puVar5 == *(undefined4 **)(param_1 + 0x368)) {
                  FUN_00a513f0();
                }
                if (*(undefined4 **)(param_1 + 0x364) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x364) =
                       *(undefined4 *)(*puVar1 + ((int)puVar7 - (int)puVar6 >> 2) * 4);
                }
              }
              else {
                if (puVar5 == *(undefined4 **)(param_1 + 0x368)) {
                  FUN_00a513f0();
                }
                if (*(undefined4 **)(param_1 + 0x364) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x364) = *puVar7;
                }
              }
              *(int *)(param_1 + 0x364) = *(int *)(param_1 + 0x364) + 4;
            }
          }
          iVar8 = *(int *)(param_1 + 0x350);
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(iVar8 + 4 + local_14) - *(int *)(iVar8 + local_14) >> 2);
      }
      iVar8 = *(int *)(param_1 + 0x350);
      local_18 = local_18 + 1;
      local_14 = local_14 + 0x10;
    } while (local_18 < *(int *)(param_1 + 0x354) - iVar8 >> 4);
  }
  return;
}

