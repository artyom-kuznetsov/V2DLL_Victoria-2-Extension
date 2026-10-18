// FUN_00465e90 @ 00465e90 body=[[00465e90, 00465ee9] [00465eed, 0046603f]]


/* WARNING: Removing unreachable block (ram,0x00465ee4) */

void FUN_00465e90(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d528;
  iVar3 = param_1[1] - *param_1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (iVar3 >> 4 <= in_ECX) {
    local_8 = 0;
    FUN_004669e0();
    iVar3 = param_1[1] - *param_1;
  }
  local_8 = 0xffffffff;
  iVar7 = in_ECX * 0x10;
  iVar3 = *param_1;
  iVar6 = *(int *)(iVar3 + 4 + iVar7) - *(int *)(iVar3 + iVar7);
  do {
    if (param_2 < iVar6 >> 3) {
      iVar3 = *(int *)(*param_1 + iVar7);
      *(undefined4 *)(iVar3 + param_2 * 8) = param_3;
      *(undefined4 *)(iVar3 + 4 + param_2 * 8) = param_4;
      ExceptionList = local_10;
      return;
    }
    puVar8 = (uint *)(iVar3 + iVar7);
    puVar1 = (undefined4 *)puVar8[1];
    if ((&param_5 < puVar1) && (puVar2 = (undefined4 *)*puVar8, puVar2 <= &param_5)) {
      iVar3 = (int)&param_5 - (int)puVar2 >> 3;
      if (puVar1 == (undefined4 *)puVar8[2]) {
        uVar4 = (int)puVar1 - (int)puVar2 >> 3;
        if (0x1ffffffe < uVar4) {
LAB_00466036:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar4 = uVar4 + 1;
        uVar5 = (int)puVar8[2] - (int)puVar2 >> 3;
        if (uVar5 < uVar4) {
          if (0x1fffffff - (uVar5 >> 1) < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          FUN_004237e0(uVar5);
        }
      }
      puVar1 = (undefined4 *)puVar8[1];
      if (puVar1 != (undefined4 *)0x0) {
        uVar4 = *puVar8;
        *puVar1 = *(undefined4 *)(uVar4 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(uVar4 + 4 + iVar3 * 8);
      }
    }
    else {
      if (puVar1 == (undefined4 *)puVar8[2]) {
        uVar4 = (int)((int)puVar1 - *puVar8) >> 3;
        if (0x1ffffffe < uVar4) goto LAB_00466036;
        uVar4 = uVar4 + 1;
        uVar5 = (int)((int)puVar8[2] - *puVar8) >> 3;
        if (uVar5 < uVar4) {
          if (0x1fffffff - (uVar5 >> 1) < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          FUN_004237e0(uVar5);
        }
      }
      puVar1 = (undefined4 *)puVar8[1];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_5;
        puVar1[1] = param_6;
      }
    }
    puVar8[1] = puVar8[1] + 8;
    iVar3 = *param_1;
    iVar6 = *(int *)(iVar3 + 4 + iVar7) - *(int *)(iVar3 + iVar7);
  } while( true );
}

