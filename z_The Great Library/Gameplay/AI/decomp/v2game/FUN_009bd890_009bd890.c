// FUN_009bd890 @ 009bd890 body=[[009bd890, 009bd9cb] [009bd9d0, 009bda5a]]


/* WARNING: Removing unreachable block (ram,0x009bd8e1) */
/* WARNING: Removing unreachable block (ram,0x009bd9ed) */

int * FUN_009bd890(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *local_18;
  undefined4 *local_10;
  undefined4 *local_8;
  
  local_18 = *(undefined4 **)(param_1 + 4);
  local_8 = (undefined4 *)local_18[1];
  local_10 = local_18;
  if (*(char *)((int)local_8 + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_3 + 0x10);
    do {
      uVar2 = local_8[7];
      uVar3 = uVar1;
      if (uVar2 < uVar1) {
        uVar3 = uVar2;
      }
      uVar3 = FUN_00414bd0(uVar3);
      if (uVar3 == 0) {
        if (uVar1 <= uVar2) {
          uVar3 = (uint)(uVar2 != uVar1);
          goto LAB_009bd916;
        }
LAB_009bd918:
        local_8 = (undefined4 *)local_8[2];
      }
      else {
LAB_009bd916:
        if ((int)uVar3 < 0) goto LAB_009bd918;
        if (*(char *)((int)local_10 + 0x2d) != '\0') {
          uVar3 = *(uint *)(param_3 + 0x10);
          if (uVar1 < *(uint *)(param_3 + 0x10)) {
            uVar3 = uVar1;
          }
          uVar4 = uVar3;
          if (uVar2 <= uVar3) {
            uVar4 = uVar2;
          }
          uVar4 = FUN_00414bd0(uVar4);
          if (uVar4 == 0) {
            if (uVar2 <= uVar3) {
              uVar4 = (uint)(uVar3 != uVar2);
              goto LAB_009bd96b;
            }
          }
          else {
LAB_009bd96b:
            if (-1 < (int)uVar4) goto LAB_009bd978;
          }
          local_10 = local_8;
        }
LAB_009bd978:
        local_18 = local_8;
        local_8 = (undefined4 *)*local_8;
      }
    } while (*(char *)((int)local_8 + 0x2d) == '\0');
  }
  if (*(char *)((int)local_10 + 0x2d) == '\0') {
    local_8 = (undefined4 *)*local_10;
  }
  else {
    local_8 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  }
  if (*(char *)((int)local_8 + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_3 + 0x10);
    do {
      uVar2 = local_8[7];
      uVar3 = uVar1;
      if (uVar2 <= uVar1) {
        uVar3 = uVar2;
      }
      uVar3 = FUN_00414bd0(uVar3);
      if (uVar3 == 0) {
        if (uVar2 <= uVar1) {
          uVar3 = (uint)(uVar1 != uVar2);
          goto LAB_009bda21;
        }
LAB_009bda23:
        local_10 = local_8;
        local_8 = (undefined4 *)*local_8;
      }
      else {
LAB_009bda21:
        if ((int)uVar3 < 0) goto LAB_009bda23;
        local_8 = (undefined4 *)local_8[2];
      }
    } while (*(char *)((int)local_8 + 0x2d) == '\0');
  }
  param_2[1] = (int)local_10;
  *param_2 = (int)local_18;
  return param_2;
}

