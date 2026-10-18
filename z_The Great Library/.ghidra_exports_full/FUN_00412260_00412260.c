// FUN_00412260 @ 00412260 body=[[00412260, 004122ed] [004122f3, 0041236b] [00412371, 0041239a]]


/* WARNING: Removing unreachable block (ram,0x00412336) */
/* WARNING: Removing unreachable block (ram,0x0041234c) */

void FUN_00412260(void)

{
  void *_Dst;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  int local_2c;
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  _Dst = *(void **)(unaff_EDI + 0x360);
  ExceptionList = &local_14;
  if (_Dst != *(void **)(unaff_EDI + 0x364)) {
    ExceptionList = &local_14;
    FID_conflict__memcpy(_Dst,*(void **)(unaff_EDI + 0x364),0);
    *(void **)(unaff_EDI + 0x364) = _Dst;
  }
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x354) - *(int *)(unaff_EDI + 0x350) & 0xfffffff0U)) {
    local_2c = 0;
    do {
      piVar3 = (int *)(*(int *)(unaff_EDI + 0x350) + local_2c);
      if (piVar3 != local_28) {
        if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*piVar3);
        }
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      local_2c = local_2c + 0x10;
      local_c = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EDI + 0x354) - *(int *)(unaff_EDI + 0x350) >> 4);
  }
  piVar3 = *(int **)(unaff_EDI + 0x350);
  if (piVar3 != *(int **)(unaff_EDI + 0x354)) {
    piVar1 = *(int **)(unaff_EDI + 0x354);
    for (piVar4 = piVar3; piVar4 != piVar1; piVar4 = piVar4 + 4) {
      if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
    }
    *(int **)(unaff_EDI + 0x354) = piVar3;
  }
  ExceptionList = local_14;
  return;
}

