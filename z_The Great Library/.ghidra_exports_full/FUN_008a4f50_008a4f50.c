// FUN_008a4f50 @ 008a4f50 body=[[008a4f50, 008a4fc4] [008a4fc8, 008a510a]]


/* WARNING: Removing unreachable block (ram,0x008a4fbb) */

void FUN_008a4f50(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int extraout_EDX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b93b03;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00ded94d,0);
  local_c = 0;
  cVar3 = FUN_00416db0();
  local_c = 0xffffffff;
  if (cVar3 == '\0') {
    if (DAT_0125ce80 == 0) {
      iVar4 = FUN_00aae9af(0x3c);
      local_c = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004dada0();
      }
      local_c = 0xffffffff;
      FUN_004dc340(uVar5);
    }
    iVar4 = FUN_004dc420(in_ECX + 0x20);
    if (iVar4 == 0) {
      iVar4 = FUN_004dacc0();
    }
    if ((((iVar4 != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
        ((*(char *)(param_1 + 8) != 'R' ||
         ((*(char *)(param_1 + 9) != 'E' || (*(char *)(param_1 + 10) != 'B')))))) &&
       (cVar3 = FUN_004dd3a0(), cVar3 != '\0')) {
      iVar1 = *(int *)(DAT_012587e4 + 4);
      if (*(char *)(*(int *)(iVar1 + *(int *)(extraout_EDX + 0xc) * 4) + 0x12d0) != '\0') {
        iVar2 = *(int *)(*(int *)(iVar1 + *(int *)(extraout_EDX + 0xc) * 4) + 0xbcc);
        if ((*(char *)(*(int *)(iVar4 + 0x58) + *(int *)(iVar2 + 0x2fc)) == '\0') &&
           (*(char *)(iVar4 + 0x130) == '\0')) {
          ExceptionList = local_14;
          return;
        }
        if ((*(char *)(iVar4 + 0x130) == '\0') &&
           (*(int *)(*(int *)(iVar2 + 8) + *(int *)(iVar4 + 0x58) * 4) < 1)) {
          ExceptionList = local_14;
          return;
        }
      }
      iVar1 = *(int *)(iVar1 + *(int *)(extraout_EDX + 0xc) * 4);
      FUN_0052c6b0(iVar1,iVar4,
                   *(undefined4 *)
                    (*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4) + 0x188)
                  );
    }
  }
  ExceptionList = local_14;
  return;
}

