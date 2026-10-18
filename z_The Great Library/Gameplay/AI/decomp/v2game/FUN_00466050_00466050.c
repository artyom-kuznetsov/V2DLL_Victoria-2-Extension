// FUN_00466050 @ 00466050 body=[[00466050, 0046608b] [00466090, 004660c0] [004660c4, 004661ec]]


void FUN_00466050(int *param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_2c [6];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  local_2c[0] = 0;
  uVar4 = param_1[1] - *param_1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  while ((int)(uVar4 & 0xfffffff0) < 1) {
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    local_c = 0;
    FUN_00466a90();
    local_c = 0xffffffff;
    if (local_2c[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[1]);
    }
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    uVar4 = param_1[1] - *param_1;
  }
  local_c = 0xffffffff;
  puVar1 = (uint *)*param_1;
  iVar5 = puVar1[1] - *puVar1;
  do {
    if (param_2 < iVar5 >> 2) {
      *(undefined4 *)(*(int *)*param_1 + param_2 * 4) = param_3;
      ExceptionList = local_14;
      return;
    }
    piVar2 = (int *)puVar1[1];
    if (local_2c < piVar2) {
      piVar3 = (int *)*puVar1;
      if (local_2c < piVar3) goto LAB_00466162;
      if (piVar2 == (int *)puVar1[2]) {
        uVar4 = (int)piVar2 - (int)piVar3 >> 2;
        if (0x3ffffffe < uVar4) goto LAB_004661e3;
        uVar4 = uVar4 + 1;
        uVar6 = (int)puVar1[2] - (int)piVar3 >> 2;
        if (uVar6 < uVar4) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar4) {
            uVar6 = uVar4;
          }
          FUN_004bf300(uVar6);
        }
      }
      if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar1[1] = *(undefined4 *)(*puVar1 + ((int)local_2c - (int)piVar3 >> 2) * 4)
        ;
      }
    }
    else {
LAB_00466162:
      if (piVar2 == (int *)puVar1[2]) {
        uVar4 = (int)((int)piVar2 - *puVar1) >> 2;
        if (0x3ffffffe < uVar4) {
LAB_004661e3:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar4 = uVar4 + 1;
        uVar6 = (int)((int)puVar1[2] - *puVar1) >> 2;
        if (uVar6 < uVar4) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar4) {
            uVar6 = uVar4;
          }
          FUN_004bf300(uVar6);
        }
      }
      if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar1[1] = 0;
      }
    }
    puVar1[1] = puVar1[1] + 4;
    puVar1 = (uint *)*param_1;
    iVar5 = puVar1[1] - *puVar1;
  } while( true );
}

