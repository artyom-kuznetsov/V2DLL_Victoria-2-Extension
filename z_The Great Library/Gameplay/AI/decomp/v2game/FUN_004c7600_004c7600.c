// FUN_004c7600 @ 004c7600 body=[[004c7600, 004c77ae]]


void FUN_004c7600(int param_1)

{
  void *_Dst;
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  
  cVar1 = FUN_00443890();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    return;
  }
  piVar2 = (int *)(param_1 + 0x168);
  local_c = 6;
  do {
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      _Dst = *(void **)(iVar3 + 0x94);
      if (_Dst != *(void **)(iVar3 + 0x98)) {
        FID_conflict__memcpy(_Dst,*(void **)(iVar3 + 0x98),0);
        *(void **)(iVar3 + 0x98) = _Dst;
      }
      FUN_00440250(iVar3);
      FUN_004c94b0(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar2 = (int *)(param_1 + 0x180);
  iVar3 = 4;
  do {
    if (*piVar2 != 0) {
      FUN_004c94b0(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar2 = (int *)(param_1 + 400);
  iVar3 = 4;
  do {
    if (*piVar2 != 0) {
      FUN_004c94b0(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_004c94b0(*(int *)(param_1 + 0x1a0));
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_004c94b0(*(int *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

