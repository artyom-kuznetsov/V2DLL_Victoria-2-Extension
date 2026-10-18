// FUN_00a787e0 @ 00a787e0 body=[[00a787e0, 00a78886] [00a7888a, 00a788b0]]


void FUN_00a787e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40c13;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e43768;
  puVar1 = in_ECX + 1;
  local_8 = 1;
  local_14 = in_ECX;
  piVar2 = (int *)FUN_00a78a00(puVar1);
  *piVar2 = *piVar2 + -1;
  piVar2 = (int *)FUN_00a78a00(puVar1);
  puVar3 = in_ECX;
  if (*piVar2 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_00a78930(puVar1);
    DeleteCriticalSection(lpCriticalSection);
    FUN_00a78ac0(DAT_01258b44,&local_1c,puVar1);
    FUN_00a39b10(local_1c,local_18);
    FUN_009bd890(DAT_01258b48,&local_1c,puVar1);
    FUN_00462440(local_1c,local_18);
    puVar3 = local_14;
  }
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)puVar1 = 0;
  *puVar3 = &PTR_FUN_00e38a28;
  ExceptionList = local_10;
  return;
}

