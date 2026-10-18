// FUN_004f97c0 @ 004f97c0 body=[[004f97c0, 004f98bd] [004f98c0, 004f9937] [004f993b, 004f99e5]]


/* WARNING: Removing unreachable block (ram,0x004f98cf) */
/* WARNING: Removing unreachable block (ram,0x004f9910) */
/* WARNING: Removing unreachable block (ram,0x004f9925) */
/* WARNING: Removing unreachable block (ram,0x004f98c0) */
/* WARNING: Removing unreachable block (ram,0x004f9932) */

void FUN_004f97c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba7c20;
  piVar2 = *(int **)(param_1 + 0x7b4);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    FUN_005c93b0(param_2,param_3);
    iVar1 = *(int *)(iVar3 + 0xcc);
    *(undefined4 *)(iVar3 + 200) = param_2;
    *(int *)(iVar3 + 0xcc) = param_3;
    if ((param_3 != iVar1) && (*(int *)(iVar3 + 0x108) != 0)) {
      *(undefined4 *)(iVar3 + 0x18c) = 0;
      FUN_005cae80(iVar3);
    }
    *(undefined1 *)(iVar3 + 0xbc) = 1;
    if (0 < *(int *)(iVar3 + 0xec)) {
      FUN_005d1fc0();
    }
    FUN_005cb2c0(*(undefined4 *)(iVar3 + 0xdc));
    if (*(int *)(iVar3 + 0x74) != 0) {
      FUN_005d0fe0(0 < *(int *)(iVar3 + 0xec));
    }
  }
  if (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU)) {
    local_8 = 0;
    FUN_009beeb0(param_1 + 0x9d8);
    local_8 = 0xffffffff;
  }
  piVar2 = *(int **)(param_1 + 0xe44);
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(int *)(iVar1 + 0x5c) = param_3;
  }
  if (0 < *(int *)(param_1 + 0x9f0)) {
    piVar2 = *(int **)(param_1 + 0x9ec);
    while (piVar2 != (int *)0x0) {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar2 * 4);
      local_18[0] = *(undefined4 *)(iVar1 + 0x358);
      piVar2 = (int *)piVar2[1];
      FUN_004b5730(iVar1,&param_2,local_18,1);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x36c) = param_2;
  *(undefined4 *)(param_1 + 0x214) = param_2;
  *(int *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x370) = param_3;
  *(int *)(param_1 + 0x218) = param_3;
  FUN_0085ccb0();
  ExceptionList = local_10;
  return;
}

