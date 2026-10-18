// FUN_00a71fa0 @ 00a71fa0 body=[[00a71fa0, 00a7207a]]


uint * FUN_00a71fa0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_2;
  iVar4 = param_1;
  puStack_c = &LAB_00b3b4d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_8 = 0;
  local_18 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) & 0xffffffe0U)) {
    local_14 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x1c + local_14);
      puVar2 = (undefined4 *)puVar5[1];
      param_1 = uVar1;
      if (&param_1 < puVar2) {
        puVar3 = (undefined4 *)*puVar5;
        if (&param_1 < puVar3) goto LAB_00a72035;
        if (puVar2 == (undefined4 *)puVar5[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)puVar5[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar5[1] =
               *(undefined4 *)(*puVar5 + ((int)&param_1 - (int)puVar3 >> 2) * 4);
        }
      }
      else {
LAB_00a72035:
        if (puVar2 == (undefined4 *)puVar5[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)puVar5[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar5[1] = uVar1;
        }
      }
      puVar5[1] = puVar5[1] + 4;
      local_14 = local_14 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar4 + 0x5c) - *(int *)(iVar4 + 0x58) >> 5);
  }
  ExceptionList = local_10;
  return puVar5;
}

