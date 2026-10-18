// FUN_006828c0 @ 006828c0 body=[[006828c0, 00682936] [00682940, 00682aed] [00682af1, 00682b3c]]


/* WARNING: Removing unreachable block (ram,0x006829aa) */
/* WARNING: Removing unreachable block (ram,0x006829b0) */
/* WARNING: Removing unreachable block (ram,0x006829bf) */
/* WARNING: Removing unreachable block (ram,0x006829d8) */
/* WARNING: Removing unreachable block (ram,0x006829dc) */
/* WARNING: Removing unreachable block (ram,0x006829e7) */
/* WARNING: Removing unreachable block (ram,0x00682a75) */
/* WARNING: Removing unreachable block (ram,0x00682a87) */
/* WARNING: Removing unreachable block (ram,0x00682a8c) */
/* WARNING: Removing unreachable block (ram,0x00682a97) */
/* WARNING: Removing unreachable block (ram,0x00682aa2) */
/* WARNING: Removing unreachable block (ram,0x00682aa5) */
/* WARNING: Removing unreachable block (ram,0x00682aad) */
/* WARNING: Removing unreachable block (ram,0x00682ae4) */
/* WARNING: Removing unreachable block (ram,0x00682af1) */

void FUN_006828c0(void)

{
  int iVar1;
  int in_ECX;
  int *local_120;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb5451;
  pvStack_14 = ExceptionList;
  local_120 = *(int **)(in_ECX + 0xadc);
  ExceptionList = &pvStack_14;
  while ((*(int **)(in_ECX + 0xadc) <= local_120 && (local_120 < *(int **)(in_ECX + 0xae0)))) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*local_120 + 0x20) * 4) + 0x9e8)
    ;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_004b7c50();
    }
    FUN_005dbd90();
    local_c = 0;
    FUN_005b54c0();
    local_120 = local_120 + 1;
    local_c = 0xffffffff;
    FUN_005b5da0();
  }
  ExceptionList = pvStack_14;
  return;
}

