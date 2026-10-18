// FUN_004e24c0 @ 004e24c0 body=[[004e24c0, 004e2578] [004e2582, 004e25f9] [004e2600, 004e2978]]


/* WARNING: Removing unreachable block (ram,0x004e2527) */
/* WARNING: Removing unreachable block (ram,0x004e2530) */
/* WARNING: Removing unreachable block (ram,0x004e254c) */
/* WARNING: Removing unreachable block (ram,0x004e255f) */
/* WARNING: Removing unreachable block (ram,0x004e2566) */
/* WARNING: Removing unreachable block (ram,0x004e25f8) */
/* WARNING: Removing unreachable block (ram,0x004e2600) */
/* WARNING: Removing unreachable block (ram,0x004e260d) */
/* WARNING: Removing unreachable block (ram,0x004e262e) */
/* WARNING: Removing unreachable block (ram,0x004e2644) */
/* WARNING: Removing unreachable block (ram,0x004e263f) */
/* WARNING: Removing unreachable block (ram,0x004e264a) */
/* WARNING: Removing unreachable block (ram,0x004e2653) */
/* WARNING: Removing unreachable block (ram,0x004e265d) */
/* WARNING: Removing unreachable block (ram,0x004e2667) */
/* WARNING: Removing unreachable block (ram,0x004e2670) */
/* WARNING: Removing unreachable block (ram,0x004e2686) */
/* WARNING: Removing unreachable block (ram,0x004e2693) */
/* WARNING: Removing unreachable block (ram,0x004e26bd) */
/* WARNING: Removing unreachable block (ram,0x004e26e4) */
/* WARNING: Removing unreachable block (ram,0x004e26fa) */
/* WARNING: Removing unreachable block (ram,0x004e2706) */
/* WARNING: Removing unreachable block (ram,0x004e2724) */
/* WARNING: Removing unreachable block (ram,0x004e2783) */
/* WARNING: Removing unreachable block (ram,0x004e2759) */
/* WARNING: Removing unreachable block (ram,0x004e2790) */
/* WARNING: Removing unreachable block (ram,0x004e279e) */
/* WARNING: Removing unreachable block (ram,0x004e27a3) */
/* WARNING: Removing unreachable block (ram,0x004e27dd) */
/* WARNING: Removing unreachable block (ram,0x004e2820) */
/* WARNING: Removing unreachable block (ram,0x004e2827) */
/* WARNING: Removing unreachable block (ram,0x004e2845) */
/* WARNING: Removing unreachable block (ram,0x004e2859) */
/* WARNING: Removing unreachable block (ram,0x004e2860) */
/* WARNING: Removing unreachable block (ram,0x004e2866) */
/* WARNING: Removing unreachable block (ram,0x004e2871) */
/* WARNING: Removing unreachable block (ram,0x004e2878) */
/* WARNING: Removing unreachable block (ram,0x004e287f) */
/* WARNING: Removing unreachable block (ram,0x004e2890) */
/* WARNING: Removing unreachable block (ram,0x004e28b6) */
/* WARNING: Removing unreachable block (ram,0x004e290a) */
/* WARNING: Removing unreachable block (ram,0x004e2927) */
/* WARNING: Removing unreachable block (ram,0x004e280f) */
/* WARNING: Removing unreachable block (ram,0x004e293b) */
/* WARNING: Removing unreachable block (ram,0x004e27a0) */
/* WARNING: Removing unreachable block (ram,0x004e2945) */
/* WARNING: Removing unreachable block (ram,0x004e2948) */
/* WARNING: Removing unreachable block (ram,0x004e294e) */
/* WARNING: Removing unreachable block (ram,0x004e2570) */

void FUN_004e24c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb8140;
  iVar2 = *(int *)(param_1 + 0x94);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    iVar2 = iVar1;
  }
  local_8 = 0;
  if ((*(int *)(param_1 + 0x48) == 0) ||
     (iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x48) * 4),
     0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) {
    iVar2 = *(int *)(param_1 + 0x94);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0057aab0(iVar2);
      iVar2 = iVar1;
    }
    uVar3 = (uint)local_8 >> 8;
    local_8 = CONCAT31((int3)uVar3,1);
    FUN_00849e90();
  }
  FUN_00849e90();
  ExceptionList = local_10;
  return;
}

